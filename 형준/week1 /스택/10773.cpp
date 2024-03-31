#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> S;
  int n, k, sum=0;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> k;
    if (k == 0){
      S.pop();
    } else {
      S.push(k);
    }
  }

  for (int i = 0; i < S.size()+1; i++){
    sum += S.top();
    S.pop();
  }
  cout << sum << endl;

  return 0;
}