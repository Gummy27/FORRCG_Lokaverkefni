#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string inntak;
    string skipun;
    string tegund;
    string nafn;
    string eigandi_matur;
    int id, einkunn;

    do {
        cout << "Hvað viltu gera?: ";
        getline(cin, inntak);
        // inntak => skrá hund 10 snati 7 hundamat
        stringstream ss;
        ss << inntak;

        ss >> skipun;
    } while(skipun != "hætta");


    return 0;
};