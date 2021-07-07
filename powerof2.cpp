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

	if (ceil(log2(n)) == floor(log2(n)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}