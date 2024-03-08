#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void imprimir(int ca,int cb,int cc,int cd,int ce,int cf,int cg,int ch,int ci,int cj,int ck,int cl,int cm,int cn,int co,int cp,int cq,int cr,int cs,int ct,int cu,int cv,int cw,int cx,int cy,int cz){
    //funcion para imprimir las veces que se repite cada letra
    cout<<"a: "<<ca<<endl;
    cout<<"b: "<<cb<<endl;
    cout<<"c: "<<cc<<endl;
    cout<<"d: "<<cd<<endl;
    cout<<"e: "<<ce<<endl;
    cout<<"f: "<<cf<<endl;
    cout<<"g: "<<cg<<endl;
    cout<<"h: "<<ch<<endl;
    cout<<"i: "<<ci<<endl;
    cout<<"j: "<<cj<<endl;
    cout<<"k: "<<ck<<endl;
    cout<<"l: "<<cl<<endl;
    cout<<"m: "<<cm<<endl;
    cout<<"n: "<<cn<<endl;
    cout<<"o: "<<co<<endl;
    cout<<"p: "<<cp<<endl;
    cout<<"q: "<<cq<<endl;
    cout<<"r: "<<cr<<endl;
    cout<<"s: "<<cs<<endl;
    cout<<"t: "<<ct<<endl;
    cout<<"u: "<<cu<<endl;
    cout<<"v: "<<cv<<endl;
    cout<<"w: "<<cw<<endl;
    cout<<"x: "<<cx<<endl;
    cout<<"y: "<<cy<<endl;
    cout<<"z: "<<cz<<endl;
}

int ejercicio2(){
    srand(time(NULL));
    int num=0;
    int numero=200;
    char letras[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char array[200]={};
    int ca=0,cb=0,cc=0,cd=0,ce=0,cf=0,cg=0,ch=0,ci=0,cj=0,ck=0,cl=0,cm=0;
    int cn=0,co=0,cp=0,cq=0,cr=0,cs=0,ct=0,cu=0,cv=0,cw=0,cx=0,cy=0,cz=0;

    for(int i=0;i<numero;i++){
        num = rand()%26;
        array[i]+=letras[num];
    }

    for(int j=0;j<numero;j++){
        cout<<array[j]<<", ";
        if(array[j]=='A'){
            ca+=1;
        }
        if(array[j]=='B'){
            cb+=1;
        }
        if(array[j]=='C'){
            cc+=1;
        }
        if(array[j]=='D'){
            cd+=1;
        }
        if(array[j]=='E'){
            ce+=1;
        }
        if(array[j]=='F'){
            cf+=1;
        }
        if(array[j]=='G'){
            cg+=1;
        }
        if(array[j]=='H'){
            ch+=1;
        }
        if(array[j]=='I'){
            ci+=1;
        }
        if(array[j]=='J'){
            cj+=1;
        }
        if(array[j]=='K'){
            ck+=1;
        }
        if(array[j]=='L'){
            cl+=1;
        }
        if(array[j]=='M'){
            cm+=1;
        }
        if(array[j]=='N'){
            cn+=1;
        }
        if(array[j]=='O'){
            co+=1;
        }
        if(array[j]=='P'){
            cp+=1;
        }
        if(array[j]=='Q'){
            cq+=1;
        }
        if(array[j]=='R'){
            cr+=1;
        }
        if(array[j]=='S'){
            cs+=1;
        }
        if(array[j]=='T'){
            ct+=1;
        }
        if(array[j]=='U'){
            cu+=1;
        }
        if(array[j]=='V'){
            cv+=1;
        }
        if(array[j]=='W'){
            cw+=1;
        }
        if(array[j]=='X'){
            cx+=1;
        }
        if(array[j]=='Y'){
            cy+=1;
        }
        if(array[j]=='Z'){
            cz+=1;
        }
    }
    cout<<endl;
    cout<<endl;
    imprimir(ca,cb,cc,cd,ce,cf,cg,ch,ci,cj,ck,cl,cm,cn,co,cp,cq,cr,cs,ct,cu,cv,cw,cx,cy,cz);
    return 0;
}
