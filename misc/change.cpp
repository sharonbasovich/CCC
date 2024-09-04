#include <bits//stdc++.h>

using namespace std;

int main () {
    class coin {
        public:
            string name;
            int value;
    };
    int change; cin >> change;
    coin database[2];
    database[0].name = "toonies";
    database[0].value = 200;
    database[1].name = "loonies";
    database[1].value = 100;
    for (int i = 0; i < database.size(); i++)
    {
        cout << change / database[i].value << database[i].name << endl;
        change %= database[i].value;
    }    

    /*
    int toonies = change / 200;
    change = change % 200;
    int loonies = change /100;
    change = change % 100;
    int quarters = change / 25;
    change = change % 25;
    int dimes = change / 10;
    change = change % 10;
    int nickels = change / 5;
    change = change % 5;
    int pennies = change / 1;
    change = change % 1;
    cout << toonies << " toonies" << endl;
    cout << loonies << " loonies" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << pennies << " pennies" << endl;
    */
    return 0;
}