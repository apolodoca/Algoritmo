//
// Created by root on 11/16/23.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    string input, vogais = "aeiyou";

    cin >> input;
    string nova;
    for (char i:input) {

         if (vogais.find((char) tolower(i)) == string::npos){
            nova.push_back('.');
            nova.push_back((char) tolower(i));

        }

    }
    cout << nova;
}