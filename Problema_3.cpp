#include<iostream>
#include<string>
using namespace std;

bool comparar_cadenas(string cadena1,string cadena2){
    //funcion para comparar 2 cadenas de texto para ver si son iguales
    int contador=0;

    if(cadena1.size()==cadena2.size()){

        for(int i=0;i<cadena1.size();i++){
            if(cadena1[i]==cadena2[i]){
               contador+=1;
            }
            }
        if(contador==cadena1.size()){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}



int ejercicio3(){
    string cadena1;
    string cadena2;

    cout<<"Ingrese una cadena: ";
    cin>>cadena1;

    cout<<"Ingrese otra cadena: ";
    cin>>cadena2;

    if(cadena1.size()!=cadena2.size()){
        cout<<"Las cadenas no tienen la misma longitud"<<endl;
    }
    else{
        bool iguales=comparar_cadenas(cadena1,cadena2);


    if(iguales==true){
        cout<<"Las cadenas son iguales"<<endl;
    }
    else{
        cout<<"Las cadenas son distintas"<<endl;
    }
    }
    return 0;
}
