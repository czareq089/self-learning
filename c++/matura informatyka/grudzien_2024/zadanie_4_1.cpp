//
// Created by czareq089 on 29/01/2025.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("prostokaty.txt");
    string line;
    int max;
    int min = INT_MAX;
    while (getline(file, line)){
        string h = line.substr(0, line.find(' '));
        string w = line.substr(line.find(' ') + 1);
        if (max < stoi(h) * stoi(w)) {
            max = stoi(h) * stoi(w);
        }
        int temp = (stoi(h) * stoi(w));
        if (temp < min){
            min = temp;
        }
    }
    cout << max << endl;
    cout << min << endl;
    file.close();
}