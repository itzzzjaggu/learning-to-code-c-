#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i{0}; i < n; ++i)
    {
        int number;
        cin >> number;
        v.push_back(number);
    }
    sort(v.begin(), v.end());
    for (int i{0}; i < n; ++i)
    {
        cout << v.at(i);
    }

    return 0;
}
