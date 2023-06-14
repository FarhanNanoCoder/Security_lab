#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string str;
    cin >> str;
    int col = 4;
    int row = (str.size() + col - 1) / col;
    char input[row][col];
    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (k < str.size())
            {
                input[i][j] = str[k++];
            }
            else
            {
                input[i][j] = '-';
            }
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << input[j][i] << " ";
        }
        cout << endl;
    }
}