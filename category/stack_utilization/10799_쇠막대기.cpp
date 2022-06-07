#include <iostream>
#include <stack>

using namespace std;

//생각보다 쉽게 해결...
//long long 으로 선언해야 안전하긴 할듯

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string	str;
	stack<char>	stk;
	int	status;
	int	ans;

	ans = 0;
	status = 0;
	cin >> str;
	for (auto ch : str)
	{
		if (ch == '(')
		{
			stk.push(ch);
			status = 1;
		}
		else
		{
			if (status == 1)
			{
				stk.pop();
				ans += stk.size();
			}
			else
			{
				stk.pop();
				ans += 1;
			}
			status = 0;
		}
	}
	cout << ans;
	return (0);
}
