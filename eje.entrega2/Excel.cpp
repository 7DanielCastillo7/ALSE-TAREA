#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int titleToNumber(string columna) {
        int resultado= 0;
        for (char c : columna) {
            resultado = resultado * 26 + (c - 'A' + 1);
        }
        return resultado;
    }
    
};

int main(){
  cout<<" Ingrese el titulo de la columna: ";
  string columna;
  cin >> columna; 
  Solution Excel; 
  int resultado = Excel.titleToNumber(columna);  
  cout <<"El numero de la columna es: "<< resultado << endl;
  return 0;
} 