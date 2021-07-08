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

	int k;
	cin >> k;

	int mask = 1;
	mask <<= (k - 1);

	if (n & mask)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}