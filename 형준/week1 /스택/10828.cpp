#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int cmdNum;
  cin >> cmdNum;

  cin.ignore();

  stack<int> S;

  for (int i=0; i<cmdNum; i++){
    string s;
    cin >> s;
    if (s == "push"){
      int pushNum;
      cin >> pushNum;
      S.push(pushNum);
    }
    else if (s == "top") {
      if (!S.empty()) cout << S.top() << "\n";
      else cout << -1 << "\n";
    }
    else if (s == "pop") {
      if (!S.empty()){
        cout << S.top() << "\n";
        S.pop();
      } 
      else cout << -1 << "\n";
    }
    
    else if (s == "size") {
      cout << S.size() << "\n";
    }
    else if (s == "empty") {
      cout << S.empty() << "\n";
    }
  }
  return 0;
}