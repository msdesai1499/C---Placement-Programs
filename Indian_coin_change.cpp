#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cin >> x;

	sort(arr, arr + n, greater<int>());
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = ans + (x / arr[i]);
		x = x - (x / arr[i]) * arr[i];
	}
	cout << ans;
	return 0;
}