//
// Created by czareq089 on 29/01/2025.
/* Zadanie 3.1. (0–2)
    Znajdź w pliku liczby.txt takie liczby, które są kwadratami liczb całkowitych. Podaj, ile
    jest takich liczb, oraz podaj tę, która występuje w pliku jako pierwsza.
    W pliku liczby_przyklad.txt są 2 kwadraty, pierwszy to 9801.
*/
//


#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int count = 0;
    int first = 0;
    string line;
    ifstream file("liczby.txt");

    while(getline(file,line)){
        int num = stoi(line);
        int root = sqrt(num);
        if (root * root == num){
            count++;
            if (first == 0){
                first = num;
            }
        }
    }
    cout << count << endl;
    cout << first << endl;
    file.close();
}