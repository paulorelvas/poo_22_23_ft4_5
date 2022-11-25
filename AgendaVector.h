#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>

#include "Amigo.h"
#include "AmigoComparator.h"
#include "AmigoDiscriminator.h"

using namespace std;

#ifndef FT4_5_V1_AGENDAVECTOR_H
#define FT4_5_V1_AGENDAVECTOR_H


class AgendaVector {
private:
    vector<Amigo> amigos;
public:
    void adiciona(string nome, int tel);
    int procura(const string & nome);
    void elimina(string nome) ;
    void eliminaOsQueTem(string nome);
    string obtemLista();
    string obtemListaDestes(int min, int max) ;
    void ordena();
};

#endif //FT4_5_V1_AGENDAVECTOR_H
