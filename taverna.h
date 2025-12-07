#pragma once
#include "dialogi.h"
#include "stati.h"
#include <bits/stdc++.h>

using namespace std;

bool buy_pivo() {
  if (dengy < 2) {
    cout << "иди отсюда нищеброд" << endl;
    return false;
  }
  dengy = dengy - 2;
  zdorovie = zdorovie + 5;
  cout << "Вы пьете ПИИИво, осталось " << dengy << " денег" << endl;
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
    mana = mana + 10;
    cout << "Вы сняли комнату на ночь и проспали до утра";
    return false;
  } else {
    cout << "У вас нет достаточно денег";
    return false;
  }
}

makeScene3Back(za_stolom, "Вы садитесь за стол и открываете меню.",
               "Пиво-2 монеты", buy_pivo, 
               "КООФЭ-1 монета", buy_coffee,
               "печенько-10 монет", buy_pechenko);

bool game() {
  // TODO
}

makeScene3Back(taverna, "Вы заходите в таверну.", 
    "Сесть за столик", za_stolom, 
    "Снять комнату на ночь", snyatie_komnati, 
    "Сыграть в лавжшщукфкщж", game);
