#include <bits/stdc++.h>

using namespace std;

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n;
  cin.ignore(); // cin은 공백을 입력받지 않아 버퍼에 \n이 남아있기에 삭제시켜줘야함

  string s;
  getline(cin, s);
  stringstream inputNum(s); //<sstream>안에 있음, 문자열 속 필요한 자료형의 데이터를 추출

  int newNum;
  vector<int> numVec;

  for (int i = 0; i < n; i++)
  {
    inputNum >> newNum;
    numVec.push_back(newNum);
  }

  cin >> k;
  int *occurs = new int[k]; // 동적할당! 중요!
  fill_n(occurs, k, 0);     // <algorithm>
  int cnt = 0;              // 0으로 초기화!! 중요!

  for (int i = 0; i < n; i++)
  {
    if (k > numVec[i])
    {
      if (occurs[k - numVec[i]] > 0)
      {
        cnt += occurs[k - numVec[i]];
      }
      occurs[numVec[i]] += 1;
    }
  }

  cout << cnt << ' ';

  return 0;
}