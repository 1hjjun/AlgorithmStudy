#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int dist[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> m >> n;    // n이 배열 갯수 m이 안에 배열 크기
  queue<pair<int,int>> Q;

  for (int i = 0; i < n; i++){   
    for (int j = 0; j < m; j++){  
      cin >> board[i][j];
      if (board[i][j] == 1)
        Q.push({i,j});
      if (board[i][j] == 0)
        dist[i][j] = -1;    //dist -> 익은 토마,없음: 0, 안익은거: -1
    }
  }
    
    while(!Q.empty()){
      pair<int,int> cur = Q.front(); Q.pop();
      for (int dir = 0; dir < 4; dir++){
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (dist[nx][ny] >= 0) continue;  //dist가 -1인 것만(안익은 토마)여야 한다.
        dist[nx][ny] = dist[cur.X][cur.Y] + 1;  //그 전 토마토 거리에 +1
        Q.push({nx,ny});
      }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
        if (dist[i][j] == -1){  //안익은 토마토가 하나라도 있으면 -1 출력
          cout << -1;
          return 0;
      }
      ans = max(ans, dist[i][j]);
    }
  }
  cout << ans;
}