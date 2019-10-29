#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include "sequence.c"
#include "distance.c"


int main(){
	
	SEQUENCE *s = init_sequence();
	
	char nom_fic[10];
	printf("Nom du fichier à ouvrir : \n");
	scanf("%s",nom_fic);
	s = lire_depuis_fichier(nom_fic);
	
	exit(0);
}
