#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
bool p[MAX];
queue<pair<int, int>> s;
int a, b, c;
int bfs();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    int d = bfs();
    if (d == -1)
        cout << "ANG\n";
    else
        cout << d << '\n';
}

int bfs()
{
    s.push({a, 0});
    p[a] = true;
    while (!s.empty())
    {
        int n = s.front().first;
        int m = s.front().second;
        s.pop();
        if (m > b)
            break;
        if (n == c)
            return m;
        int a1 = n + 1; //+1 연산
        if (a1 < MAX && !p[a1])
        {
            p[a1] = true;
            s.push({a1, m + 1});
        }
        a1 = n * 2; //*2 - 가장높은자리 1
        if (a1 >= MAX) continue;
        int digit = 1;
        int check1 = a1;
        while (check1)
        {
            check1 /= 10;
            digit *= 10;
        }
        a1 -= digit / 10;
        if (!p[a1]) 
        {
            p[a1] = true;
            s.push({a1, m + 1});
        }
    }
    return -1;
}