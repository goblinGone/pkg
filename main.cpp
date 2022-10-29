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
#include <ctime>
#include <vector>
#include <random>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<char> passkey;

vector <char> myChars {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n',
'm','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M',
'!','@','#','$','%','^','&','*','?','<','>','1','2','3','4','5','6','7','8','9','0'};

void helpCommand() {
    cout<< "\n" << "Help page for the Passkey Generator"<< endl;
    cout<<"Currently the options are:"<< endl;
    cout<<"H - Display the help stuff (this bit)"<< endl;
    cout<<"C - Only use numbers and letters, ie no special chars"<< endl;
    cout<<"A - Display the version and licencing stuff "<< endl;
}

void art() {
    cout << R"(
          _____                    _____                    _____          
         /\    \                  /\    \                  /\    \         
        /::\    \                /::\____\                /::\    \        
       /::::\    \              /:::/    /               /::::\    \       
      /::::::\    \            /:::/    /               /::::::\    \      
     /:::/\:::\    \          /:::/    /               /:::/\:::\    \     
    /:::/__\:::\    \        /:::/____/               /:::/  \:::\    \    
   /::::\   \:::\    \      /::::\    \              /:::/    \:::\    \   
  /::::::\   \:::\    \    /::::::\____\________    /:::/    / \:::\    \  
 /:::/\:::\   \:::\____\  /:::/\:::::::::::\    \  /:::/    /   \:::\ ___\ 
/:::/  \:::\   \:::|    |/:::/  |:::::::::::\____\/:::/____/  ___\:::|    |
\::/    \:::\  /:::|____|\::/   |::|~~~|~~~~~     \:::\    \ /\  /:::|____|
 \/_____/\:::\/:::/    /  \/____|::|   |           \:::\    /::\ \::/    / 
          \::::::/    /         |::|   |            \:::\   \:::\ \/____/  
           \::::/    /          |::|   |             \:::\   \:::\____\    
            \::/____/           |::|   |              \:::\  /:::/    /    
             ~~                 |::|   |               \:::\/:::/    /     
                                |::|   |                \::::::/    /      
                                \::|   |                 \::::/    /       
                                 \:|   |                  \::/____/        
                                  \|___|                                   
                                                                           
    )" << '\n';


    cout<< "\n \n    Pass Key Generator \n";
    cout<< "    Version 0.2 \n";
    cout<< "    This software uses teh GNU General Public License \n";
    cout<< "    if for whatever reason you need to check out the deets \n";
    cout<< "    licencing info can be found at https://www.gnu.org/licenses/gpl-3.0.en.html \n";
    cout<< "\n"<<"    I make no garuantee on this software being either safe to use or even be in a working state\n \n \n";

}

random_device rd;

int main (int argc, char *argv[]) {
    srand ( time(NULL) );
    cout << "Debug myChars vector length: " << size(myChars) << "\n";
    //Check that some params have been passed
    //will error if no params are given
	if (argc <= 1)
	{
		if (argv[0])
			cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			cout << "Usage: <program name> <number>" << '\n';

		return 1;
	}

    //converts char to int
	stringstream convert{ argv[1] }; // set up a stringstream variable named convert, initialized with the input from argv[1]

	int myint{};
	if (!(convert >> myint)) // do the conversion
		myint = 0; // if conversion fails, set myint to a default value

	cout << "Got integer: " << myint << '\n';
    for(auto i=1 ; i <= myint ; i++) {
        auto num = rd() % size(myChars) + 0;
        passkey.push_back(num);
        cout << "added "<<num<<"\n";

    }
    cout <<passkey;
    for(auto i: passkey)
    cout<<i;

    if(argc > 1) {
        for(int i = 0 ; i <= argc ; i++) {
            if (*argv[i] == 'H'){
                helpCommand();
            }
            if (*argv[i] == 'A'){
                art();
            }
            if (*argv[i] == 'Q') {
                cout<<"There is an Q in the command"<< endl;
            } else {
                
            }
        }
    }
        

    return 0;
}

    