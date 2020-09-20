#include <iostream>

using namespace std;

int potencia(int numero);
int primos(int number);
int multiplos_del_dos(int num);
int multiplos_del_tres(int num);
int multiplos_del_cinco(int num);
int multiplos_del_siete(int num);
int potencia_distinto_numero(int nume, int poten);
int divisores(int nu);




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

    /*
    int x = 0,z = 0,suma = 0;
    cout<<"ingrese un numero: ";cin>>x;
    for(int i=2;i<=x;i++)
    {
        z = primos(i);
        if(z == 0)
        {
            suma += i;
        }
    }

    cout<<"la suma de los numeros primos contenidos en x es: "<<suma;
    */

    /*
    int numero = 0,suma = 0;
    cout<<"ingrese el numero para descubrir el maximo factor primo: ";cin>>numero;

    for(int i = 1; i<= numero; i++)
    {
        if(numero%i == 0 && primos(i)==0 && numero != i)
        {
            if(i > suma)
            {
                suma = i;
            }
        }
    }

    cout<<"el maximo factor primo es: "<<suma;
    */

    /*
    int a = 0,b = 0,c = 0, d = 0,max = 0,max1 = 0,max2 = 0,max3 = 0,result = 0,pri = 1;
    int x =90;
    for(int i= 1; i<=x; i++)
    {
        if(i>7 && primos(i)==0)
        {
            pri = pri * i;
        }
        a = multiplos_del_dos(i);
        b = multiplos_del_tres(i);
        c = multiplos_del_cinco(i);
        d = multiplos_del_siete(i);

        if(a >= max)
        {
            max = a;
        }
        if(b >= max1)
        {
            max1 = b;
        }
        if(c >= max2)
        {
            max2 = c;
        }
        if(d >= max3)
        {
            max3 = d;
        }

    }
    result = potencia_distinto_numero(2,max) * potencia_distinto_numero(3,max1) * potencia_distinto_numero(5,max2) * potencia_distinto_numero(7,max3) * pri;
    cout<<"el minimo comun multiplo es: "<< result;
    */

    /*
    int suma = 1,verificador = 0, k = 6;

    for(int i = 2;; i++)
    {
        suma = suma + i ;
        verificador = divisores(suma);
        if(verificador > k)
        {
            cout<<"el numero es: "<<suma<<" y tiene: "<<verificador<<" divisores.";
            break;

        }
        cout<<"esta es la suma: "<<suma;
    }

    */




    return 0;
}


int potencia(int numero)
{
    int constante = numero,multiplicacion = numero;
    if(numero == 0)
    {
        multiplicacion = 1;
        return multiplicacion;
    }
    for(int i=1; i<numero; ++i)
    {
        multiplicacion = multiplicacion * constante;
    }
    return multiplicacion;
}

int primos(int number)
{
    int suma = 0;
    for(int i = 1; i<= number; i++)
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

int multiplos_del_dos(int num)
{
    int suma = 0;
    while(num%2 == 0)
    {

        num /= 2;
        suma += 1;


    }
    return suma;
}

int multiplos_del_tres(int num)
{
    int suma = 0;
    while(num%3 == 0)
    {

        num /= 3;
        suma += 1;

    }
    return suma;
}

int multiplos_del_cinco(int num)
{
    int suma = 0;
    while(num%5 == 0)
    {

        num /= 5;
        suma += 1;


    }
    return suma;
}

int multiplos_del_siete(int num)
{
    int suma = 0;
    while(num%7 == 0)
    {

        num /= 7;
        suma += 1;


    }
    return suma;
}

int potencia_distinto_numero(int nume, int poten)
{
    int constante = nume;
    if(poten == 0)
    {
        nume = 1;
        return nume;
    }

    for(int i= 1; i<poten; i++)
    {
        nume *= constante;
    }
    return nume;
}

int divisores(int nu)
{
    int  sumas = 0;
    for(int i = 1; i<= nu; i++)
    {
        if(nu%i == 0)
        {
            sumas += 1;
        }
    }

    return sumas;
}


