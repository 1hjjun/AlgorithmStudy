#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    fill(dist1[i],dist1[i]+m,-1);
    fill(dist2[i],dist2[i]+m,-1);
  }
  for (int i = 0; i < n; i++)
    cin >> board[i];
  queue<pair<int,int>> Q1;
  queue<pair<int,int>> Q2;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (board[i][j] == 'F'){
        Q1.push({i,j});
        dist1[i][j] = 0;
      } 
      if (board[i][j] == 'J'){
        Q2.push({i,j});
        dist2[i][j] = 0;
      } 
    }
  }
  while(!Q1.empty()){
    pair<int,int> cur = Q1.front(); Q1.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
      dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
      Q1.push({nx,ny});
    }
  }
  while(!Q2.empty()){
    pair<int,int> cur = Q2.front(); Q2.pop();
    for (int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m){  //범위가 넘어간 것이 탈출을 뜻함
        cout << dist2[cur.X][cur.Y]+1;
        return 0;
      }
      if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
      if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y]+1) continue;
      dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;  //위에 왜 불보다 사람이 더 작은걸 빼는 지 모르겠다.
      Q2.push({nx,ny}); // 적어보니 알겠다. 불이 빠르면 죽으니까 거기로 못가기 때문 (현재 가능한 쪽으로만 +1 중)
    }
  }
  cout << "IMPOSSIBLE"; //성공시 위에서 실행완료가 되어야 하고 사람이 움직일 수 있는 곳을 다 다녀도 끝나지 않았다는 것은 실패를 뜻함.
}