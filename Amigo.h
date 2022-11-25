#include <iostream>
#include <sstream>

using namespace std;

#ifndef FT4_5_V1_AMIGO_H
#define FT4_5_V1_AMIGO_H

class Amigo {
private:
    string nome;
    int tel;
public:
    Amigo(string nome, int tel);
    string getNome() const noexcept;
    int getTel() const noexcept;
    string getDesc() const noexcept;

    // necessário para o find e erase no vector
    bool operator==(const Amigo & a) const noexcept;

    // necessário para o insert no set
    bool operator<(const Amigo & a) const noexcept;
};

#endif //FT4_5_V1_AMIGO_H
