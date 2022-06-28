#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>

using namespace std;

queue<tuple<int,int,int>>	que;
int	map[105][105][105];
int	dist[105][105][105];

int	main(void)
{
	int	M;
	int	N;
	int	H;

	cin >> M >> N >> H;
	for (int i = 0; i < H; i++)
		for(int j = 0; j < N; j++)
			for(int k = 0; k < M; k++)
			{
				cin >> map[i][j][k];
				if (map[i][j][k] == 1)
					que.push({i,j,k});
				else
					dist[i][j][k] = -1;
			}
