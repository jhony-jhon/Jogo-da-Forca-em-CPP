#include <vector>

//std :: vector<char> chutes_errados; guarda na variavel numa estrutura de vetor as letras que usuário for chutando errado

bool nao_enforcou(std::vector<char> chutes_errados) {
    return chutes_errados.size() < 5;
}