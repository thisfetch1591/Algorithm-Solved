package chapter1;

import java.io.*;

public class Boj10808 {
  public static void main(String[] args) throws Exception {
    int[] arr = new int[30];
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String contents = br.readLine();

    for (int i = 0; i < contents.length(); i++) {
      char c = contents.charAt(i);
      arr[c - 97]++;
    }

    for (int i = 0; i < 26; i++) {
      System.out.print(arr[i] + " "); 
    }
  }
}