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

int main()
{
    llt m1 = 56;
    llt m2 = 11;
    llt m = m1 * m2;
    llt p = 449;
    llt q = 227;
    llt n = p * q;
    llt phi = (p - 1) * (q - 1);
    llt e = 2;
    while (gcd(e, phi) != 1)
        e++;

    llt d = modInverse(e, phi);
    cout << "d:" << d << endl;
    llt c1 = bigMod(m1, e, n);
    llt c2 = bigMod(m2, e, n);
    llt d1 = bigMod(c1, d, n);
    llt d2 = bigMod(c2, d, n);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;

    llt c = bigMod(m, e, n);
    llt x = bigMod(c, d, n);
    cout << "c:" << c << endl;
    cout << "x: " << x << endl;
}