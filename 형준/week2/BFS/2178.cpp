#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[102][102];  //n,m이 100이하라고 했기 때문에
int dist[102][102];  // 거리를 나타냄, 방문하지 않은 상태를 -1로 초기화
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++)
    fill(dist[i],dist[i]+m,-1);

  for (int i =0;i < n; i++){
    int k;
    cin >> k;
    for(int j = m-1; j >= 0; j--){
      board[i][j] = k % 10;
      k /= 10;
    }
  }

  queue<pair<int,int>> Q;
  Q.push({0,0});
  dist[0][0] = 0;

  while (!Q.empty()){
    pair<int,int> cur = Q.front(); Q.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (board[nx][ny] != 1 || dist[nx][ny] >= 0) continue;
      dist[nx][ny] = dist[cur.X][cur.Y] + 1;    //시작점 거리 +1
      Q.push({nx,ny});
    }
  }
  cout << dist[n-1][m-1]+1 << endl;

  return 0;
}


  // for (int i = 0; i < n; i++){
  //   for(int j = 0; j < m; j++){
  //     cout << board[i][j]<< " ";
  //   }
  //   cout << endl;
  // }