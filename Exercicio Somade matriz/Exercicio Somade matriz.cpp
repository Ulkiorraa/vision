#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, ".utf-8");
	int mathA[4][3], mathB[4][3], mathC[4][3];
	int L, C;
    for (L = 0; L <= 3; L++) {
        for (C = 0; C <= 2; C++) {
            mathA[L][C] = -1238;
            mathB[L][C] = -1238;
            mathC[L][C] = -1238;
        }
    }
    cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0| --------- | --------- | --------- |\n |-----------------------------------|\n1| --------- | ---------";
    cout << " | --------- |\n |-----------------------------------|\n2| --------- | --------- | --------- |\n |-----------------------------------|\n3| ";
    cout <<"--------- | --------- | --------- |\n -------------------------------------\n";
    for (L = 0; L <= 3; L++){
        for (C = 0; C <= 2; C++){
            cout << "Digite o valor de mathA[" << L << "][" << C << "]:";
            cin >> mathA[L][C];
            system("cls");
            //Math[0][0]
            if ((mathA[0][0] > -1238)&&(mathA[0][1] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[0][1] > -1238) && (mathA[0][2] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[0][2] > -1238) && (mathA[1][0] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[1][0]
            if ((mathA[1][0] > -1238) && (mathA[1][1] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[1][1] > -1238) && (mathA[1][2] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[1][2] > -1238) && (mathA[2][0] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[2][0]
            if ((mathA[2][0] > -1238) && (mathA[2][1] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[2][1] > -1238) && (mathA[2][2] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[2][2] > -1238) && (mathA[3][0] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[3][0]
            if ((mathA[3][0] > -1238) && (mathA[3][1] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathA[3][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[3][1] > -1238) && (mathA[3][2] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathA[3][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[3][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathA[3][2] > -1238) && (mathB[0][0] == -1238)) {
                //linha 1
                cout << "\t\tMathA\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathA[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathA[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathA[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathA[3][0];
                cout << "|";
                cout.width(11);
                cout << left << mathA[3][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathA[3][2];
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
        }
    }
   
    
    
    //Matriz B




    cout << "Agora peencha a matriz MathB.\n";
    system("pause");
    system("cls");
    cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0| --------- | --------- | --------- |\n |-----------------------------------|\n1| --------- | ---------";
    cout << " | --------- |\n |-----------------------------------|\n2| --------- | --------- | --------- |\n |-----------------------------------|\n3| ";
    cout << "--------- | --------- | --------- |\n -------------------------------------\n";
    for (L = 0; L <= 3; L++) {
        for (C = 0; C <= 2; C++) {
            cout << "Digite o valor de MathB[" << L << "][" << C << "]:";
            cin >> mathB[L][C];
            system("cls");
            //Math[0][0]
            if ((mathB[0][0] > -1238) && (mathB[0][1] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[0][1] > -1238) && (mathB[0][2] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[0][2] > -1238) && (mathB[1][0] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[1][0]
            if ((mathB[1][0] > -1238) && (mathB[1][1] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[1][1] > -1238) && (mathB[1][2] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[1][2] > -1238) && (mathB[2][0] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[2][0]
            if ((mathB[2][0] > -1238) && (mathB[2][1] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[2][1] > -1238) && (mathB[2][2] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[2][2] > -1238) && (mathB[3][0] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            //MathA[3][0]
            if ((mathB[3][0] > -1238) && (mathB[3][1] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathB[3][0];
                cout << "|";
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[3][1] > -1238) && (mathB[3][2] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathB[3][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[3][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << " --------- ";
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
            if ((mathB[3][2] > -1238) && (mathB[0][0] == -1238)) {
                //linha 1
                cout << "\t\tMathB\n\t0\t   1\t\t2\n -------------------------------------\n0|";
                cout.width(11);
                cout << left << mathB[0][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[0][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[0][2];
                cout << "|";
                //linha 2
                cout << "\n -------------------------------------\n1|";
                cout.width(11);
                cout << left << mathB[1][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[1][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[1][2];
                cout << "|";
                //linha 3
                cout << "\n -------------------------------------\n2|";
                cout.width(11);
                cout << left << mathB[2][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[2][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[2][2];
                cout << "|";
                //linha 4
                cout << "\n -------------------------------------\n3|";
                cout.width(11);
                cout << left << mathB[3][0];
                cout << "|";
                cout.width(11);
                cout << left << mathB[3][1];
                cout << "|";
                cout.width(1);
                cout.width(11);
                cout << left << mathB[3][2];
                cout << "|";
                cout << "\n -------------------------------------\n|";
            }
        }
    }
    for (L = 0; L <= 3; L++) {
        for (C = 0; C <= 2; C++) {
            mathC[L][C] = mathA[L][C]+ mathB[L][C];
        }
    }
    //linha 1 MathA
    cout << "\t\tMathA\t\t\t\t\t\tMathB\t\t\t\t\t\tMathC\n\t0\t   1\t\t2\t\t\t 0\t   1\t\t2\t\t\t 0\t   1\t\t2\n -------------------------------------\t\t -------------------------------------\t\t -------------------------------------\n0|";
    cout.width(11);
    cout << left << mathA[0][0];
    cout << "|";
    cout.width(11);
    cout << left << mathA[0][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathA[0][2];
    cout << "|\t\t0|";
    cout.width(11);
    cout << left << mathB[0][0];
    cout << "|";
    cout.width(11);
    cout << left << mathB[0][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathB[0][2];
    cout << "|\t\t0|";
    cout.width(11);
    cout << left << mathC[0][0];
    cout << "|";
    cout.width(11);
    cout << left << mathC[0][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathC[0][2];
    cout << "|";
    //linha 2
    cout << "\n -------------------------------------\t\t -------------------------------------\t\t -------------------------------------\n1|";
    cout.width(11);
    cout << left << mathA[1][0];
    cout << "|";
    cout.width(11);
    cout << left << mathA[1][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathA[1][2];
    cout << "|\t\t1|";
    cout.width(11);
    cout << left << mathB[1][0];
    cout << "|";
    cout.width(11);
    cout << left << mathB[1][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathB[1][2];
    cout << "|\t\t1|";
    cout.width(11);
    cout << left << mathC[1][0];
    cout << "|";
    cout.width(11);
    cout << left << mathC[1][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathC[1][2];
    cout << "|";
    //linha 3
    cout << "\n -------------------------------------\t   +\t -------------------------------------\t   =\t -------------------------------------\n2|";
    cout.width(11);
    cout << left << mathA[2][0];
    cout << "|";
    cout.width(11);
    cout << left << mathA[2][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathA[2][2];
    cout << "|\t\t2|";
    cout.width(11);
    cout << left << mathB[2][0];
    cout << "|";
    cout.width(11);
    cout << left << mathB[2][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathB[2][2];
    cout << "|\t\t2|";
    cout.width(11);
    cout << left << mathC[2][0];
    cout << "|";
    cout.width(11);
    cout << left << mathC[2][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathC[2][2];
    cout << "|";
    //linha 4
    cout << "\n -------------------------------------\t\t -------------------------------------\t\t -------------------------------------\n3|";
    cout.width(11);
    cout << left << mathA[3][0];
    cout << "|";
    cout.width(11);
    cout << left << mathA[3][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathA[3][2];
    cout << "|\t\t3|";
    cout.width(11);
    cout << left << mathB[3][0];
    cout << "|";
    cout.width(11);
    cout << left << mathB[3][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathB[3][2];
    cout << "|\t\t3|";
    cout.width(11);
    cout << left << mathC[3][0];
    cout << "|";
    cout.width(11);
    cout << left << mathC[3][1];
    cout << "|";
    cout.width(1);
    cout.width(11);
    cout << left << mathC[3][2];
    cout << "|";
    cout << "\n -------------------------------------\t\t -------------------------------------\t\t -------------------------------------\n";
    system("pause");
}