#pragma once
#include<bits/stdc++.h>
#include "stati.h"
using namespace std;
bool kazik() {
    int resultkaz;
    cout << "Сыграем? Нужно угадать,перевернута синяя или зеленая карта.Если угадаешь-отдам 10 монет.Цена-5 монет."
         << endl
         << "1.Сыграть" << endl
         << "2.Назад" << endl;
    int varik1;
    cin >> varik1;
    if (varik1 == 1) {
        dengy = dengy - 5;
        cout << "Вы бросаете дайс д20" << endl;
        resultkaz = rollD20();
        cout << "результат:" << resultkaz << endl;
        if (resultkaz >= 10) {
            cout << "Вы выиграли!" << endl;
            dengy = dengy + 10;
        } else if (resultkaz < 10) {
            cout << "Вы проиграли." << endl;
        }
    } else if (varik1 == 2) {
        return false;
    }
    return false ;
}
