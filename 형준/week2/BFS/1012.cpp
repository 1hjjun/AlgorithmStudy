#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[51][51];
bool vis[51][51];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int n, m, K;
queue<pair<int,int>> Q;

void bfs(int j, int k){
  Q.push({j,k});
  vis[j][k] = true;
  while(!Q.empty()){
    auto cur = Q.front(); Q.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m)  continue;
      if (vis[nx][ny] || board[nx][ny] != 1)  continue;
      vis[nx][ny] = true;
      Q.push({nx,ny});
    }
  }
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;
  for (int i = 0; i < T; i++){
    cin >> m >> n >> K;
    int x, y;
    for (int j = 0; j < K; j++){
      cin >> x >> y;
      board[y][x] = 1;  ////아아아아아아아아아 제발!
    }
    int num = 0;
    for (int j = 0; j < n; j++){
      for (int k = 0; k < m; k++){
        if (board[j][k] == 1 || !vis[j][k]){
          bfs(j,k);
          num++;
        }
      }
    }
    cout << num << "\n";
    for (int k = 0; k < n; k++){
      fill(board[k],board[k]+m,0);
      fill(vis[k],vis[k]+m,false);
    }
  }
  return 0;
}