//
// Created by czareq089 on 29/01/2025.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <bits/ranges_algo.h>

using namespace std;

int main() {
  ifstream file("prostokaty.txt");
  string line;
  vector<int> areas;
  string maxsubl;
  for (int i = 0; i < getline(file,line).gcount();i++){
    string h = line.substr(0,line.find(' '));
    string w = line.substr(line.find(' ') + 1);
    areas.push_back(stoi(h) * stoi(w));
  }
  ranges::reverse(areas.begin(), areas.end());

  // do dokończenia

  file.close();
}