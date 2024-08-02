#include <bits//stdc++.h>

using namespace std;
/*

*/
int main()
{
    int dusa;
    cin >> dusa;
    bool larger = true;
    while (larger == true)
    {
        int yobi;
        cin >> yobi;
        if (dusa > yobi)
        {
            dusa += yobi;
        }
        else
        {
            larger = false;
        }
    }
    cout << dusa;
    return 0;
}