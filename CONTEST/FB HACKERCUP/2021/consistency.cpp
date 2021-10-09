#include <bits/stdc++.h>
using namespace std;
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);

int find_vowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    read

        write

            TC
    {
        string s;
        cin >> s;
        int no_vowels=find_vowels(s);
        int no_cons=s.length()-no_vowels;
        
    }
    return 0;
}