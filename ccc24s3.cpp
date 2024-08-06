#include <bits/stdc++.h>

using namespace std;

int main()
{
    int swipes = 0;
    bool possible = true;
    int N;
    cin >> N;
    int arrA[N];
    int arrB[N];
    string arrD[N];
    int arrL[N];
    int arrR[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arrA[i] != arrB[i])
        {
            bool found = false;
            for (int j = 0; j < N; j++)
            {
                if (arrB[i] == arrA[j])
                {
                    found = true;
                    if (j < i)
                    {
                        arrD[swipes] = "R";
                        // swipe right
                        arrL[swipes] = j;
                        arrR[swipes] = i;
                        for (int k = j; k <= i; k++)
                        {
                            arrA[k] = arrA[j];
                        }
                    }
                    else
                    {
                        arrD[swipes] = "L";
                        // swipe left
                        arrL[swipes] = i;
                        arrR[swipes] = j;
                        for (int k = i; k <= j; k++)
                        {
                            arrA[k] = arrA[j];
                        }
                    }
                    swipes++;
                }
            }
            if (!found)
            {
                possible = false;
                break;
            }
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
        cout << swipes << endl;
        for (int i = 0; i < swipes; i++)
        {
            cout << arrD[i] << " " << arrL[i] << " " << arrR[i] << endl;
        }
    }
    else
    {
        cout << "NO";
    }
}