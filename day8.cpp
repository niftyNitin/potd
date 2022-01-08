#include <bits/stdc++.h>
using namespace std;

void count(int arr[], int n, int m)
{
    unordered_set<int> dist;
    unordered_map<int, int> mmap;
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] % m;

    for (int i = 0; i < n; i++)
    {
        if (dist.find(arr[i]) == dist.end())
            dist.insert(arr[i]);

        if (mmap.find(arr[i]) != mmap.end())
            mmap[arr[i]]++;
        else
            mmap[arr[i]] = 1;
    }
    int unique = 0;
    for (auto i : mmap)
    {
        if (i.second == 1)
            unique++;
    }
    cout << dist.size() << endl;
    cout << unique << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    // write code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        count(arr, n, m);
    }
}
