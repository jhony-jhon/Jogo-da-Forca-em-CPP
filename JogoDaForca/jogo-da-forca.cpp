#include <iostream>
#include <locale.h>
#include <string>
#include <map>
#include <vector>
#include "nao_acertou.hpp"
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_erros.hpp" 
#include "verifica_letra.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"
#include "recebe_chutes.hpp"
using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static vector<char> chutes_errados; //guarda na variavel numa estrutura de vetor as letras que usu�rio for chutando errado


int main() {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();
    
    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {

        imprime_erros(chutes_errados);
        verifica_letra(palavra_secreta, chutou);
        recebe_chute(chutou, chutes_errados);
    
        
    }

    cout << "Fim de Jogo! " << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;

    if(nao_acertou(palavra_secreta, chutou)) {
        cout << "Voc� perdeu! Tente novamente! " << endl;
    }
    else {
        cout << "Parab�ns! Voc� acertou a palavra secreta! " << endl;

        cout << "Voc� deseja adicionar uma palavra nova ao banco? (S/N)" << endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S') {
            adiciona_palavra();
        }
    }
}