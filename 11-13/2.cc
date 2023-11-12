
#include <stdio.h>
#include <string.h>

struct Persona {
    char nome[50];
    Persona* madre;
    Persona* padre;
};

Persona* cercaPersona(Persona* radice, const char* nome) {
    if (radice == NULL) {
        return NULL;  // L'albero è vuoto o la persona non è stata trovata.
    }

    if (strcmp(radice->nome, nome) == 0) {
        return radice;  // La persona è stata trovata.
    }

    // Ricerca ricorsiva nei sottoalberi (genitori).
    Persona* personaTrovata = cercaPersona(radice->madre, nome);
    if (personaTrovata == NULL) {
        personaTrovata = cercaPersona(radice->padre, nome);
    }

    return personaTrovata;
}

int main() {
    Persona nonna = {"Maria", NULL, NULL};
    Persona nonno = {"Luigi", NULL, NULL};

    Persona madre = {"Anna", &nonna, &nonno};
    Persona padre = {"Mario", NULL, NULL};

    Persona figlia = {"Giulia", &madre, &padre};

    const char* nomeCercato = "Lurfrfigi";
    Persona* personaTrovata = cercaPersona(&figlia, nomeCercato);

    if (personaTrovata != NULL) {
        printf("Persona trovata: %s\n", personaTrovata->nome);
    } else {
        printf("Persona non trovata: %s\n", nomeCercato);
    }

    return 0;
}
