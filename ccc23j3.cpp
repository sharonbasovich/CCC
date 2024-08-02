#include <bits//stdc++.h>

using namespace std;

int main () {
    int N; cin >> N;
    //Days:      1  2  3  4  5
    int arr[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            char x; cin >> x;
            if (x == 'Y')
            {
            arr[j]++;
            }
        }
    }
    vector<int> best;
    int high = 0;
    for (int k = 0; k < 5; k++)
    {
        if (arr[k] > high)
        {
            best.clear();
            best.push_back(k+1);
        }
        if (arr[k] == high)
        {
            best.push_back(k+1);
            arr[k] = high;
        }
        
    }
    
    for (int l : best)
    {
        cout << l;
        if (l != best.back())
        {
            cout << ",";
        }
    }
    /*
    int available = 0;
    for (int k = 0; k < 5; k++)
    {
        if (arr[available] < arr[k])
        {
             available = k;
        }
    }
    int commas = 0;
    for (int l = 0; l < 5; l++)
    {
        if (arr[available] == arr[l])
        {
            commas++;
        }
    }
    for (int m = 0; m < 5; m++)
    {
        if (arr[available] == arr[m])
        {
            cout << m + 1;
            if (commas > 1)
            {
                cout << ",";
                commas--;
            }
        }
    }
    */
    cout << endl;
    return 0;
}