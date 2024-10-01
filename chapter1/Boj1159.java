package chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Boj1159 {
  public static void main(String[] args) throws NumberFormatException, IOException {
    int[] alpha = new int[26];
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String a = "";
    int n = Integer.parseInt(br.readLine());

    for (int i = 0; i < n; i++) {
      String str = br.readLine();
      alpha[((int)str.charAt(0))-97]++;
    }

    for (int i = 0; i < 26; i++) {
      if (alpha[i] >= 5) {
        char c = (char)(i + 97);
        a += c;
      }
    }

    if (a.length() == 0) {
      System.out.print("PREDAJA");
      return;
    }
    System.out.print(a);
  }
}
