#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define case1(z) cout << "Case " << z << ":\n"
pair<int, int> decToBinary(int n)
{

    int ones = 0;
    int zeros = 0;
    while (n > 0)
    {

        if (n % 2 == 1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
        n = n / 2;
    }
    return {ones, zeros};
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        char a[7][18];
        int first_block_weight = 0;
        int second_block_weight = 0;
        int first_row;
        int second_row;
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 18; k++)
            {
                char x;
                cin >> x;
                if (j < 7)
                    a[j][k] = x;
                if (x >= 'A' and x <= 'Z')
                {

                    if (k >= 1 and k <= 6)
                    {
                        //cout << x << endl;
                        first_row = j;
                        int ones = decToBinary(x).first * 500;
                        int zeros = decToBinary(x).second * 250;
                        first_block_weight += ones + zeros;
                    }
                    else if (k >= 11 and k <= 16)
                    {
                        //cout << x << endl;
                        second_row = j;
                        int ones = decToBinary(x).first * 500;
                        int zeros = decToBinary(x).second * 250;
                        second_block_weight += ones + zeros;
                    }
                    //cout << first_row << " " << second_row << endl;
                }
            }
        }
        case1(i);
        // cout << first_block_weight << " " << second_block_weight << endl;
        // cout << first_row << " " << second_row << endl;
        if (first_block_weight == second_block_weight)
        {
            if (first_row == second_row)
                cout << "The figure is correct.\n";
            else
            {
                cout << "........||........\n";
                cout << ".../\\...||.../\\...\n";
                cout << "../..\\..||../..\\..\n";
                cout << "./....\\.||./....\\.\n";

                for (int k = 0; k < 10; k++)
                {
                    cout << a[first_row][k];
                }
                for (int k = 10; k < 18; k++)
                {
                    cout << a[second_row][k];
                }

                cout << "\n\\______/||\\______/\n........||........\n";
            }
        }
        else if (first_block_weight > second_block_weight)
        {
            if (first_row > second_row)
                cout << "The figure is correct.\n";
            else
            {
                cout << "........||.../\\...\n";
                cout << "........||../..\\..\n";
                cout << ".../\\...||./....\\.\n";
                cout << "../..\\..";
                for (int k = 8; k < 18; k++)
                {
                    cout << a[second_row][k];
                }

                cout << "\n./....\\.||\\______/\n";
                for (int k = 0; k < 7; k++)
                {
                    cout << a[first_row][k];
                }
                cout << "\\||........";
                cout << "\n\\______/||........\n";
            }
        }
        else if (first_block_weight < second_block_weight)
        {
            if (first_row < second_row)
                cout << "The figure is correct.\n";
            else
            {
                cout << ".../\\...||........\n";
                cout << "../..\\..||........\n";
                cout << "./....\\.||.../\\...\n";

                for (int k = 0; k < 7; k++)
                {
                    cout << a[first_row][k];
                }
                cout << "\\||../..\\..";
                cout << "\n\\______/||./....\\.\n";
                cout << "........";
                for (int k = 8; k < 18; k++)
                {
                    cout << a[second_row][k];
                }
                cout << "\n........||\\______/\n";
            }
        }
    }
}

/**
 * ........||........
.../\...||.../\...
../..\..||../..\..
./....\.||./....\.
/A.....\||/A.....\
\______/||\______/
........||........
*/