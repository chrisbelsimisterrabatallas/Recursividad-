#include <iostream>
using namespace std;


//factorial con bucles
int factorial (int n)
{
    int fac=1;
    for(int i=1; i<=n; i++)
        fac=fac*i;
    return fac;
}

//factorial recursivo
//la funcion que se llama a si misma
double fact(int n)
{
    if(n==1)
        return 1.0;//salida de la funcion
    else
        return n * fact(n-1.0);
}

//Diseñe la funcion recursiva que sume los n primeros numeros, contados desde 1
//suma=1+2+3+4+.. n

int primerosNumeros(int n)
{
    if(n==1)
        return n;
    else
        return n + primerosNumeros(n-1);
}


int main() {
    cout<<endl<<"El factorial de 5 es: "<<factorial(5);
    cout<<endl<<"El factorial de 6 usando recursividad: "<<fact(6);

    cout<<endl<<"Suma de los 5 primeros enteros es: "<<primerosNumeros(5);
    return 0;
}
