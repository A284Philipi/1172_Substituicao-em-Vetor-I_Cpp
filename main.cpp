#include <iostream>

using namespace std;

int main()
{
    int cont = 0, numero;
    while (cont < 10){
        cin >> numero;
        if (numero < 1){
            cout << "X[" << cont << "] = 1" <<endl;
        }else{
            cout << "X[" << cont << "] = " << numero <<endl;
        }
        cont++;
    }
    return 0;
}
