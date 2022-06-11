#include <iostream>
#include <queue>
#include <utility>

using namespace std;

queue<pair<int,int>>	que;
pair<int,int>	curr;
stirng	board[1005];
int	dist1[1005][1005];
int	dist2[1005][1005];
int	R;
int	C;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	pair<int,int>	start;

	cin >> R >> C;
	for (int i = 0; i < R; i++)
		cin >> board[i];
	//초기 세팅, 필요한 정보 읽어서 값들 세팅
	for (int x = 0; x < R; x++)
		for (int y = 0; y < C; y++)
		{
			if (board[x][y] == 'F')
				que.push({x,y});
			else if (board[x][y] = 'J')
				start = make_pair(x,y);
			dist1[x][y] = -1;
			dist2[x][y] = -1;
		}
