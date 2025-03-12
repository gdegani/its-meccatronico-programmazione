#include <stdio.h>

// Definizione della struct
struct Studente {
    char nome[50];
    int eta;
    float voto;
};

// Funzione che prende una struct come argomento
void stampaStudente(struct Studente s) {
    printf("Nome: %s\n", s.nome);
    printf("Età: %d\n", s.eta);
    printf("Voto: %.2f\n", s.voto);
}

int main() {
    // Dichiarazione e inizializzazione di una struct
    struct Studente studente1 = {"Marco Rossi", 20, 28.5};

    // Chiamata alla funzione con la struct come argomento
    stampaStudente(studente1);

    return 0;
}
