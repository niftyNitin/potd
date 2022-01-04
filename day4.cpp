#include<bits/stdc++.h>
#define Size 1000001
using namespace std;
 
vector<int> isPrime(Size, 1);
 
void sieve(int N)
{
    for(int i=2; i*i <= N; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=N; j += i)
                isPrime[j] = 0;
        }
    }
}
 
string solve (int N) {
    if(isPrime[N])
        return "No";
    else
        return "Yes";
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    sieve(Size);
    while(T--)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}
