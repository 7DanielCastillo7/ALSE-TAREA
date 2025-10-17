#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ganancia=0;
        for (int i=0; i<prices.size(); i++){
            for (int j=i+1; j<prices.size(); j++){
                if (prices[j] - prices[i]> ganancia){  
                    ganancia= prices[j]-prices[i];
                }
            }
        }
    return ganancia;    
    }
};
  
int main(){
    int dias;
    cout<< "¿cuantos dias de precios hay? ";
    cin >> dias; 
    vector<int> prices(dias);
    for (int i=0; i<dias; i++){
        cout << "Precio dia " << i+1 << ": ";
        cin >> prices[i]; 
    }
    Solution acciones;
    int ganancia = acciones.maxProfit(prices);  
    cout << "La ganancia maxima es: " << ganancia << endl;
  
    return 0;
}