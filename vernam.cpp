#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "HELLO", key = "DAZMP", cipher, dec;
    // cin >> str >> key;
    // encryption
    for (int i = 0; i < str.size(); i++)
    {
        int t = str[i] + key[i] - 'A' - 'A';
        if (t > 26)
            t -= 26;
        cipher += 'A' + t;
        //  cout<<'A' + t<<" ";
    }
    cout << cipher<<endl;

    // decryption
    for (int i = 0; i < cipher.size(); i++)
    {
        int t = cipher[i] - key[i];
        if (t < 0)
            t += 26;
        dec += 'A' + t;
        //  cout<<'A' + t<<" ";
    }
    cout<<dec<<endl;;
}