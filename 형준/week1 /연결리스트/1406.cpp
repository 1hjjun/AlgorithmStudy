#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  getline(cin,s);

  list<char> L;
  list<char>::iterator t = L.end();

  for (int i = 0; i < s.size(); i++){
    L.push_back(s[i]);
  }

  int n;
  cin >> n;
  for (int i=0; i < n; i++){
    char cmd, newS;
    cin >> cmd;
    if (cmd == 'P'){
      cin >> newS;
      L.insert(t, newS);
    } 
    else if (cmd == 'L') {
      if (t != L.begin())
        t--;
    } 
    else if (cmd == 'D') {  //end인데 t++ 시키면 안됨.
      if (t != L.end())     
        t++;
    } 
    else if (cmd == 'B') {
      if (t != L.begin())
        t = L.erase(--t);   //begin 인데 t-- 시키면 안됨.
    }
  }
  for (auto i : L) cout << i << "";

  return 0;
}