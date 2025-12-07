#pragma once
#include<bits/stdc++.h>
#include "stati.h"
using namespace std;
bool buy_pivo() {
    if (dengy < 2) {
        cout << "иди отсюда нищеброд" << endl;
    }
    dengy    = dengy - 2;
    zdorovie = zdorovie + 5;
    cout << "Вы пьете ПИИИво";
    return false;
}

bool buy_coffee() {
    // TODO
}

bool buy_pechenko() {
    // TODO
}

bool snyatie_komnati() {
    if (dengy >= 5) {
        dengy = dengy - 5;
        mana  = mana + 10;
        cout << "Вы сняли комнату на ночь и проспали до утра";
        return false;
    } else {
        cout << "У вас нет достаточно денег";
        return false;
    }
}

makeScene3Back(za_stolom,
               "Вы садитесь за стол и открываете меню."
               "1.Пиво-2 монеты",
               buy_pivo, "2.КООФЭ-1 монета", buy_coffee, "3.печенько-10 монет", buy_pechenko);

makeScene3Back(taverna, "Вы заходите в таверну.", "1.Сесть за столик", za_stolom, "2.Снять комнату на ночь",
               snyatie_komnati, "3.Сыграть в лавжшщукфкщж", game);
