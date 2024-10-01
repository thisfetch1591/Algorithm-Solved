package chapter1;

import java.util.*;
import java.io.*;

public class Boj2979{
  public static void main(String[] args) throws Exception {
    int a, b, c;
    int ans = 0;
    int[] arr = new int[102];
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    a = Integer.parseInt(st.nextToken());
    b = Integer.parseInt(st.nextToken());
    c = Integer.parseInt(st.nextToken());

    for (int i = 0; i < 3; i++) {
      StringTokenizer stt = new StringTokenizer(br.readLine());
      int start = Integer.parseInt(stt.nextToken());
      int end = Integer.parseInt(stt.nextToken());

      for (int j = start + 1; j <= end; j++) arr[j]++;
    }

    for (int i = 1; i < 101; i++) {
      if (arr[i] == 1) ans += a;
      if (arr[i] == 2) ans += b * 2;
      if (arr[i] == 3) ans += c * 3;
    }

    System.out.println(ans);
  }
}
