import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;

class Cipher {
    
    static class FastReader
    {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public FastReader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public FastReader(String file_name) throws IOException
        {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public String readLine() throws IOException
        {
            byte[] buf = new byte[64]; // line length
            int cnt = 0, c;
            while ((c = read()) != -1)
            {
                if (c == '\n')
                    break;
                buf[cnt++] = (byte) c;
            }
            return new String(buf, 0, cnt);
        }
 
        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');
 
            if (neg)
                return -ret;
            return ret;
        }
 
        public long nextLong() throws IOException
        {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        public double nextDouble() throws IOException
        {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
 
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
 
            if (c == '.')
            {
                while ((c = read()) >= '0' && c <= '9')
                {
                    ret += (c - '0') / (div *= 10);
                }
            }
 
            if (neg)
                return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
 
        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
 
        public void close() throws IOException
        {
            if (din == null)
                return;
            din.close();
        }
    }
    
    public static void main(String args[] ) throws IOException {
        
        FastReader fs = new FastReader();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        StringBuffer sb = new StringBuffer();
        String normalString = fs.readLine();
        int encryptedKey = fs.nextInt();
        
        for(int i = 0; i < normalString.length(); i++) {
            
            int index = (int) normalString.charAt(i);
            
            if(index >= 65 && index <= 90) {
                
                int param = encryptedKey % 26;
                if((index + param) > 90) {
                    
                    int temp = (index + param) - 90;
                    index = 64 + temp;
                    
                } else {
                    index += param;
                }
                
                sb.append((char) index);
                
            } else if(index >= 97 && index <= 122) {
                
                int param = encryptedKey % 26;
                if((index + param) > 122) {
                    
                    int temp = (index + param) - 122;
                    index = 96 + temp;
                    
                } else {
                    index += param;
                }
                
                sb.append((char) index);
                
            } else if(index >= 48 && index <= 57) {
                
                int param = encryptedKey % 10;
                if((index + param) > 57) {
                    
                    int temp = (index + param) - 57;
                    index = 47 + temp;
                    
                } else {
                    index += param;
                }
                
                sb.append((char) index);
                
            } else {
                sb.append((char) index);
            }
        }
        
        bw.write(sb.toString());
        bw.write("\n");
        
        fs.close();
        bw.close();
    }
}
