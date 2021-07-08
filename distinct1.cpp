#include<bits/stdc++.h>
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define GodSpeed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
	IO;
	GodSpeed;

	int n;
	cin >> n;

	long long arr[200001];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int c = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[i + 1])
			c++;
	}
	cout << c << endl;
}