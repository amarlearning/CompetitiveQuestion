import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;

class SeatingArrangement {

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

	public static int getSeatNumber(int seatNumber) {

		if ((int) Math.ceil((float) seatNumber / 6) % 2 == 0) {

			if ((seatNumber % 6) == 0)
				seatNumber -= 11;
			else if ((seatNumber % 6) == 5)
				seatNumber -= 9;
			else if ((seatNumber % 6) == 4)
				seatNumber -= 7;
			else if ((seatNumber % 6) == 3)
				seatNumber -= 5;
			else if ((seatNumber % 6) == 2)
				seatNumber -= 3;
			else if ((seatNumber % 6) == 1)
				seatNumber -= 1;

		} else {

			if ((seatNumber % 6) == 0)
				seatNumber += 1;
			else if ((seatNumber % 6) == 5)
				seatNumber += 3;
			else if ((seatNumber % 6) == 4)
				seatNumber += 5;
			else if ((seatNumber % 6) == 3)
				seatNumber += 7;
			else if ((seatNumber % 6) == 2)
				seatNumber += 9;
			else if ((seatNumber % 6) == 1)
				seatNumber += 11;

		}

		return seatNumber;
	}

	public static String getSeatValue(int seatNumber) {

		if ((seatNumber % 6) == 0 || (seatNumber % 6) == 1)
			return "WS";
		else if ((seatNumber % 6) == 2 || (seatNumber % 6) == 5)
			return "MS";
		else if ((seatNumber % 6) == 3 || (seatNumber % 6) == 4)
			return "AS";

		return "No Seat";
	}

	public static void main(String args[]) {

		FastReader sc = new FastReader();

		int testCase = sc.nextInt();
		for (int i = 1; i <= testCase; i++) {
			int seatNumber = sc.nextInt();
			System.out.println(getSeatNumber(seatNumber) + " " + getSeatValue(seatNumber));
		}

	}
}
