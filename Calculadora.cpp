#include <iostream>

using namespace std;

int calculadora(){

 int op;
    int a, b, r;
    do {
        cout << "\nCALCULADORA\n" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar"<< endl;
        cout << "3. Multiplicar"<< endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir\n" << endl;

        do {
            cout << "\nQue desea realizar: ";
            cin >> op;
        } while ( op < 1 || op > 5 );

        switch ( op ) {
            case 1:
              cout << "\n Introduzca el 1er valor: " ;
              cin >> a;
              cout << "\n Introduzca el 2do valor: " ;
              cin >> b;
              r = a + b ;

              cout <<"\n   " << a << " + " << b <<" = "<< r<<"\n";
              system("pause");
              system("cls");
              break;

            case 2:
              cout << "\n Introduzca el 1er valor: " ;
              cin >> a;
              cout << "\n Introduzca el 2do valor: " ;
              cin >> b;
              r = a - b;
              cout <<"\n   " << a << " - " << b <<" = "<< r<<"\n";
              system("pause");
              system("cls");
              break;

            case 3:
              cout << "\n Introduzca el 1er valor: " ;
              cin >> a;
              cout << "\n Introduzca el 2do valor: " ;
              cin >> b;
              r = a * b;
              cout <<"\n   " << a << " * " << b <<" = "<< r<<"\n";
              system("pause");
              system("cls");
              break;

            case 4:
              cout << "\n Introduzca el 1er valor: " ;
              cin >> a;
              cout << "\n Introduzca el 2do valor: " ;
              cin >> b;
              if ( b != 0 ){
                r = a / b;
                cout <<"\n" << a << " / " << b <<" = "<< r<<"\n";
                system("pause");
                system("cls");
              }
              else {
                cout << "\n   Error \n" ;
                system("pause");
                system("cls");
              }
        }
    } while ( op != '5' );}

int main()
{
    calculadora();
    return 0;
}
