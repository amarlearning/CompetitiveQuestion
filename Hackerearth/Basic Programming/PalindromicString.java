import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class PalindromicString {

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

  boolean isPalindrome = true;
  FastReader fs = new FastReader();
  String palindrome = fs.next();
  int lengthFull = palindrome.length();
  int lengthHalf = palindrome.length() / 2;

  for (int i = 0; i < lengthHalf; i++) {
   if (palindrome.charAt(i) != palindrome.charAt(lengthFull - i - 1)) {
    isPalindrome = false;
    break;
   }
  }

  if (isPalindrome)
   System.out.println("YES");
  else
   System.out.println("NO");

 }
}
