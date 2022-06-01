#include <bits/stdc++.h>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int	N;
	int	height;
	long long	sum; //long long으로 해야 안틀림
	stack<int>	stk;	

	stk.push(1000000010);
	sum = 0;
	cin >> N;
	while (N--)
	{
		cin >> height;
		//굳이 if~else 필요 없음
		//어차피 while문 이후 부분이랑 if문 내용이 같기에 코드 중복
		//순서만 while문을 위로 올리면 됨
		if (stk.top() > height)
		{
			sum += stk.size() - 1;
			stk.push(height);
		}
		else
		{
			while (stk.top() <= height)
				stk.pop();
			sum += stk.size() - 1;
			stk.push(height);
		}
	}
	cout << sum;
	return (0);
}
