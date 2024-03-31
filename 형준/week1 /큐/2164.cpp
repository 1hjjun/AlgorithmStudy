#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  queue<int> Q;
  for (int i = 1; i <= n; i++) Q.push(i);

  while(n--){
    if (Q.size()==1){
      cout << Q.front() << endl;
    }
    else {
      Q.pop();
      Q.push(Q.front());
      if (Q.size() > 0) Q.pop();
    }
  }

  return 0;
}