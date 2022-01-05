#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        int x = 0;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            x = gcd(x, a);
        }
        cout << x << "\n";
    }
}
