#include "AgendaVector.h"

void AgendaVector::adiciona(string nome, int tel) {
    Amigo tmp(nome,tel);
    auto it = find(amigos.begin(), amigos.end(), tmp);
    if (it==amigos.end())
        amigos.push_back(tmp);
}
int AgendaVector::procura(const string & nome) {
    vector<Amigo>::iterator it;
    Amigo tmp(nome,0);
    it = find(amigos.begin(), amigos.end(), tmp);
    if (it!=amigos.end())
        return it->getTel();

    return 0;
}
void AgendaVector::elimina(string nome) {
    Amigo tmp(nome,0);
    remove(amigos.begin(), amigos.end(), tmp);
}

void AgendaVector::eliminaOsQueTem(string nome) {
    remove_if(amigos.begin(), amigos.end(),AmigoDiscriminator(nome));
}

string AgendaVector::obtemLista() {
    string aux;
    for_each(amigos.begin(), amigos.end(), [&aux] (Amigo a) {aux += a.getNome() + "\n"; });
    //for (auto x : amigos)
    // aux += x.getDesc() += "\n";
    return aux;
}

string AgendaVector::obtemListaDestes(int min, int max) {
    string aux;
    for_each(amigos.begin(), amigos.end(), [&] (Amigo a) {
        if (a.getTel()>= min && a.getTel() <= max)
            aux += a.getNome() + "\n";
    });
    // para quem gosta de "fazer à mão"
    //for (auto a : amigos)
    //   if (a.getTel() >= min && a.getTel() >= max)
    //      aux += x.getDesc() += "\n";
    return aux;
}

void AgendaVector::ordena() {
    sort(amigos.begin(), amigos.end(), AmigoComparator());
}

