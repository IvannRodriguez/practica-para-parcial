#include <iostream>

using namespace std;
/*
EJERCICIO 1
[] declarar una variable de tipo float llamada temp
[] inicializar la variable en 0
[] Pedir al usuario que ingrese una temperatura con un cout
[] convertir con la formula de celsuis a fahrenheit
[] mostrar resultado


int main()
{
    float temp=0;

    cout<<"Ingrese una temperatura en Celsuis: "<<endl;
    cin>>temp;
    cout<<"El resultado de la conversion es: "<<((temp*9/5) + 32)<<endl;



    return 0;

}
EJERCICIO 3
[] declarar variable
[] pedirle al usuario que ingrese un numero
[] hacer un do while par el incremento de los numeros
[] hacer un while para que la cuanta regresiva llegue a 1

int main()
{
    int num1;

cout<<"Introduce un numero: "<<endl;
cin>>num1;


do{

cout<<("%d\n",num1)<<endl;
num1--;

}while (num1 != 0);



return 0;

}

EJERCICIO 4
[] Declarar las variables de tipo int n y s y a s inicalizarla en 0
[] pedirle al usuario que ingrese el limite de numeros que quiera sumar
[] hacer un for para que la suma se haga hasta el numero limite
[] hacer un acumulador para acumular la suma
[] mostrar la suma
int main()
{
    int n,s=0;
    cout<<"Ingrese hasta que numero queres que se haga la suma: "<<endl;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        s=s+i;
        cout<<i<<" + "<<endl;

    }
    cout<<"La suma es igual a: "<<s<<endl;
    return 0;


}
EJERCICIC 2
[] Declarar la variable de tipo int llamada num
[] Pedirle al usuario que ingrese un numero
[] Declarar e inicializar la variable esPrimo de tipo bool = a verdadero
[] Preguntar si num es menor igual a 1
[] Hacer un for para que el limite sea num
[] Preguntar si el resto de num es igual a cero
[] Mostrar si es numero primo o no mediante un if
int main()
{
    int num;
    cout<<"Ingrese numero: "<<endl;
    cin>>num;
    bool esPrimo=true;
    if(num <=1)
    {
        esPrimo=false;
    }else
    {
        for(int i=2; i*i <=num; i++)
        {
            if(num % i == 0)
            {
                esPrimo = false;
                break;
            }
        }
    }
    if(esPrimo)
    {
        cout << num <<"Es un numero primo"<<endl;

    }else
    {
        cout<< num <<"No es un numero primo"<<endl;
    }

      return 0;
}
*/
