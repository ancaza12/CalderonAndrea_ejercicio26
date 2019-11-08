#include <iostream>

void relleno(int num,float *lista);
//Pido el numero al usuario para crear la lista de espacios.
int main(){
    int num;
    std::cout << "Ingrese un número del 1 al 10"<<std::endl;
    std::cin >> num;
    
    if(num>=1 && num<=10){
        float *lista = new float[num];
    relleno(num, lista);
    delete []lista; 
    }
    else{
        std::cout << "No es un número del 1 al 10"<< std::endl;
    }
    return 0;
}

///Codigo del factorial tomado de:https://devcode.la/tutoriales/factorial-en-c++/

//Realizo un recorrido para realizar el factorial de cada posicion de la lista del tamaño que el usuario indicó
void relleno(int num,float *lista){
  int fact=0;

  for(int i=0; i<num; i++){
    int fac = 1; 
    if(i==0){
      fact=1;
      lista[i]= 1;
    }
    else if(i>=1 && i<=10){
        fac = fact*i;
        fact= fac;
        lista[i]= fact;
      }
    std::cout << lista[i] << std::endl;   
  } 
}




