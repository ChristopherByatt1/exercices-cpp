#include <iostream>

int main ()
{
  int entier1;  // déclarations
  int entier2;

  std::cout << "Entrer un premier entier\n"; // affichage
  std::cin >> entier1;                       // lire un entier
  std::cout << "Entrer un second entier\n";  // affichage
  std::cin >> entier2;                       // lire un entier
  int somme = entier1 + entier2;                // assignation de somme
  std::cout << "la Somme est " << somme << std::endl; // afficher somme

  return 0;   // indique que le programme se termine sans problème
}

