#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[100002];
int n, k;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  fill(dist,dist+100001,-1);
  dist[n] = 0;
  queue<int> Q;
  Q.push(n);

  while(dist[k] == -1){   //동생 자리에 도달할때까지 반복
    int cur = Q.front(); Q.pop();
    for (int nxt: {cur-1, cur+1, 2*cur}){
      if (nxt < 0 || nxt > 100000)  continue; //과정에서 밖으로 나가거나
      if (dist[nxt] != -1)  continue; //처음 온 곳이 아니면 제외
      dist[nxt] = dist[cur] + 1;
      Q.push(nxt);
    }
  }
  cout << dist[k];
}