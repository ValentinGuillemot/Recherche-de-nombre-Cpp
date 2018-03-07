#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	int cible;
	default_random_engine choix(time(0));
	uniform_int_distribution<int> aleatoire(0, 100);
	cible = aleatoire(choix);
	int x = 101;
	while (x != cible)
	{
		cout << "Choisir un nombre entre 0 et 100 : ";
		cin >> x;
		if (x < cible) {
			cout << "C'est plus !\n\n";
		}
		else if (x > cible) {
			cout << "C'est moins !\n\n";
		}
	}
	cout << "\nVous avez trouve le bon nombre, bravo !\n\n\n";

	system("PAUSE");
	return 0;
}