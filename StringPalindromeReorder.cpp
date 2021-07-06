#include<bits/stdc++.h>
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define GodSpeed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
	IO;
	GodSpeed;

	string s;
	cin >> s;

	int n = s.length();
	int freq[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		freq[s[i] - 'a'] += 1;
	}
	int x = 0;
	for (int i = 0; i < 26; i++)
	{
		if (freq[i] == 1)
			x += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << freq[i] << " ";
	}
	if (x == 1 || x == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}