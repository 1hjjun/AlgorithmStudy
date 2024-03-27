#include <bits/stdc++.h>

using namespace std;

int freq[26];

// ex1
int func2(int arr[], int N)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int occur[101] = {};

  for (int i = 0; i < N; i++)
  {
    if (occur[100 - arr[i]] == 1)
      return 1;
    occur[arr[i]] = 1;
  }
  return 0;
}

int main()
{
  // sol1
  /*
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (char a = 'a'; a <= 'z'; a++)
    {
      int cnt = 0;
      for (auto c : s)
        if (a == c)
          cnt++;
      cout << cnt << ' ';
    }
  */

  // sol2
  /*
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (auto c : s)
      freq[c - 'a']++;
    for (int i = 0; i < 26; i++)
      cout << freq[i] << ' ';
  */

  int arr[10] = {1, 25, 75, 3};
  cout << func2(arr, 4) << ' ';

  return 0;
}
