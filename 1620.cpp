#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<pair<string, int>> p[28];
vector<string> d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num, que;
    cin >> num >> que;
    d.push_back("aa");
    for (int i = 0; i < num; i++)
    {
        string z;
        cin >> z;
        p[z[0] - 'A'].push_back({z, i + 1});
        d.push_back(z);
    }
    for (int i = 0; i < 27; i++)
    {
        sort(p[i].begin(),p[i].end());
    }
    for (int i = 0; i < que; i++)
    {
        string s;
        cin >> s;

        if (s[0] >= 'A')
        {
            int first = 0;
            int end = p[s[0] - 'A'].size()-1;
            int i = (first + end) / 2;
            while (1)
            {
                if (p[s[0] - 'A'][i].first == s)
                {
                    cout << p[s[0] - 'A'][i].second << '\n';
                    break;
                }
                else if (p[s[0] - 'A'][i].first < s)
                {
                    first = i + 1;
                    i = (first + end) / 2;
                }
                else
                {
                    end = i - 1;
                    i = (first + end) / 2;
                }
            }
        }
        else
        {
            int a = 0;
            for (int i = 0; i < s.size(); i++)
            {
                a += (s[i] - '0');
                a *= 10;
            }
            a /= 10;
            cout << d[a] << '\n';
        }
    }
}