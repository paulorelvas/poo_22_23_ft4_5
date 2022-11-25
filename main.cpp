#include <iostream>
#include "AgendaVector.h"

using namespace std;

int main() {
    cout << " ------ FT4_5_v1 :: ------ " << std::endl;

    AgendaVector minhaAgenda;

    minhaAgenda.adiciona("Ana", 123);
    minhaAgenda.adiciona("Rita", 321);
    minhaAgenda.adiciona("Joana", 222);
    minhaAgenda.adiciona("Manuel", 333);
    minhaAgenda.adiciona("António", 444);
    minhaAgenda.adiciona("Ana", 555); // o que aconteceu a este amigo?
    minhaAgenda.adiciona("Silva", 444); // e a este que tem o telef igual ao amigo António?

    cout << "---- lista amigos ----" << endl;
    cout << minhaAgenda.obtemLista();

    cout << "---- obtem lista de amigos por telef (intervalo min max)----" << endl;
    cout << minhaAgenda.obtemListaDestes(222,333);

    cout << "---- elimina amigos por nome ----" << endl;
    minhaAgenda.elimina("Rita");
    cout << minhaAgenda.obtemLista();

    cout << "---- elimina amigos que tem <str> ----" << endl;
    minhaAgenda.eliminaOsQueTem("il");
    cout << minhaAgenda.obtemLista();

    cout << "---- ordena amigos ----" << endl;
    minhaAgenda.ordena();
    cout << minhaAgenda.obtemLista();

    cout << "---- procura telefone do amigo pelo nome ----" << endl;
    cout << "Telefone da Ana: " << minhaAgenda.procura("Ana");

    return 0;
}
