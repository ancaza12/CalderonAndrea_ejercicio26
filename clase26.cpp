#include <iostream>

void relleno(int num,float **lista);
void imprimeLista(int num,float **lista);
void multiplica(int num,float **lista);
//Pido el numero al usuario para crear la lista de espacios.
int main(){
    int num;
    std::cout << "Ingrese un número del 1 al 5"<< std::endl;
    std::cin >> num;
    
    if(num>=1 && num<=5){
        float ** lista = new float *[num];
        }
    relleno(num,lista);
    imprimeLista(num,lista);    
    else{
        std::cout << "No es un número del 1 al 5"<< std::endl;
    }
    return 0;
}

///Codigo del factorial tomado de:https://devcode.la/tutoriales/factorial-en-c++/
void relleno(int num,float **lista){
  int fac = 1;
  int fact=1;
  for(int i=0; i<num; i++){ 
                if(num<0) fact =0;
                else if(num==0) fact=1;
                else{
                   for(int i=0; i<num; i++){
                      fac = i*fact;
                   }
                     
                }
    cout << lista[i] << endl;
    }
    
}




// Para el segundo ejercicio 
float * read_file(string filename, int *n_points);
float add_values(float *x, int n_points);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
  cout << add_values(x, n_x) << " " << add_values(y, n_y) << endl;
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;