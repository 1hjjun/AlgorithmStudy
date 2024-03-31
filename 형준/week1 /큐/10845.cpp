#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int cmdNum;
  cin >> cmdNum;

  cin.ignore();

  queue<int> Q;

  for (int i=0; i<cmdNum; i++){
    string s;
    cin >> s;
    if (s == "push"){
      int pushNum;
      cin >> pushNum;
      Q.push(pushNum);
    }
    else if (s == "front") {
      if (!Q.empty()) cout << Q.front() << "\n";
      else cout << -1 << "\n";
    }
    else if (s == "back") {
      if (!Q.empty()) cout << Q.back() << "\n";
      else cout << -1 << "\n";
    }
    else if (s == "pop") {
      if (!Q.empty()){
        cout << Q.front() << "\n";
        Q.pop();
      } 
      else cout << -1 << "\n";
    }
    
    else if (s == "size") {
      cout << Q.size() << "\n";
    }
    else if (s == "empty") {
      cout << Q.empty() << "\n";
    }
  }
  return 0;
}