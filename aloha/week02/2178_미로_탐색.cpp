#include <bits/stdc++.h>

using namespace std;

int	n, m;
string	board[105];
int		dist[105][105];
int		dx[4] = {1, -1, 0, 0};
int		dy[4] = {0, 0, 1, -1};

void	bfs(void)
{
	queue<pair<int,int>>	que;
	pair<int,int>			cur;
	int	nx;
	int	ny;

	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + m, -1);
	dist[0][0] = 0;
	que.push({0,0});
	while (!que.empty())
	{
		cur = que.front();
		que.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			nx = cur.first + dx[dir];
			ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue ;
			if (dist[nx][ny] >= 0 || board[nx][ny] != '1')
				continue ;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			que.push({nx,ny});
		}
	}

}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];
	bfs();
	cout << dist[n - 1][m - 1] + 1; 
}