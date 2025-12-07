#include <bits/stdc++.h>
#include "taverna.h"
#include "dialogi.h"
#include "stati.h"

using namespace std;


int rollD20() {
    return rand() % 20 + 1;
}
constexpr int INF = 1e9;

bool torgash() {
    cout << "zdarova putnik" << endl << "1." << endl << "2." << endl << "3." << endl << "4.back" << endl;

    int varik;
    cin >> varik;

    if (varik == 1) {
    } else if (varik == 2) {
    } else if (varik == 3) {
    } else if (varik == 4) {
        return false;
    }
    return true;
}





//bool taverna() {
//    cout << "Вы заходите в таверну." << endl
//         << "1.Сесть за столик" << endl
//         << "2.Снять комнату на ночь" << endl
//         << "3.Сыграть в лавжшщукфкщж";
//    int varek;
//    cin >> varek;
//    if (varek == 1) {
//        int zhrat;
//        cout << "Вы садитесь за стол и открываете меню." << endl
//             << "1.Пиво-2 монеты" << endl
//             << "2.КООФЭ-1 монета" << endl
//             << "3.печенько-10 монет" << endl
//             << "4.назад";
//        cin >> zhrat;
//        if (zhrat == 1) {
//            dengy    = dengy - 2;
//            zdorovie = zdorovie + 5;
//            cout << "Вы пьете ПИИИво";
//        } else if (zhrat == 2) {
//            o
//        }
//    } else if (varek == 2) {
//        if (dengy >= 5) {
//            dengy = dengy - 5;
//            mana  = mana + 10;
//            cout << "Вы сняли комнату на ночь и проспали до утра";
//            return taverna;
//        } else {
//            cout << "У вас нет достаточно денег";
//            return taverna;
//        }
//    }
//}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(nullptr));
    taverna();
}
