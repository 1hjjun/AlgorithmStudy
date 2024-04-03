#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++){
    int k;
    cin >> k;
    v.push_back(k);
  }
  
  for (int i = 0; i < n; i++){
    int j =i;
    int num = v[i];
    // cout << "i: "  << i << "/ ";
    if (i!=0){
      while (j>0){
        if (v[j-1] > num){
          cout << j << " ";
          break;
        }
        j--;
        if (j==0){
          cout << j << " ";
          break;
        }
      }
    }
    else 
      cout << 0 << " ";
  }
  return 0;
}