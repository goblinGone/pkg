#include <iostream>

using namespace std;

const char lower[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l'};

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


    cout<< "\n \n   Pass Key Generator \n";
    cout<< "    Version 0.2";
    cout<< "    This software uses teh GNU General Public License \n";
    cout<< "    if for whatever reason you need to check out the deets \n";
    cout<< "    licencing info can be found at https://www.gnu.org/licenses/gpl-3.0.en.html \n";
    cout<< "\n"<<"  I make no garuantee on this software being either safe or even working \n \n \n";

}

int main (int argc, char *argv[]) {

    //will error if no params are given
    if (argc == 1 ) {
        cout <<"Commands expected after the program init"<<endl;
        cout <<"for usage of this tool type H "<<endl;
    }
    if(argc>= 2) {
        for(int i = 1 ; i <= argc ; i++) {
            if (*argv[i] == 'H'){
                helpCommand();
            }
            if (*argv[i] == 'A'){
                art();
            }
            if (*argv[i] == 'Q') {
                cout<<"There is an Q in the command"<< endl;
            }
        }
    }

    return 0;
}
//cout<<""<< endl;