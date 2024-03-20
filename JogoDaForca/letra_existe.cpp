#include <string>
#include "letra_existe.hpp"


bool letra_existe(char chute, std::string& palavra_secreta) {
    // for(int i = 0; i < PALAVRA_SECRETA.size(); i++) {
    //     if(chute == PALAVRA_SECRETA[i]) {
    //         return true;
    //     }
    // }
    for(char letra : palavra_secreta) {
        if(chute == letra) {
            return true;
        }
    } 
    // esse for é uma implementaçãoo nova do C++11 que faz o mesmo do for comentado acima
    // mas de uma forma mais simplificada
    return false;
}