#include <iostream>
#include <stack>

using namespace std;

//ios::sync_with_stdio(false);
//이거 main에만 해도 되는듯?
//static

bool	is_vps(string const &str)
{
	stack<char> stk;

	for(auto ch : str)
	{
		if (ch == '(')
			stk.push(ch);
		else 
		{
			if (!stk.empty()) 
				stk.pop();
			else
				return (false);
		}
	}
	if (stk.empty())
		return (true);
	else
		return (false);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int	T;
	string	str;

	cin >> T;
	while (T--)
	{
		cin >> str;
		if (is_vps(str))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return (0);
}
