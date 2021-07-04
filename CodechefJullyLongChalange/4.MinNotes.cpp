#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e6;
int a[N], f[N], b[N];

void gcdc(int n)
{
    f[1] = a[1];
    b[n] = a[n];
    for (int i = n - 1; i > 0; i--)
    {
        b[i] = __gcd(b[i + 1], a[i]);
    }
    for (int i = 2; i < n + 1; i++)
    {
        f[i] = __gcd(f[i - 1], a[i]);
    }
}
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    gcdc(n);
    for (int i = 1; i < n + 1; i++)
    {
        sum += a[i];
    }
    int maxi = LLONG_MAX;
    for (int i = 1; i < n + 1; i++)
    {
        ans = (sum - a[i] + __gcd(f[i - 1], b[i + 1])) / __gcd(f[i - 1], b[i + 1]);
        if (ans < maxi)
            maxi = ans;
    }
    cout << maxi << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}