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
    llt p = 1721;
    llt a = 13;
    llt e1 = 17;
    llt e2 = bigMod(e1, a, p);
    llt m = 1234569;
    // cin >> m;
    llt k = 23;
    llt y1 = bigMod(e1, k, p);

    llt y2 = (m - (a * y1)) * modInverse(k, p - 1);
    y2 = y2 % (p - 1);
    llt c1 = (bigMod(y1, y2, p) * bigMod(e2, y1, p)) % p;
    llt c2 = bigMod(e1, m, p);
    cout<<"c1:"<<c1<<endl;
    cout<<"c2:"<<c2<<endl;
    if (c1 == c2)
        cout << "Verified" << endl;
    else
        cout << "Not verified" << endl;
}