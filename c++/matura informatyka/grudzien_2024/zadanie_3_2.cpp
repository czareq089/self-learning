//
// Created by czareq089 on 29/01/2025.
/* Zadanie 3.2. (0–3)
    Wypisz wszystkie liczby z pliku liczby.txt, które mają co najmniej 5 różnych dzielników
    pierwszych.
    W pliku liczby_przyklad.txt jest jedna taka liczba: 2730.
 */
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if(n==1) {
        return false;
    }
    if (n==0){
        return false;
    }
    if (n%2==0){
        return false;
    }
    for(int i=3; i<=sqrt(n); i+=2) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {

    string line;
    ifstream file("liczby.txt");

    while(getline(file,line)){
        int num = stoi(line);
        int temp = num;
        int dcount = 0;
        for(int i=2; i<num; i++) {
            if(isPrime(i) && temp%i==0){
                dcount++;
                while (temp%i==0){
                    temp /= i;
                }
            }
        }
        if (temp > 1) dcount++;
        if(dcount>=5){
            cout << num << endl;
        }

    }
    file.close();
}

