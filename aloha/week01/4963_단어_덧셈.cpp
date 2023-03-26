#include <bits/stdc++.h>

using namespace std;

int		n;
string	str[13];
int		val_of_alpha[26];
int		freq_of_alpha[26];
bool	is_used[10];
int		ans;

// 단어길이 8개, 12단어.
int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	

	cin >> n;
	while (n != 0)
	{
		list<char>	priority;
		int				n_alpha;

		for (int i = 0; i < n; i++)
			cin >> str[i];
		for (int i = 0; i < n; i++)
		{
			for (auto ch : str[i])
				freq_of_alpha[ch - 'A']++;
		}
		n_alpha = 26;
		for (int i = 0; i < 26; i++)
		{
			if (freq_of_alpha[i] == 0)
				n_alpha--;
		}
		solver(n_alpha);
		cout << ans << "\n";
		memset(val_of_alpha, 0, sizeof(int) * 26);
		memset(freq_of_alpha, 0, sizeof(int) * 26);
		memset(is_used, 0, sizeof(bool) * 10);
		ans = 0;
		cin >> n;
	}
	return (0);
}