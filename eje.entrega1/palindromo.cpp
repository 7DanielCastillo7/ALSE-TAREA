#include<iostream>
#include<string>
#include<algorithm> 
class Solution {
public:
    bool isPalindrome(int x) {
        std::string o = std::to_string(x); 
        std::string c = o;
        std::reverse(c.begin(), c.end());
        if (o == c){
            return true;  
        }
        else{
            return false;   
        }
        
    }
};

int main(){ 
    int x;
    std::cout<<"Ingrese un numero de tipo entero ";
    std::cin>>x;
    Solution solucion;
    bool resultado = solucion.isPalindrome(x);
    if (resultado) {
        std::cout<<"Verdadero"<<std::endl;
        std::cout<<x<<" se lee como "<<x<<" de izquierda a derecha y de derecha a izquierda"<<std::endl;
    }
    else{
        std::string o = std::to_string(x); 
        std::string c = o;
        std::reverse(c.begin(), c.end());
        std::cout<<"Falso"<<std::endl;
        std::cout<<"De izquierda a derecha, se lee como "<<o<<". De derecha a izquierda, se convierte en "<<c<<". Por lo tanto, no es un palindromo."<<std::endl;
    }   
    return 0;
    
}    