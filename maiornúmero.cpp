/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int N1,N2,N3;
    cout<<"Dá-me o teu primeiro número";
    cin>>N1;
    cout<<"Dá-me o teu segundo número";
    cin>>N2;
    cout<<"Dá-me o teu terceiro número";
    cin>>N3;
    if(N1>N2 && N1>N3)
    {
        cout<<"N1 wins";
    }
    else if(N2>N3){
        cout<<"N2 wins";
    }
    else{
        cout<<"N3 wins";
    }
        
    

    return 0;
}