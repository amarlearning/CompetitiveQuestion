import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

class MagicalWord {

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

	public static List<Integer> generatePrimeNumber() {

		List<Integer> primeNumbers = new ArrayList<Integer>();

		for (int i = 65; i < 92; i++) {

			int count = 2;

			for (int k = 2; k <= Math.sqrt(i); k++) {
				if (i % k == 0)
					count++;
			}

			if (count <= 2)
				primeNumbers.add(i);
		}

		for (int i = 97; i < 122; i++) {

			int count = 2;

			for (int k = 2; k <= Math.sqrt(i); k++) {
				if (i % k == 0)
					count++;
			}

			if (count <= 2)
				primeNumbers.add(i);
		}

		return primeNumbers;
	}

	public static void main(String args[]) {

		FastReader fs = new FastReader();
		int testCases = fs.nextInt();
		List<Integer> primeNumbers = generatePrimeNumber();

		for (int k = 0; k < testCases; k++) {

			int wordCount = fs.nextInt();
			String stringInput = fs.next();
			StringBuffer sb = new StringBuffer();
      
			for (int i = 0; i < wordCount; i++) {

				int maxdiff = 1000, flag = 1;
				int valueCasted = (int) stringInput.charAt(i);

				for (int j = 0; j < primeNumbers.size(); j++) {
					int difference = Math.abs(valueCasted - primeNumbers.get(j));
					if (maxdiff > difference) {
						maxdiff = difference;
						flag = primeNumbers.get(j);
					}
				}

				sb.append((char) flag);
			}

			System.out.println(sb.toString());
		}
	}
}
