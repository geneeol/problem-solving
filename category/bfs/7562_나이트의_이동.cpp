#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

#define X first
#define Y second

//숨바꼭질 문제와 똑같음
//목적지까지의 거리를 구할때까지만 반복문을 돌면 됨

using namespace std;

void	bfs(void)
{
	queue<pair<int,int>>	que;
	pair<int,int>	pos;
	pair<int,int>	dst;
	pair<int,int>	curr;
	int		dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
	int		dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
	int		dist[305][305];
	int		l;
	int		nx;
	int		ny;

	cin >> l;
	for (int i = 0; i < l; i++)
		fill(dist[i], dist[i] + l, -1);
	cin >> pos.X >> pos.Y >> dst.X >> dst.Y;
	dist[pos.X][pos.Y] = 0;
	que.push({pos.X,pos.Y});
	while (dist[dst.X][dst.Y] == -1)
	{
		curr = que.front();
		que.pop();
		for (int dir = 0; dir < 8; dir++)
		{
			nx = curr.X + dx[dir];
			ny = curr.Y + dy[dir];
			if (nx < 0 || nx >= l || ny < 0 || ny >= l)
				continue ;
			if (dist[nx][ny] != -1)
				continue ;
			dist[nx][ny] = dist[curr.X][curr.Y] + 1;
			que.push({nx,ny});
		}
	}
	cout << dist[dst.X][dst.Y] << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int		T;

	cin >> T;
	while (T--)
		bfs();
	return (0);
}
