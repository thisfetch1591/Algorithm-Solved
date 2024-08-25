package chapter1;

import java.util.*;
import java.io.*;

public class Boj2309 {
  public static void main(String... args) throws Exception {
    int[] arr = new int[9];
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int a = 0;
    int b = 0;
    int sum = 0;

    for (int i = 0; i < 9; i++) {
      arr[i] = Integer.parseInt(br.readLine()); 
      sum += arr[i];
    }

    Arrays.sort(arr);


    for (int i = 0; i < arr.length; i++) {
      for (int j = i + 1; j < arr.length; j++) {
        if (sum - arr[i] - arr[j] == 100) {
           a = arr[i];
           b = arr[j];
           break;
        }
      }
    }
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] == a || arr[i] == b) continue;

      System.out.println(arr[i]);
    }
    }
  }