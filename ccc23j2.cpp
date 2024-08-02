#include <bits//stdc++.h>

using namespace std;



int main () {
    int N; cin >> N;
    int T = 0;
    map<string, int> spice{{"Poblano", 1500}, {"Mirasol", 6000}, {"Serrano", 15500}, {"Cayenne", 40000}, {"Thai", 75000}, {"Habanero", 125000}};
    for  (int i = 0; i < N; i++)
    {
        string pepper; cin >> pepper;
        T += spice[pepper];
    }
    cout << T << endl;
    return 0;
}