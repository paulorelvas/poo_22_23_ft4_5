#include <iostream>
#include <sstream>
#include "Amigo.h"

using namespace std;

#ifndef FT4_5_V1_AMIGOCOMPARATOR_H
#define FT4_5_V1_AMIGOCOMPARATOR_H

// Compara dois amigos. Predicado binário. Os parametros são so dois amigos
// O callable objet não precisa de armazenar nada - os parametros tem tudo o que é preciso
class AmigoComparator {
public:
    bool operator()(const Amigo &a, const Amigo & b);
};



#endif //FT4_5_V1_AMIGOCOMPARATOR_H
