#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double parcelado10(double a, int i);
double parcela2(double a);
double avista(double a);
void parcelasi(double a, int i);
int main(){
    setlocale(LC_ALL, ".utf-8");
    double total, pagar;
    int opcao, parcela,r=0;
    cout << "Qual total deu o valor da compra da cliente?\nR$";
    cin >> total;
    cout << "\nQual forma de pagamento escolhida:\n1 - A vista.\n2 - 2x sem juros.\n3 - mais de 3x com juros a 3% ao mes.\n";
    do {
        cin >> opcao;
        r = 0;
        switch (opcao) {
        
            case 1:
                pagar = avista(total);
                cout << fixed << setprecision(2) << "\nO total a ser pago pelo cliente é R$" << pagar << endl;
                break;
            case 2:
                pagar = parcela2(total);
                cout << fixed << setprecision(2) << "\nO cliente ira pagar em 2x de R$" << pagar << " sendo um total de " << pagar * 2 << endl;
                break;
            case 3:
                if (total < 100) {
                    cout << "valor insuficiente para forma de pagamento!\nDigite uma nova forma de pagamento.\n";
                    r = 1;
                    break;
                }
                cout << "Em quantas vezes o cliente ira pagar?\n";
                do {
                    cin >> parcela;
                    if (parcela < 3) {
                        cout << "O número de parcelas tem que ser maior que 3.\nDigite novamente.\n";
                        r = 1;
                    }
                } while (parcela < 3);

                    pagar = parcelado10(total, parcela);
                    cout << "O pagamento ficara da seguinte forma:\n";
                    parcelasi(total, parcela);
                    cout << fixed << setprecision(2) << "totalizando R$" << pagar << endl << endl;
                    break;
            default:
                if (opcao > 3 || opcao <= 0) {
                    cout << "opção invalida!\nTente outra.\n";
                    r = 1;
                    break;
                }
        }
    } while (r == 1);
    system("pause");
}

void parcelasi(double a, int i) {
    for (int j = 0;j < i;j++) {
        cout << fixed << setprecision(2) << j + 1 << " parcela = R$" << parcelado10(a, i) / i << endl;
    }
}

double parcelado10(double a, int i) {
    return a * pow((1 + 0.03), i);
}

double parcela2(double a) {
    return a / 2;
}

double avista(double a) {
    return a * 0.9;
}
