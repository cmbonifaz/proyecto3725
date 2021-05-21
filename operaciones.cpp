#include<iostream>
using namespace std;
int validaNumero(){
//procesode validacion
int numero;
do{
    count<<"ingrese numero: ";
    cin>>numero;

}while(numero<1 || numero>10);
return numero;
}


main(){
    int n= validaNumero();
}


