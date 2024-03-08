#include<iostream>
using namespace std;

int calcular_cantidad(int monto,int denominacion){
    //funcion para calcular cuantos billetes y monedas se necesitan, recibe el monto y la denominacion del billete o moneda
    int cantidad;
    cantidad=monto/denominacion;
    return cantidad;
}

int ejercicio1(){
    int monto;
    int billetes_50m,billetes_20m,billetes_10m,billetes_5m,billetes_2m,billetes_1m;
    int monedas_5s,monedas_2s,monedas_100,monedas_50;
    int billetes[6]={50000,20000,10000,5000,2000,1000};
    int monedas[4]={500,200,100,50};

    cout<<"Ingrese una cantidad: ";
    cin>>monto;

    if(monto==0){
        cout<<"No es necesario"<< endl;
    }

    for(int i=0;i<6;i++){
        if(billetes[i]==50000){
            billetes_50m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_50m*billetes[i];
            cout<<"50.000: "<<billetes_50m<<endl;
        }
        if(billetes[i]==20000){
            billetes_20m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_20m*billetes[i];
            cout<<"20.000: "<<billetes_20m<<endl;
        }
        if(billetes[i]==10000){
            billetes_10m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_10m*billetes[i];
            cout<<"10.000: "<<billetes_10m<<endl;
        }
        if(billetes[i]==5000){
            billetes_5m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_5m*billetes[i];
            cout<<"5.000: "<<billetes_5m<<endl;
        }
        if(billetes[i]==2000){
            billetes_2m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_2m*billetes[i];
            cout<<"2.000: "<<billetes_2m<<endl;
        }
        if(billetes[i]==1000){
            billetes_1m=calcular_cantidad(monto,billetes[i]);
            monto-=billetes_1m*billetes[i];
            cout<<"1.000: "<<billetes_1m<<endl;
        }
    }

    for(int j=0;j<4;j++){
        if(monedas[j]==500){
           monedas_5s=calcular_cantidad(monto,monedas[j]);
           monto-=monedas_5s*monedas[j];
           cout<<"500: "<<monedas_5s<<endl;
        }
        if(monedas[j]==200){
           monedas_2s=calcular_cantidad(monto,monedas[j]);
           monto-=monedas_2s*monedas[j];
           cout<<"200: "<<monedas_2s<<endl;
        }
        if(monedas[j]==100){
           monedas_100=calcular_cantidad(monto,monedas[j]);
           monto-=monedas_100*monedas[j];
           cout<<"100: "<<monedas_100<<endl;
        }
        if(monedas[j]==50){
           monedas_50=calcular_cantidad(monto,monedas[j]);
           monto-=monedas_50*monedas[j];
           cout<<"50: "<<monedas_50<<endl;
        }
    }
    cout<<"sobrante: "<<monto<<endl;
    return 0;
}
