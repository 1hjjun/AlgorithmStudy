#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int cmdNum;
  cin >> cmdNum;

  cin.ignore();

  deque<int> DQ;

  while (cmdNum--){
    string s;
    cin >> s;
    if (s == "push_back"){
      int pushNum;
      cin >> pushNum;
      DQ.push_back(pushNum);
    }
    else if (s == "push_front"){
      int pushNum;
      cin >> pushNum;
      DQ.push_front(pushNum);
    }
    else if (s == "front") {
      if (!DQ.empty()) cout << DQ.front() << "\n";
      else cout << -1 << "\n";
    }
    else if (s == "back") {
      if (!DQ.empty()) cout << DQ.back() << "\n";
      else cout << -1 << "\n";
    }
    else if (s == "pop_back") {
      if (!DQ.empty()){
        cout << DQ.front() << "\n";
        DQ.pop_back();
      } 
      else cout << -1 << "\n";
    }
    else if (s == "pop_front") {
      if (!DQ.empty()){
        cout << DQ.front() << "\n";
        DQ.pop_front();
      } 
      else cout << -1 << "\n";
    }
    else if (s == "size") {
      cout << DQ.size() << "\n";
    }
    else if (s == "empty") {
      cout << DQ.empty() << "\n";
    }
  }
  return 0;
}