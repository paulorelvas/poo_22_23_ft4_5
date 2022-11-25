#include "AmigoDiscriminator.h"

// Identifica um Amigo. O predicado é unário e o parametro é o amigo
// por isso a palavra a encontrar no nome tem que ser armazenado no callable object

AmigoDiscriminator::AmigoDiscriminator(string pal) : palavra(pal) {}

bool AmigoDiscriminator::operator()(const Amigo &a) {
    return a.getNome().find(palavra) != string::npos;
}

