import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class CountDivisors {

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

 public static void main(String...strings) {

  int totalCount = 0;
  FastReader fs = new FastReader();

  int left = fs.nextInt();
  int right = fs.nextInt();
  int dividend = fs.nextInt();

  for (int i = left; i <= right; i++) {
   if (i % dividend == 0)
    totalCount++;
  }

  System.out.println(totalCount);
 }
}
