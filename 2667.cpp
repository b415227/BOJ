#include <bits/stdc++.h>
using namespace std;
int s[26][26];
bool check[26][26];
int counta = 0;
vector<int> countb;
int N;
queue<pair<int, int>> p;
void bfs(int x, int y);
int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int a;
            scanf("%1d", &a);
            s[i][j] = a;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (!check[i][j])
            {
                check[i][j] = true;
                if (s[i][j])
                    bfs(i, j);
            }
        }
    }
    cout << counta << '\n';
    int i=0;
    sort(countb.begin(),countb.end());
    for(int i=0;i<countb.size();i++){
        cout << countb[i] << '\n';
    }
}
void bfs(int x, int y)
{
    counta++;
    int i=countb.size();
    countb.push_back(0);
    p.push({x, y});
    check[x][y] = true;
    while (!p.empty())
    {
        countb[i]++;
        int n = p.front().first;
        int m = p.front().second;
        p.pop();
        if (n > 2 && !check[n - 1][m])
        {
            check[n - 1][m] = true;
            p.push({n - 1, m});
        }
        if (n < N && !check[n + 1][m])
        {
            check[n + 1][m] = true;
            p.push({n + 1, m});
        }
        if (m > 2 && !check[n][m - 1])
        {
            check[n][m - 1] = true;
            p.push({n, m - 1});
        }
        if (m < N && !check[n][m + 1])
        {
            check[n][m + 1] = true;
            p.push({n, m + 1});
        }
    }
}
