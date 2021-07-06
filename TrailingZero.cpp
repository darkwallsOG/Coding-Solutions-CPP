#include<bits/stdc++.h>
//#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define GodSpeed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
	//IO;
	GodSpeed;

	int n;
	cin >> n;

	int x = 0;

	while (n > 5)
	{
		x += n / 5;
		n /= 5;
	}
	if (n == 5)
		cout << 1 << endl;
	else
		cout << x << endl;
}