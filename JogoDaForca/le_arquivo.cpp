#include <iostream>
#include <fstream>
#include "le_arquivo.hpp"


std :: vector<std :: string> le_arquivo() {
    std :: ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()) {
        int quantidade_palavras;
        arquivo >> quantidade_palavras; // a variavel arquivo recebe >> a quantidade de palavras do arquivo


        std :: vector<std :: string> palavras_do_arquivo;

        for(int i = 0; i < quantidade_palavras; i++) {
            std :: string palavra_lida; // declarando variavel para receber as palavras do arquivo, como tipo string
            arquivo >> palavra_lida; // arquivo recebe cada palavra lida do arquivo
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }
    else {
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
}