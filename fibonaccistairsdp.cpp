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

	int a = 0;
	int b = 1;
	for (int i = 2; i < n; i++)
	{
		int c = a + b;
		a = b;
		b = c;
	}
	if (n == 0 || n == 1)
		cout << n << endl;
	else
		cout << b << endl;

}