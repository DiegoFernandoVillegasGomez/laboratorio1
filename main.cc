#include <iostream>

using namespace std;
void Consultarsaldo(saldo,&saldo,*saldo){
    cout<<"por valor:"<<saldo<<"\npor referencia"<<&saldo<<"\n por puntero:"<<*saldo<<endl;

}

int main(){
 

    int opcion;

    cout << "Ingrese la opcion que quiere realizar" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    default:
        break;
    }

    return 0;
}