#include <bits/stdc++.h>

using namespace std;
long calculateTime(long arr[], long center)
{
    long distance = abs(arr[0] - center) - arr[2];
    if (distance > 0)
    {
        return distance * arr[1];
    }
    else
    {
        return 0;
    }
}
int main()
{
    long numOfPeople;
    cin >> numOfPeople;
    long people[numOfPeople][3];

    long furthest = 0;

    for (long i = 0; i < numOfPeople; i++)
    {
        cin >> people[i][0] >> people[i][1] >> people[i][2];
        if (people[i][0] > furthest)
        {
            furthest = people[i][0];
        }
    }

    // long time[numOfPeople];
    // for (long i = 0; i < numOfPeople; i++)
    // {
    //     time[i] = 0;
    // }

    // long shortestTime = 0;
    // for (long i = 0; i < furthest; i++)
    // {
    //     long tempTime = 0;
    //     for (long j = 0; j < numOfPeople; j++)
    //     {

    //         tempTime += calculateTime(people[j], i);
    //     }
    //     if (i == 0)
    //     {
    //         shortestTime = tempTime;
    //     }
    //     else if (tempTime < shortestTime)
    //     {
    //         shortestTime = tempTime;
    //     }
    // }

    long shortestTime = 0;
    double leftSlope = -1;
    double rightSlope = -1;
    long binary = furthest/2;
    long topBound = furthest;
    long bottomBound = 0;
    while (true)
    {
        
        long tempLeft = 0;
        long tempRight = 0;
        long tempCenter = 0;
        
        for (long j = 0; j < numOfPeople; j++)
        {

            tempLeft += calculateTime(people[j], binary -1);
            tempRight += calculateTime(people[j], binary+1);
            tempCenter += calculateTime(people[j], binary);
        }
        leftSlope = tempLeft - tempCenter;
        rightSlope = tempRight - tempCenter;
        if (rightSlope >= 0 && leftSlope >= 0)
        {
            shortestTime = tempCenter;
            break;
        } else
        {
            if (rightSlope > 0)
            {
                topBound = binary;
                binary = (bottomBound + binary)/2;
            } else {
                bottomBound = binary;
                binary = (topBound + binary)/2;
            }
            
        }
        
        
    }

    cout << shortestTime;
}
