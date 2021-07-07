#include <bits/stdc++.h>
#define IO if(fopen("input.txt","r")) freopen("input.txt","r",stdin), freopen("output.txt","w",stdout)
#define GodSpeed ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
{
    IO;
    GodSpeed;
    int arr[] = {1, 2, 3};
    int z = 8;

    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i & (1 << j))
            {   cout << arr[j];
            }
        }
        cout << " ";
    }
}
