#include <iostream>
using namespace std;
int main(){
    int A[]{ 7,4,1,5,6,8,4,5,3,1,6,7,5,1,7,8,3,6 }, C[sizeof(A) / sizeof(*A)]{};
    int x, count = NULL;
    x = A[0];
    for (int i = 1; i < sizeof(A) / sizeof(*A); i++) 
    {
        if (A[i] > x)
        {
            x = A[i];
        }
    }
    int* B = new int[x];
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < sizeof(A) / sizeof(*A); j++)
        {
            if (A[j] == i)
            {
                count++;
            }
        }
        if (count == NULL && i == 1) B[i - 1] = 0;
        else if (count != NULL && i == 1) B[i - 1] = count;
        else if (count == NULL) B[i - 1] = B[i - 2];
        else B[i - 1] = B[i - 2] + count;
        count = NULL;
    }
    cout << "A[";
    for (int i = 0; i < sizeof(A) / sizeof(*A); i++)
    {
        cout << " " << A[i];
    }
    cout << " ]\n\n";
    cout << "B[";
    for (int i = 0; i < x; i++)
    {
        cout <<" "<< B[i];
    }
    cout << " ]\n\n";
    for (int i = 0; i < sizeof(A) / sizeof(*A); i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (A[i] == j + 1)
            {
                C[--B[j]] = A[i];
                break;
            }
        }
    }
    cout << "------------------------------------------------------------\n\n";
    cout << "B[";
    for (int i = 0; i < x; i++)
    {
        cout << " " << B[i];
    }
    cout << " ]\n\n";
    cout << "C[";
    for (int i = 0; i < sizeof(C) / sizeof(*C); i++)
    {
        cout << " " << C[i];
    }
    cout << " ]\n\n";
    delete[] B;
    system("pause");
    return 0;
}