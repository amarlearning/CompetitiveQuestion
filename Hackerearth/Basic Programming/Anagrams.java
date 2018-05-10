import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class Anagrams {

 static class FastReader {
  BufferedReader br;
  StringTokenizer st;

  public FastReader() {
   br = new BufferedReader(new InputStreamReader(System.in));
  }

  String next() {
   while (st == null || !st.hasMoreElements()) {
    try {
     st = new StringTokenizer(br.readLine());
    } catch (IOException e) {
     e.printStackTrace();
    }
   }
   return st.nextToken();
  }

  int nextInt() {
   return Integer.parseInt(next());
  }

  long nextLong() {
   return Long.parseLong(next());
  }

  double nextDouble() {
   return Double.parseDouble(next());
  }

  String nextLine() {
   String str = "";
   try {
    str = br.readLine();
   } catch (IOException e) {
    e.printStackTrace();
   }
   return str;
  }
 }


 public static void main(String args[]) {

  FastReader fs = new FastReader();

  int testCase = fs.nextInt();
  for (int i = 1; i <= testCase; i++) {
   int total = 0;
   String one = fs.next();
   String two = fs.next();
   int[] charArray = new int[30];

   for (int j = 0; j < one.length(); j++) {
    charArray[((int) one.charAt(j) - 96)] += 1;
   }

   for (int j = 0; j < two.length(); j++) {
    charArray[((int) two.charAt(j) - 96)] -= 1;
   }

   for (int j = 0; j < charArray.length; j++) {
    total += Math.abs(charArray[j]);
   }

   System.out.println(total);
  }
 }
}
