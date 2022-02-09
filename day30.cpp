//problem link: https://leetcode.com/problems/isomorphic-strings/

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int n = s.length();
    unordered_map<char, char> amp, bmp;
    for (int i = 0; i < n; i++)
    {
        if (amp.count(s[i]) == 0 and bmp.count(t[i]) == 0)
        {
            amp[s[i]] = t[i];
            bmp[t[i]] = s[i];
        }
        else if (amp[s[i]] != t[i] or bmp[t[i]] != s[i])
            return false;
    }
    return true;
}

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
        string a, b;
        cin >> a;
        cin >> b;
        cout << isIsomorphic(a, b);
    }
}
