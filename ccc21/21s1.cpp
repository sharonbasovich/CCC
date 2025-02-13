#include <bits/stdc++.h>

using namespace std;

// cin >>
// cout <<

int main()
{
    int N;
    cin >> N;
    double height[N+1];
    double width[N];
    for (int i = 0; i < (N+1); i++)
    {
        cin >> height[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> width[i];
    }

    double area = 0;
    for (int i = 0; i < N; i++)
    {
        area += (height[i] + height[i+1]) / 2  * width[i];
    }

    cout << fixed << area;
}