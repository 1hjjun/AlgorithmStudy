#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[51][51];
bool vis[51][51];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int T, n, m, K;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> T;

  for (int i = 0; i < T; i++){
    cin >> m >> n >> K;
    
    for (int j = 0; j < K; j++){
      int x, y;
      cin >> x >> y;
      board[x][y] = 1;
    }
    int num = 0;
    for (int j = 0; j < n; j++){
      for (int k = 0; k < m; k++){
        if (board[j][k] == 0 || vis[j][k])  continue;
        queue<pair<int,int>> Q;
        Q.push({j,k});
        vis[j][k] = 1;
        while(!Q.empty()){
          auto cur = Q.front(); Q.pop();
          for (int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny <0 || ny >= m)  continue;
            if (vis[nx][ny] || board[nx][ny] != 1)  continue;
            vis[nx][ny] = 1;
            Q.push({nx,ny});
          }
        }
        num++;
      }
    }
    cout << num << "\n";
    for (int k = 0; k < n; k++){
      fill(board[k],board[k]+m,0);
      fill(vis[i],vis[i]+m,0);
    }
  }
  return 0;
}