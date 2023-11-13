#include <iostream>
#include <cstring>

struct Persona {
  char nome[50];
  char madre[50];
  char padre[50];
};


int main() {
  Persona Persone[10] = {
    {"Giulia", "Anna", "Mario"},
    {"Anna", "Maria", "Luigi"},
    {"Mario", "", ""},
    {"Maria", "", ""},
    {"Luigi", "", ""},
    {"Giorgio", "Anna", "Mario"},
    {"Gianni", "Anna", "Mario"},
    {"Giorgio", "Anna", "Mario"},
    {"Giorgio", "Anna", "Mario"},
    {"Giorgio", "Anna", "Mario"},
  };

  const char* nomeCercato = "Lurfrfigi";

  return 0;
}
