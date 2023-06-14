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
int main(){
    llt p=53;
    llt d=10;
    llt e1=12;
    llt e2 = bigMod(e1,d,p);
    llt r=4;
    llt c1 = bigMod(e1,r,p);
    llt m=1234;
    // cin>>m;
    llt c2 =bigMod(e2,r,p)*m;
    cout<<"c1:"<<c1<<endl;
    cout<<"c2:"<<c2<<endl;
    llt dec = bigMod(c1,d,p);
    dec = c2/dec;
    cout<<"dec:"<<dec<<endl;
}