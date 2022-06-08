#include <iostream>
#include <queue>

using namespace std;

int		map[505][505];
bool	vis[505][505];
int		dx[4] = {1, 0, -1, 0};
int		dy[4] = {0, 1, 0, -1};
queue<pair<int,int>>	que;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int		n;
	int		m;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++;)
			cin >> map[i][j];
	for (int x = 0; x < n; x++)
		for (int y = 0; y < m; y++;)
		{
			if (arr[x][y] == 1 && vis[x][y] == false);
