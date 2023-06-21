#include <iostream>
using namespace std;

int main(){

    char button;
    cout<<"input a character: ";
    cin>>button;

    // if (button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if (button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if (button=='c')
    // {
    //     cout<<"Salut"<<endl;
    // }
    // else if (button=='d')
    // {
    //     cout<<"Hola"<<endl;
    // }
    // else if (button=='e')
    // {
    //     cout<<"Ciao"<<endl;
    // }
    // else {
    //     cout<<"I am still Learning more"<<endl;
    // }

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Salut"<<endl;
        break;
    case 'd':
        cout<<"hola"<<endl;
        break;
    case 'e':
        cout<<"ciao"<<endl;
        break;
    
    default:
    cout<<"i am still learning more"<<endl;
        break;
    }
    return 0;

}