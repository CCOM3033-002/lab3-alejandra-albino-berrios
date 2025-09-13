/*
Asignación 2: Número Aleatorio
Nombre: Alejandra Albino Berríos
Núm. Est: 801-14-0124
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(){
    
    //Aquí explica para que es el programa. 
    cout<<"Este programa genera tres numeros aleatorios entre 1 y 100, y los ordena de mayor a menor.\n"<<endl;
    cout<<"Presione Enter para generar los numeros..."<<endl;
    cin.get();

    //Genera los números aleatorios.
    srand(time(0));

    //Se declaran las variables y se le asigna el número aleatorio.
    int numAleatorio1 = rand() % (100 - 1 + 1) + 1, numAleatorio2 = rand() % (100 - 1 + 1) + 1, numAleatorio3 = rand() % (100 - 1 + 1) + 1;
    
    //Variables de mayor a menor.
    int numMayor, numMedio, numMenor;

    /*Estructura de decisión anidada donde primero se busca el número mayor. Si es true, el if/else anidado 
    determina cual de los dos números restantes es el menor. Por inferencia, el que no es menor es el
    número del medio. Se utilizó >= y <= para tomar en cuenta números generados que sean iguales. */
    if (numAleatorio1 >= numAleatorio2 && numAleatorio1 >= numAleatorio3){
        numMayor = numAleatorio1;
        if (numAleatorio2 <= numAleatorio3){ 
            numMenor = numAleatorio2;
            numMedio = numAleatorio3;
        }//Lista ordena numMayor, numAleatorio3, numMenor.
            
            else{
                numMenor = numAleatorio3;
                numMedio = numAleatorio2;
            }                   
    }
       
    else if (numAleatorio2 >= numAleatorio1 && numAleatorio2 >= numAleatorio3){
        numMayor = numAleatorio2;
        if (numAleatorio1 <= numAleatorio3){
            numMenor = numAleatorio1;
            numMedio = numAleatorio3;
        }
            else{
                numMenor = numAleatorio3;
                numMedio = numAleatorio1;
            }//Lista ordena numMayor, numAleatorio1, numMenor.
    }
            
    else if (numAleatorio3 >= numAleatorio2 && numAleatorio3 >= numAleatorio1){
        numMayor = numAleatorio3;
        if (numAleatorio1 <= numAleatorio2){
            numMenor = numAleatorio1;
            numMedio = numAleatorio2;
        }//Lista ordena numMayor, numAleatorio2, numMenor.

        else{ 
            numMenor = numAleatorio2;
            numMedio = numAleatorio1;
        }
    }

    //Despliega la lista de numeros generados de mayor a menor.
    cout<<"Los numeros generados son: "<<numMayor<<" "<<numMedio<<" "<<numMenor<<" "<<endl;
    
    return 0;

}