#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 
// Para el segundo ejercicio 
float * read_file(string filename, int *n_points);
void multiplica(float *x,float *y, int n_points);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  multiplica(x, y,n_x);
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;
    
  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}
       
void multiplica(float *x, float *y, int n_points){
  float a=0;
  for(int i=0;i<n_points;i++){
    a = x[i]*y[i];
    std::cout << a << std::endl;     
  }
}     