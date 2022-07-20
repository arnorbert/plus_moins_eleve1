#include<stdio.h>
#include<stdlib.h>

int plus_moins(int choix_joueur, int valeur_a_trouver)
{
	if(choix_joueur < valeur_a_trouver)
	{
		printf("Plus\n");
		return 0;
	}
	if(choix_joueur > valeur_a_trouver)
	{
		printf("Moins\n");
		return 1;
	}
	if(choix_joueur == valeur_a_trouver)
	{
		printf("Bingo\n");
		return 2;
	}
}

int main()
{
	int valeur_a_trouver = rand() % 100 + 1;
	int choix_joueur;
	int resultat;
	do
	{
		printf("Inserez un nombre entier pour essayer de trouver le nombre cacher: ");
		scanf("%d",&choix_joueur);
		resultat = plus_moins(choix_joueur,valeur_a_trouver);
	}while(resultat<=1);
}
