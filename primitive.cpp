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
    llt p = 15527;
    llt a = 29;
    llt arr[p];
    for (llt k = 1; k < p; k++)
    {
        arr[k - 1] = bigMod(a, k, p);
    }
    sort(arr,arr+p);
    cout << endl;
    for (llt k = 1; k < p; k++)
    {
        if (k != arr[k - 1])
        {
            cout << "Not primitive" << endl;
            return 0;
        }
    }
    cout << "Primitive" << endl;
}