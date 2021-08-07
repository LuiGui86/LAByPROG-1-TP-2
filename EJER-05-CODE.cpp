///Ejercicio:N° 5
///Autor:LGR
///Fecha:07/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

float IV, IAP;

cout<<"Ingresar el importe de venta: "<<endl;
cin>>IV;

if (IV<100){
    IAP=IV*0.95;
    cout<<"Total a pagar: "<<IAP;
}
else if (IV>=100 && IV<=500){
    IAP=IV *0.90;
    cout<<"Total a pagar: "<<IAP;
} else{
    IAP=IV*0.85;
    cout<<"Total a pagar: "<<IAP;
}
cout<<endl;
system ("pause");
return 0;
}
