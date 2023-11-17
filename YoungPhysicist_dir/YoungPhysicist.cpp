//
// Created by root on 11/16/23.
//
#include <iostream>
using namespace std;
int main(){
    int tests, x = 0, y = 0, z = 0, cur;
    cin >> tests;
    cin >> x >> y >> z;
    for (int i = 4; i <= tests*3; ++i) {
        cin >> cur;
        if (i % 3 == 1){
            x += cur;

        } else if (i % 3 == 2){
            y += cur;
        }
        else{
            z += cur;
        }
    }
    if (x == 0 && y == 0 && z == 0 ){
        cout << "YES";
    }
    else cout << "NO";


}