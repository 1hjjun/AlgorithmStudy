#include <bits/stdc++.h>

using namespace std;

int freq[10];

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, x;
  cin >> a >> b >> c;

  x = a * b * c;

  while (x > 0)
  {
    int i;
    i = x % 10;
    freq[i]++;
    x /= 10;
  }
  for (int i = 0; i < 10; i++)
    cout << freq[i] << "\n";

  return 0;
}