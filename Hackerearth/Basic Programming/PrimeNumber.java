import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class PrimeNumber {
    
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

        FastReader s = new FastReader();
        
        int number = s.nextInt();
        ArrayList<Integer> primeNumber = new ArrayList<Integer>();
 
        for(int i = 2; i <= number; i++) {
            
            int count = 0;
            
            for(int j = 1; j <= Math.sqrt(i);  j++) {
                if(i%j == 0)
                    count++;
            }
            
            if(count == 1)
                primeNumber.add(i);
            
        }
        
        for(int prime : primeNumber) {
            System.out.print(prime + " ");
        }
        
    }
}
