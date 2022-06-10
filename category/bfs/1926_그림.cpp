#include <iostream>
#include <queue>

using namespace std;

int		map[505][505];
bool	vis[505][505];
int		dx[4] = {1, 0, -1, 0};
int		dy[4] = {0, 1, 0, -1};
queue<pair<int,int>>	que;

int	biggest_pic(int n, int m)
{
	int	nx;
	int	ny;
	int	area;

	area = 0;
	pair<int,int>	curr;
	while (!que.empty())
	{
		curr = que.front();
		que.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			nx = curr.first + dx[dir];
			ny = curr.second + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue ;
			if (vis[nx][ny] == true || map[nx][ny] != 1)
				continue ;
			vis[nx][ny] = 1;
			que.push({nx,ny});
		}
		area++;
	}
	return (area);
}
			
int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int		n;
	int		m;
	int		area;
	int		cnt;
	int		max;

	max = 0;
	cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];
	for (int x = 0; x < n; x++)
		for (int y = 0; y < m; y++)
		{
			if (map[x][y] == 1 && vis[x][y] == false)
			{
				vis[x][y] = true;
				que.push({x,y});
				cnt++;
			}
			//함수 두번 호출하는 바보짓
			//if 문에서 호출한 후 아래에서 또 호출하면 당연히 0
			area =  biggest_pic(n, m);
			if (area > max)
				max = area;
		}
	cout << cnt << '\n';
	cout << max;
	return (0);
}
