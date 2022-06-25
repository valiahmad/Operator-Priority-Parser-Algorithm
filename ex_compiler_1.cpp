#include <iostream>
using namespace std;

int main()
{
    int state = 1;
    char ch = '\0';
    while(true){
        switch (state)
        {
        case 1:
            ch = getc(stdin);
            if (ch == 'a')
                state = 2;
            else if(ch == 'b')
                state = 3;
            else if(ch == '\n'){
                cout<<"Accepted";exit(0);
                }
            else {cout<<"ERROR";exit(0);}
            break;
        case 2:
            ch = getc(stdin);
            if(ch == 'a'|| ch == 'b')
                state =2;
            else if(ch == '\n'){
                cout<<"Accepted";exit(0);
            }
            else {cout<<"ERROR";exit(0);}
            break;
        case 3:
            ch = getc(stdin);
            if(ch == 'b')
                state = 2;
            else if(ch == '\n'){
                cout<<"Accepted";exit(0);
            }
            else {cout<<"ERROR";exit(0);}
            break;
        
        default:
            break;
        }
    }

    return 0;
}