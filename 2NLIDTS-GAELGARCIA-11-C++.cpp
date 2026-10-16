#include <iostream>

using namespace std;

int sumaIterativa(int n)
{
    int suma = 0;
    while (n > 9)
    {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int sumaRecursiva(int n)
{
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int main()
{
    int cantidad;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        int n;
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> n;
        cout << "Suma iterativa: " << sumaIterativa(n) << endl;
        cout << "Suma recursiva: " << sumaRecursiva(n) << endl;
    }

    return 0;
}