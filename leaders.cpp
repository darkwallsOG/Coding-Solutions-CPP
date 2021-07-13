#include<bits/stdc++.h>
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define GodSpeed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
	IO;
	GodSpeed;
	stack<int> s;
	int arr[] = {7 , 4, 5, 7, 3};
	int max1 = -1;
	//s.push(arr[5 - 1]);
	for (int i = 5 - 1; i >= 0; i--)
	{
		max1 = max(max1, arr[i]);
		//s.push(max1);
		//cout << max1 << endl;
		//cout << max1 << " " << arr[i] << endl;
		if (max1 == arr[i])
			s.push(max1);
	}
	//out << s.size() << endl;
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();

	}
}