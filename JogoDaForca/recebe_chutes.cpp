#include <iostream>
#include "letra_existe.hpp"
#include "recebe_chutes.hpp"

void recebe_chute(std::map<char, bool>& chutou, std::vector<char>& chutes_errados, std::string& palavra_secreta) {
    
    std :: cout << "Seu chute: " << std :: endl;
    char chute;
    std :: cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute, palavra_secreta)) {
            std :: cout << "Você acertou! Seu chute estava na palavra. " << std :: endl;
        }
        else {
            std :: cout << "Você errou! Seu chute não estiver na palavra. " << std :: endl;
            chutes_errados.push_back(chute);
        }
        std :: cout << std :: endl;

}