//
// Created by czareq089 on 29/01/2025.
/* Zadanie 3.3. (0–3)
    Do każdej liczby w pliku stosujemy następującą procedurę: z jej czterech cyfr tworzymy
    największą możliwą oraz najmniejszą możliwą liczbę, po czym drugą z nich odejmujemy od
    pierwszej. Przykładowo: dla liczby 3151 największa możliwa liczba to 5311, a najmniejsza to
    1135, a więc wynik – ich różnica – wynosi 4176. Jeśli w liczbie występują zera, traktujemy je
    tak samo jak inne cyfry (na przykład dla liczby 2047 różnica to 7420 − 0247 = 7173).
    Dla każdej liczby rozstrzygnij, czy różnica otrzymana w wyniku zastosowania podanej
    procedury jest mniejsza, większa czy równa danej liczbie. Podaj, ile razy otrzymamy różnicę
    mniejszą, ile razy – większą, a ile razy – równą danej liczbie. Ponadto wypisz każdą liczbę,
    dla której otrzymuje się w wyniku zastosowania podanej procedury różnicę równą danej
    liczbie.
    Dla pliku liczby_przyklad.txt otrzymamy 8 razy mniejszą różnicę i 12 razy większą
    różnicę. Ani razu różnica nie będzie równa danej liczbie
 */
//

#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("liczby.txt");
    string line;
    int countless = 0, countmore = 0;
    while (getline(file,line)) {
        string min = line;
        sort(min.begin(), min.end());
        string max = min;
        reverse(max.begin(), max.end());
        int result = (stoi(max) - stoi(min));
        if (result > stoi(line)) {
            countmore++;
        }
        if (result < stoi(line)) {
            countless++;
        }
        if (result == stoi(line)) {
            cout << line << endl;
        }
    }
    cout << endl;
    cout << countless << endl;
    cout << countmore << endl;
}