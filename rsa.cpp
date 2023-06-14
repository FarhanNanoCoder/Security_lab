#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        gcd(b % a, a);
}
llt bigMod(llt a, llt b, llt m)
{
    if (b == 0)
        return 1;
    llt x = bigMod(a, b / 2, m) % m;
    x = (x * x) % m;
    if (b % 2 == 1)
    {
        x = (x * a) % m;
    }
    return x;
}

llt modInverse(llt a, llt m)
{
    a = a % m;
    for (llt k = 1; k < m; k++)
    {
        if ((a * k) % m == 1)
        {
            return k;
        }
    }
}

int main()
{
    int p = 9319, q = 7727;
    // cin >> p >> q;
    llt n = p * q;
    llt phiZ = (p - 1) * (q - 1);
    llt e = 2;
    while (gcd(e, phiZ) != 1)
        e++;
    llt d = modInverse(e, phiZ);
    cout << "e:" << e << endl;
    cout << "d:" << d << endl;

    int m = 80;
    // cin>>m;

    llt c = bigMod(m, e, n);
    cout << "c:" << c << endl;
    llt t = bigMod(c, d, n);
    cout << "p: " << t << endl;
}