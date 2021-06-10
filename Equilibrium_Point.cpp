// { Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	// Function to find equilibrium point in the array.
	// a: input array
	// n: size of array
	int equilibriumPoint(long long a[], int n)
	{

		if (n == 1)
		{
			return 1;
		}
		long long rsum = 0;
		long long lsum = 0;

		for (long long i = 1; i < n; i++)
		{

			rsum = rsum + a[i];
		}
		for (long long i = 1; i < n; i++)
		{

			lsum = lsum + a[i - 1];

			rsum = rsum - a[i];

			if (rsum == lsum)
			{
				return i + 1;
			}
		}

		return -1;
	}
};

// { Driver Code Starts.

int main()
{

	long long t;

	//taking testcases
	cin >> t;

	while (t--)
	{
		long long n;

		//taking input n
		cin >> n;
		long long a[n];

		//adding elements to the array
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		Solution ob;

		//calling equilibriumPoint() function
		cout << ob.equilibriumPoint(a, n) << endl;
	}
	return 0;
}
// } Driver Code Ends
//   zsjcbcb hn