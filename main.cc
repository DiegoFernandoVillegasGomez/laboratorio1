#include <iostream>

using namespace std;

void Consultarsaldo(float saldo,const float &saldo_ref, float *saldo_ptr){
    cout<<"por valor:"<<saldo<<endl;

}

void depositar(float *saldo, float cantidad){
    if (*saldo > 0) {
           *saldo += cantidad;
           cout << "Deposito realizado con exito" << endl;
    }else{
        cout << "No se puede realizar el deposito" << endl;
    }
}


void retirar(float &saldo, int cantidad){
    if(cantidad % 5 !=0){
        cout << "La cantidad a retirar debe ser multiplo de 5" << endl;
    }else if(cantidad > saldo){
        cout << "No se puede realizar el retiro saldo insuficiente" << endl;
    }else if(cantidad <= 0){
        cout << "La cantidad a retirar debe ser mayor a 0" << endl;
}else{
        saldo -= cantidad;
        cout << "Retiro realizado con exito" << endl;
    }
}


int main(){
    float saldo = 100, saldo_ref=saldo, *saldo_ptr ; 
    int opcion;

do
{
    cout << "Ingrese la opcion que quiere realizar" << endl;
    cout << "1. Consultar saldo" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        Consultarsaldo(saldo, saldo_ref, saldo_ptr);
        break;
    case 2:
        float cantidadDeposito;
        cout << "Ingrese la cantidad a depositar: ";
        cin >> cantidadDeposito;
        depositar(&saldo, cantidadDeposito);
        break;
    case 3:
        int cantidadRetiro;
        cout << "Ingrese la cantidad a retirar: ";
        cin >> cantidadRetiro;
        retirar(saldo, cantidadRetiro);
        break;
    case 4:
        cout << "Saliendo del cajero..." << endl;
        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
    }
} while (opcion != 4);

    

    return 0;
}