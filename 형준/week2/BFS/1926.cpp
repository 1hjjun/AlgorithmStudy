#include <bits/stdc++.h>  //***다시 풀어보기***
using namespace std;
#define X first
#define Y second

int board[502][502];  //n, m 이 500 이하이기 때문
bool vis[502][502];
int n, m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> board[i][j];
  
  int mx = 0; //최대 넓이
  int num = 0; //그림 수

  for (int i = 0; i < n; i++){  //(i, j)가 BFS의 시작점이 될 수 있는가를 찾기
    for(int j = 0; j < m; j++){
      if(board[i][j] == 0 || vis[i][j]) continue; //0이 아니어야 함, 안왔던 곳이어야 함.
      num++;  //시작점 찾으면 그림수 +1

      queue<pair<int,int>> Q;
      vis[i][j] = 1;
      Q.push({i,j});
      int area = 0;
      while(!Q.empty()){
        area++;
        pair<int,int> cur = Q.front(); Q.pop();
        for (int dir=0; dir < 4; dir++){
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //질문 ? : 왜 nx > n이 아니고 nx >=n 인가
          if (vis[nx][ny] || board[nx][ny] != 1) continue;
          vis[nx][ny] = 1;
          Q.push({nx,ny});
        }        
      }
      mx = max(mx, area);
    }
  }
  cout << num << "\n" << mx;

  return 0;
}