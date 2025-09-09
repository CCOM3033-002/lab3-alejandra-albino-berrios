#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
    
    //Aquí explica para que es el programa. 
    cout<<"Este programa genera tres números aleatorios entre 1 y 100, y los ordena de mayor a menor.\n"<<endl;
    cout<<"Presione Enter para generar los números\n"<<endl;

    srand(time(0));
    int numAleatorio1 = rand() % (100 - 1 + 1) + 1, numAleatorio2 = rand() % (100 - 1 + 1) + 1, numAleatorio3 = rand() % (100 - 1 + 1) + 1;
    
    //Declarar variables
    int num1;

    //En esta sección, los numeros se ordenan de mayor a menor. 
    if (numAleatorio1 > numAleatorio2 && numAleatorio1 > numAleatorio3)
        num1 = numAleatorio1;
    else if (numAleatorio2 > numAleatorio1 && numAleatorio2 > numAleatorio3)
        num1 = numAleatorio2;
    else 
        num1 = numAleatorio3;

    

    cout<<"Los numeros generados son: "<<num1<<" "<<numAleatorio2<<" "<<numAleatorio3<<" "<<endl;

    return 0;

}