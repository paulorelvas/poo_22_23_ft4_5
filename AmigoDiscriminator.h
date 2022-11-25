#include <iostream>
#include <sstream>
#include "Amigo.h"

using namespace std;

#ifndef FT4_5_V1_AMIGODISCRIMINATOR_H
#define FT4_5_V1_AMIGODISCRIMINATOR_H

// Identifica um Amigo. O predicado é unário e o parametro é o amigo
// por isso a palavra a encontrar no nome tem que ser armazenado no callable object
class AmigoDiscriminator {
    string palavra; // palavra a usar como critério de identificação
public:
    AmigoDiscriminator(string pal);
    bool operator()(const Amigo &a);
};

#endif //FT4_5_V1_AMIGODISCRIMINATOR_H
