#include <iostream>
using namespace std;
#include <vector>
class Solution {
public: 
    vector<vector<int>> generate(int numRows) {  
        vector<vector<int>> resultado;
        for (int i=0; i<numRows; i++){ 
            vector<int> filas;
            for (int j=0; j<=i; j++){
                if (j==0 || j==i){
                    filas.push_back(1);
                }
                else {
                    int suma= resultado[i-1][j-1]+resultado[i-1][j];
                    filas.push_back(suma);  
                }
            }    
            resultado.push_back(filas);
         }       
        return resultado;
    }
    
};
int main(){
    int numRows;
    cout << "Ingrese el numero de filas que desea ver del triangulo de pascal: ";
    cin >> numRows;
    Solution triangulo; 
    vector<vector<int>> resultado= triangulo.generate(numRows);
    for (int i=0; i<resultado.size(); i++){
        for (int j=0; j<resultado[i].size(); j++){
            cout << resultado[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}