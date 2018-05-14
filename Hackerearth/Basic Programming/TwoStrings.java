import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class TwoStrings {
    
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
        int testCases = fs.nextInt();
        
        for(int k = 0; k < testCases; k++) {
            
            int total = 0;
            String one = fs.next();
            String two = fs.next();
            int[] characterCount = new int[30];
            
            for(int i = 0; i < one.length(); i++) {
                characterCount[((int) one.charAt(i) - 96)]++;
            }
            
            for(int i = 0; i < two.length(); i++) {
                characterCount[((int) two.charAt(i) - 96)]--;
            }
            
            for(int i = 0; i < characterCount.length; i++) {
                total += Math.abs(characterCount[i]);
            }
            
            if(total == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
