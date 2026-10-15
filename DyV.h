#ifndef DYV_H
#define DYV_H
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>

int busquedaBinaria(T x, vector<T>& v, int ini, int fin){

  if (ini > fin){
     return -1; //No se encuentra en el array
  }
  int medio = (ini + fin)/2;

  if(v[medio] == x){
     return medio;
  }
  else if(v[medio] > x){
         return busquedaBinaria(x, v, ini, medio -1);
  }
  else{
        return busquedaBinaria(x, v, medio +1, fin);
  }	
}
template <typename T>
void quicksort(vector<T>& v, int ini, int fin){
   if(ini<fin){
	   int pivot = partition(v, ini, fin);
	   quicksort(v, ini, pivot - 1);
	   quicksort(v, pivot + 1, fin);
   }
}
template <typename T>
int partition(vector<T>& v, int ini, int fin){
   T x = v[fin];
   int i = ini;
   for(int j = ini; j>fin; j++){
     if(v[j]<= x){
	     swap (v[i], v[fin]);
	     i++;
     }
   }  
 return i;
}

#endif
