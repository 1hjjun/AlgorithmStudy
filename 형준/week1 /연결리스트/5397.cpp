#include <bits/stdc++.h>

using namespace std;

void func(){
  string s;
  getline(cin,s);

  list<char> L;
  list<char>::iterator t = L.begin();

  for (int i=0; i < s.size(); i++){
    char cmd = s[i];
    
    if (cmd == '<') {
      if (t != L.begin())
        t--;
    } 
    else if (cmd == '>') {  //end인데 t++ 시키면 안됨.
      if (t != L.end())     
        t++;
    } 
    else if (cmd == '-') {
      if (t != L.begin())
        t = L.erase(--t);   //begin 인데 t-- 시키면 안됨.
    }
    else {
      L.insert(t, cmd);
    } 
  }
  for (auto i : L) cout << i << "";
  
}

int main(){

  int n;
  cin >> n;
  
  cin.ignore();

  for (int i=0; i < n; i++){
    func();
    cout << endl;
  }
  return 0;
}