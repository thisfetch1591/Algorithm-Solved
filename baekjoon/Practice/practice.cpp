// #include <bits/stdc++.h>
// using namespace std;
// int a[10], n;
// int main() {
//   for (int i : a) {
//     cout << i << " ";
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int n;
// int main() {
//   cin >> n;
//   int a[n];
//   memset(a, 0, sizeof(a));
//   for (int i : a) {
//     cout << i << " ";
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   string s = "1";
//   string s2 = "amumu";
//   cout << atoi(s.c_str()) << '\n';
//   cout << atoi(s2.c_str()) << '\n';
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   int a = -1;
//   cout << bool(a) << '\n';
//   a = 0;
//   cout << bool(a) << '\n';
//   a = 3;
//   cout << bool(a) << '\n';

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   int a = 3;
//   int b = 2;
//   cout << a / b << '\n';
//   double c = 3;
//   double d = 2;
//   cout << c / d << '\n';

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   int a = 2147483647;
//   cout << a << '\n';
//   a++;
//   cout << a << '\n';
//   return 0;
//}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   int a = -2147483648;
//   cout << a << '\n';
//   a--;
//   cout << a << '\n';
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   vector<int> a = {1, 2, 3};
//   cout << (int)a.size() - 10 << '\n';
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v;

// int main() {
//   for (int i = 1; i <= 5; i++) v.push_back(i);
//   for (int i = 0; i < 5; i++) {
//     cout << i << "번째 요소 : " << *(v.begin() + i) << '\n';
//     cout << &*(v.begin() + i) << '\n';
//   }
//   for (auto it = v.begin(); it != v.end(); it++) {
//     cout << *it << ' ';
//   }
//   cout << '\n';
//   for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//     cout << *it << ' ';
//   }
//   auto it = v.begin();
//   advance(it, 3);
//   cout << '\n';
//   cout << *it << '\n';
// }

#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];
int main() {
  fill(&a[0], &a[10], 100);

  for (int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';
  fill(&b[0][0], &b[9][10], 2);
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << b[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}