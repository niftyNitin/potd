#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    // write code here
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool flag = 1;
        if (n % 21 == 0)
        {
            cout << "The streak is broken!\n";
            continue;
        }
        while (n > 0)
        {
            if (n % 100 == 21)
            {
                cout << "The streak is broken!\n";
                flag = 0;
                break;
            }

            n /= 10;
        }
        if (flag)
            cout << "The streak lives still in our heart!\n";
    }
