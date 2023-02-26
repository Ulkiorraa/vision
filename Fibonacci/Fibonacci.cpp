#include <iostream>

using namespace std;

int num = 0;
int val = 0;

long long int fib(long long int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
       return (fib(n - 1) + fib(n - 2));
}

int main()
{
    long long int i;
    cout << "Serie de Fibonacci" << endl;
    cout << "Forneca um numero inteiro para calculo da serie:";
    cin >> num;

    cout << endl << "Resposta: Fibonacci para " << num << " elementos -> ";
    cout << "Fibonacci do elemento " << num << ": " << fib(num) << endl;
    system("pause");
    /*
    for (i = 0; i <= num; i++) // imprime a serie ate a quantidade "num" definida pela usuario.
        cout << fib(i) << " ";
    return 0;*/
}

