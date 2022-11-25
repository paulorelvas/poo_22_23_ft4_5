#include "Amigo.h"

Amigo::Amigo(string nome, int tel): nome(nome), tel(tel) {}

string Amigo::getNome() const noexcept { return nome; }

int Amigo::getTel() const noexcept { return tel; }

string Amigo::getDesc() const noexcept {
    ostringstream oss;
    oss << nome << " - " << tel;
    return oss.str();
}
// necessário para o find e erase no vector
bool Amigo::operator==(const Amigo & a) const noexcept {
    return nome == a.nome;
}

// necessário para o insert no set
bool Amigo::operator<(const Amigo & a) const noexcept {
    return nome < a.nome;
}
