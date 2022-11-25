#include "AmigoComparator.h"

// Compara dois amigos. Predicado binário. Os parametros são so dois amigos
// O callable objet não precisa de armazenar nada - os parametros tem tudo o que é preciso
bool AmigoComparator::operator()(const Amigo &a, const Amigo & b) {
    return a.getNome() < b.getNome();
}