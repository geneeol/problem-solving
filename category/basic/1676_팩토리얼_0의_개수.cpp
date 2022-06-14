#include <iostream>
#include <algorithm>

using namespace std;

//처음에 팩토리얼 계산하려 했는데... 구하면 500! 자릿수가 어마무시함
//따라서 약수 개수를 각각 세기로 했음
//다양한 수학적 센스를 이용한 풀이 가능

int	pow(int quo, int div)
{
	int	cnt;
	
	cnt = 0;
	while (quo % div == 0)
	{
		cnt++;
		quo = quo / div;
	}
	return (cnt);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	pair<int,int>	small_num = {0,0}; 	
	int	N;

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		small_num.first += pow(i, 2);
		small_num.second += pow(i, 5);
	}
	cout << min(small_num.first,small_num.second);
	return (0);
}
