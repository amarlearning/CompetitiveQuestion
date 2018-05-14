import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class RoyandProfilePicture {
    
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt()
        {
            return Integer.parseInt(next());
        }
 
        long nextLong()
        {
            return Long.parseLong(next());
        }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }
    
    public static void main(String args[] ) {
        
        FastReader fs = new FastReader();
        
        int length = fs.nextInt();
        int testCase = fs.nextInt();
        
        for(int i = 0; i < testCase; i++) {
            int width = fs.nextInt();
            int height = fs.nextInt();
            
            if(width < length || height < length) {
                System.out.println("UPLOAD ANOTHER");
            } else {
                if(width == height) {
                    System.out.println("ACCEPTED");
                } else {
                    System.out.println("CROP IT");
                }
            }
        }
    }
}
