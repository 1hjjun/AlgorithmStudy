#include <bits/stdc++.h>

using namespace std;

int freq[10];

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  cin >> x;

  while (x > 0)
  {
    int i;
    i = x % 10;
    freq[i]++;
    x /= 10;
  }
  int max = 0;
  int six = freq[6];
  int nine = freq[9];

  if ((six + nine) % 2 == 0)
  {
    freq[6] = (six + nine) / 2;
    freq[9] = (six + nine) / 2;
  }
  else
  {
    freq[6] = (six + nine) / 2 + 1;
    freq[9] = (six + nine) / 2 + 1;
  }

  for (int i = 0; i < 10; i++)
  {
    if (max < freq[i])
      max = freq[i];
  }

  cout << max;

  return 0;
}