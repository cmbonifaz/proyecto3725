#include<iostream>
using namespace std;
int validaNumero(){
//procesode validacion
int numero;
do{
    cout<<"ingrese numero: ";
    cin>>numero;

}while(numero<1 || numero>10);
return numero;
}
void saludoProgramador(string nombre){
 cout<<"Bienvenidos a mi proyecto git"<<endl;
 cout<<"Define si no eres un robot contestando la pregunta siguiente";
 cout<<"Como se llama tu mascota";
 cout<<"Buenas tardes"<<nombre;
}

main(){
    int n= validaNumero();
    saludoProgramador("juan");
    cout<<"El vaolor ingreado es "<<n<<endl;
    string nombre;
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    saludoProgramador(nombre);
}


