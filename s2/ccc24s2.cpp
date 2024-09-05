#include <bits/stdc++.h>
using namespace std;



int main() {
  int strnum; cin >> strnum;
  int strlength; cin >> strlength;
  string arr[strnum];
  for (int i = 0; i < strnum; i++) {
    cin >> arr[i];
  }

  for (int k = 0; k < strnum; k++) {
  bool previous;
  string check = "T";
  for (int i = 0; i < strlength; i++) {
    bool heavy = false;
    for (int j = 0; j < strlength; j++) {
      if (arr[k][i] == arr[k][j] && i != j) {
        heavy = true;
        break;
      }
    }
    if (i == 0) {
      previous = heavy;
    } else if (previous == heavy) {
      check = "F";
    }

    previous = heavy;
    
  }
  cout << check << endl;
  }
}