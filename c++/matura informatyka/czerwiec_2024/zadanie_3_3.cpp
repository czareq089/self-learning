#include <iostream>

using namespace std;

int main()
{
    string slowo = "aacdefghbb";
    int max = 0;
    for (int i = 0; i < slowo.size(); i++) {
        int count = 0;
        for (int j = 0; j < slowo.size(); j++) {
            if(slowo[i] == slowo[j]){
                count++;
            }
            if(count > max){
                max = count;
            }
        }
    }
    if(max >= (slowo.size()/2)){
            cout << "prawda";
        }
        else{
            cout << "fałsz";
        }
}
