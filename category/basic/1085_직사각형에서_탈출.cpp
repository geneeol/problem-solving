#include <iostream>
#include <algorithm>

using namespace std;

int	main(void)
{
	int	x;
	int	y;
	int	w;
	int	h;

	cin >> x >> y >> w >> h;
	cout << min({x, y, w - x, h - y});
	return (0);
}
