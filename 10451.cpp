#include <iostream>
#include <vector>
using namespace std;
int count1;
int d[1001];
int check[1001];
int a;

void dfs(int n)
{
    check[n] = 1;
    if(!check[d[n]]) dfs(d[n]);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int count1 = 0;
        for (int j = 1; j <= a; j++)
        {
            cin >> d[j];
            check[j]=0;
        }
        for (int j = 1; j <= a; j++)
        {
            if (!check[j]) {
                dfs(j);
                count1++;
            }
        }
        cout << count1 << '\n';
    }
}