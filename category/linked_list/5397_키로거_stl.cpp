#include <iostream>
#include <list> 

using std::cout;
using std::cin;

int	main(void)
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);

	std::string	str;
	std::list <char>::iterator cur;
	int	N;

	cin >> N; //아 이거 여러번 반복인데 이걸 빼먹어서 1시간 낭비
	while (N--)
	{
		cin >> str;
		std::list <char>	L;
		cur = L.begin();
		for (char ch : str)
		{
			if (ch == '<')
			{
				if (cur != L.begin())
					cur--;
			}
			else if (ch == '>')
			{
				if (cur != L.end())
					cur++;
			}
			else if (ch == '-')
			{
				if (cur != L.begin())
					cur = L.erase(--cur);
			}
			else
				L.insert(cur, ch);
		}
		for (char ch : L)
			cout << ch;
		cout <<'\n';
	}
	return (0);
}
