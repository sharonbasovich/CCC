#include <bits//stdc++.h>

using namespace std;

int main () {
    int N; cin >> N;
    bool isprime = true;
    for (int i = 0; i < N - 2; i++)
    {
        if (N % (i + 2) == 0)
        {
            isprime == false;
            cout << N << " is not a prime number." << endl;
            return 0;
        } 
    }
    cout << N << " is a prime number." << endl;
    return 0;
}