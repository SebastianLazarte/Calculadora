#include <iostream>

using namespace std;

float suma(float numero1,float numero2){
  return numero1+numero2;
}

float resta(float numero1,float numero2){
  return numero1-numero2;
}

float multiplicacion(float numero1,float numero2){
  return numero1*numero2;
}

float division(float numero1, float numero2){
  float respuesta;
  if ( numero2 != 0 ){
    respuesta = numero1 / numero2;
  }
  else {
    cout << "\nError No se puede dividir entre 0 \n" ;
  }
  return respuesta;
}

float pedirNumero1(){
  float numero1;
  cout<<"INGRESE EL PRIMER NUMERO"<<endl;
  cin>>numero1;
  return numero1;
}

float pedirNumero2(){
  float numero2;
  cout<<"INGRESE EL SEGUNDO NUMERO"<<endl;
  cin>>numero2;
  return numero2;
}

void calculadoraConMenu(){
 int opcion;
 float respuesta,numero1,numero2;

    do {
        cout << "\nCALCULADORA\n" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar"<< endl;
        cout << "3. Multiplicar"<< endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir\n" << endl;

        do {
            cout << "\nQue desea realizar: ";
            cin >> opcion;
        } while ( opcion < 1 || opcion > 5 );
        
        if( opcion != 5){
            numero1 = pedirNumero1();
            numero2 = pedirNumero2();
        }
        
        switch ( opcion ) {
            case 1:
                respuesta = suma(numero1,numero2);
                cout<<"LA SUMA ES: "<<respuesta<<endl;
              break;

            case 2:
                respuesta = resta(numero1,numero2);
                cout<<"LA RESTA ES: "<<respuesta<<endl;
              break;

            case 3:
                respuesta = multiplicacion(numero1,numero2);
                cout<<"LA MULTIPLICACION ES: "<<respuesta<<endl;
              break;

            case 4:
                respuesta = division(numero1,numero2);
                cout<<"LA DIVISION ES: "<<respuesta<<endl;
              break;
        }
    } while ( opcion != 5 );}

int main()
{
    calculadoraConMenu();
    return 0;
}