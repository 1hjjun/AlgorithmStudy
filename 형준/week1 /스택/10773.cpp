#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> S;
  int n, k;
  int sum = 0;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> k;
    if (k == 0){
      if (!S.empty()) S.pop();
    } else {
      S.push(k);
    }
  }

  while(!S.empty()){ //for 문으로 돌리면 pop()을 하면서 S.size()는 계속 변하므로 오류가 남!!
    sum += S.top();
    S.pop();
  }
  cout << sum << endl;

  return 0;
}