/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int MAT,ING,FQ,PT,mdasnotas;
    std::cout<<"Dê-me a sua nota de matemática";
    std::cin>>MAT;
    std::cout<<"Dê-me a sua nota de inglês";
    std::cin>>ING;
    std::cout<<"Dê-me a sua nota de fisico-quimica";
    std::cin>>FQ;
    std::cout<<"Dê-me a sua nota de português";
    std::cin>>PT;
    mdasnotas=(MAT+ING+FQ+PT)/4;
    std::cout<<"A média das tuas notas é"<<mdasnotas;

    return 0;
}