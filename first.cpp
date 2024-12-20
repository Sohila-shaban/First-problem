#include <iostream>
using namespace std;
main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int th = s[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= th && s[i] > 0)
            c++;
    }
    cout << c << endl;
}