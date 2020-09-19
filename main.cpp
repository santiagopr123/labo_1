#include <iostream>

using namespace std;

int potencia(int numero);
int primos(int number);


int main()
{
    /*
     funcion para averiguar el factorial
    int n = 0;
    cout<<"ingrese el numero hasta el cual quiere la suma del numero e: ";cin>>n;
    for(int i = 1,cont = 1;i<=n; ++i)
    {
        cont = cont * i;
        cout<<cont;
    }
    */

    /*
     ejercicio serie de fibonacci
    int n = 0;
    cout<<"ingrese el numero hasta el cual se efectuara la suma: ";cin>>n;

    for(int i = 1, x = 0, y = 1,z=0,suma = 0; i<= n; i++)
    {
        z = x + y;
        x = y;
        y = z;
        cout<<"esta es la suma: "<<z<<endl;

        if(z%2 == 0)
        {
            suma = suma + z;
            cout<<z<<" es un numero par y esta es la suma de los numeros pares de la serie de fibonacci: "<<suma<<endl;
        }
    }
    */

    /*
    int n = 0, s=0, z= 0;
    cout<<"ingrese el numero: ";cin>>n;
    while (n>0) {
        z = n%10;
        s = s + potencia(z);
        n = n/10;
    }
    cout<<s;
    */

    int x = 0;
    cout<<"ingrese un numero: ";cin>>x;
    cout<<primos(x);


    return 0;
}


int potencia(int numero)
{
    int constante = numero,multiplicacion = numero;
    for(int i=1; i<numero; ++i)
    {
        multiplicacion = multiplicacion * constante;
    }
    return multiplicacion;
}

int primos(int number)
{
    int suma = 0;
    for(int i = 0; i<= number; i++)
    {
        if(number % i == 0)
        {
            suma += 1;
        }
    }
    if(suma > 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}










