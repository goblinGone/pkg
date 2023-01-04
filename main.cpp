/***************************************************************************
 * pass key gen                                                            *
 * Copyright (C) 2022 by Warej                                             *
 *   ware.j@protonmail.com                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int length = 13;

vector<char> passkey;

int main (int argc, char *argv[]) {

    int max {73}; //upper limit of the randomiser
    srand(time(NULL)); //proper random?

    vector <char> myChars {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n',
    'm','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M',
    '!','@','#','$','%','^','&','*','?','<','>','1','2','3','4','5','6','7','8','9','0'};

    string partA, partB, partC, partD, partE, partF, partG, partH, partI, partJ, partK, partL, partM, partN;

    partA = myChars.at(rand()%max);
    partB = myChars.at(rand()%max);
    partC = myChars.at(rand()%max);
    partD = myChars.at(rand()%max);
    partE = myChars.at(rand()%max);
    partF = myChars.at(rand()%max);
    partG = myChars.at(rand()%max);
    partH = myChars.at(rand()%max);
    partI = myChars.at(rand()%max);
    partK = myChars.at(rand()%max);
    partL = myChars.at(rand()%max);
    partM = myChars.at(rand()%max);
    partN = myChars.at(rand()%max);

    cout<<partA<<partB<<partC<<partD<<partE<<partF<<partG<<partH<<partI<<partJ<<partK<<partL<<partM<<partN<<endl;

    return 0;
}

    