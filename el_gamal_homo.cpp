#include <bits/stdc++.h>
using namespace std;
#define llt long long int

llt gcd(llt a, llt b)
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
llt power(llt a, llt b)
{
    while (b--)
    {
        a *= a;
    }
    return a;
}
int main()
{
    llt p = 53;
    llt d = 13;
    llt e1 = 17;
    llt e2 = bigMod(e1, d, p);
    llt r1 = 4;
    llt r2 = 5;
    llt m1 = 12;
    llt m2 = 10;
    llt c11 = bigMod(e1, r1, p);
    llt c12 = m1 * bigMod(e2, r1, p);

    llt c21 = bigMod(e1, r2, p);
    llt c22 = m2 * bigMod(e2, r2, p);
    // llt c1 = c11 * c21;
    // llt c2 = c12 * c22;
    llt c1 = bigMod(e1, r1 + r2, p);
    llt c2 = m1 * m2 * bigMod(e2, r1 + r2, p);

    llt dec = c2 / bigMod(c1, d, p);
    cout << "dec:" << dec << endl;
}