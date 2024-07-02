#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> round;

    for (int i = 0; i < n; i++)
    {
        string m;
        cin >> m;
        int count = 0;
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] != '0')
            {
                int digit = m[i] - '0';
                int num = digit * pow(10, (m.size() - i - 1));
                round.push_back(num);
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < round.size(); i++)
        {
            cout << round[i] << " ";
        }
        round.clear();
        cout<<endl;
    };

    return 0;
}
