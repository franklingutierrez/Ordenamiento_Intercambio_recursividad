#include<iostream>
#include<conio.h>
using namespace std;
int intercambio(int numeros[], int puntero, int tamanio);
int buscarMinimoValor(int numeros[], int punteroMinValor, int punteroIni, int punteroFin);
int main(){
// SELECCION RECURSIVO
int numeros[] = {4,3,1,5,2};
intercambio(numeros,0,4);
}
int intercambio(int numeros[], int puntero, int tamanio){
// Solo Visualizacion
for(int x=0;x<=tamanio;x++){
cout<<numeros[x]<<" ";
}
cout<<endl;
///////////////////////////////
int aux;
//CASO PARADA
if(puntero == tamanio){
return 0;
}
//CASO GENERAL
int punteroMinVal = buscarMinimoValor(numeros,puntero+1,puntero+1,tamanio);
cout<<"pi:"<<puntero+1<<" --- pf:"<<tamanio<<" --- pmv:"<<punteroMinVal<<endl<<endl;
if(numeros[puntero]>numeros[punteroMinVal]){
aux = numeros[puntero];
numeros[puntero] = numeros[punteroMinVal];
numeros[punteroMinVal] = aux;
}
puntero++;
intercambio(numeros,puntero,tamanio);
}
int buscarMinimoValor(int numeros[], int punteroMinValor, int punteroIni, int punteroFin){
if(punteroIni > punteroFin){
return punteroMinValor;
}
if(numeros[punteroIni]<numeros[punteroMinValor]){
punteroMinValor = punteroIni;
}
punteroIni++;
buscarMinimoValor(numeros,punteroMinValor,punteroIni,punteroFin);
}