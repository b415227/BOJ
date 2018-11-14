#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
vector<int> g[1001];
bool check[1001];
void dfs(int x);
void bfs(int x);

int main()
{
    int n, m, start;
    cin >> n >> m >> start;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        sort(g[i].begin(), g[i].end());
    }
    dfs(start);
    cout << '\n';
    bfs(start);
}
void dfs(int x)
{
    check[x] = true;
    cout << x << ' ';
    for (int i = 0; i < g[x].size(); i++)
    {
        int next = g[x][i];
        if (check[next] = false)
            dfs(next);
    }
}
void bfs(int x){
    queue<int> q;
    memset(check,false,sizeof(check));
    check[x]=true;
    q.push(x);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << ' ';
        for(int i=0;i<g[node].size();i++){
            int next=g[node][i];
            if(check[next]==false){
                check[next]=true;
                q.push(next);
            }
        }
    }

}