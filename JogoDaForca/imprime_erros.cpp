#include "imprime_erros.hpp"
#include <iostream>
//std :: vector<char> chutes_errados; guarda na variavel numa estrutura de vetor as letras que usuário for chutando errado


void imprime_erros(const std::vector<char>& chutes_errados) {
    
     std :: cout << "Chutes errados: ";
    
    for(char letra : chutes_errados) {
           std :: cout << letra << " ";
    }
       std :: cout << std :: endl;
}