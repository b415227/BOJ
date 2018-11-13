#include <iostream>
#include <vector>
#include <string>
using namespace std;

char p[30][30];

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            p[i][j] = '.';
        }
    }
    int n, m;
    for (n = 0; n < a.length(); n++)
    {
        for (m = 0; m < b.length(); m++)
        {
            if (a[n] == b[m])
                break;
        }
    }
    for (int i = 0; i < a.length(); i++)
        p[n][i] = a[i];
    for (int i = 0; i < b.length(); i++)
        p[i][m] = b[i];
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            cout << p[j][i];
        }
        cout << '\n';
    }

    return 0;
}