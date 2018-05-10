import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class FindProduct {

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

  long totalMultiply = 1 L;
  final long M = 1000000007 L;
  FastReader fs = new FastReader();
  int numberTest = fs.nextInt();

  for (int i = 0; i < numberTest; i++) {
   long temp = fs.nextInt();
   totalMultiply = ((totalMultiply % M) * (temp % M)) % M;
  }

  System.out.println(totalMultiply);
 }
}
