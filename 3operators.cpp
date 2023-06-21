#include <iostream>
using namespace std;

int main(){
    
    // int i=1;
    //     //1  //3
    // i = i++ + ++i;

    // cout<<i<<endl;
// -----------------------

    // int i=1;
    // int j=2;
    // int k;
    //    //1 //2 //1   //2   //3   //4
    // k= i + j + i++ + j++ + ++i + ++j;

    // cout<<i<<" "<<j<<" "<<" "<<k<<endl;
// -----------------------------

//     int i=0;
//         //0   //0   //1   //1
//     i = i++ - --i + ++i - i--;
//     //1
//     cout<<i<<endl;
// -------------------------------

int i=1, j=2, k=3;
        //1   //2
int m = i-- - j-- - k--;

cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;
cout<<m<<endl;

    return 0;
}