#include <bits/stdc++.h>

using namespace std;

int main(){
// r 이 하나 있을 때마다 x에 -1을 곱해준다. -1일때 D가 있으면 뒤에서부터 버리고 1이면 앞에서부터

  ios::sync_with_stdio(0);
  cin.tie(0);

  int T, n;
  string p, nums;

  cin >> T;
  cin.ignore();
  for (int i = 0; i < T; i++){
    getline(cin, p);
    cin >> n;
    cin.ignore();

    vector<int> v;
    getline(cin, nums);
    
    
    for (int i =0; i < n;i++){
      cout << v[i] << " ";
    }
  }
  return 0;
}