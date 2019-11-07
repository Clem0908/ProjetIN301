#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include "sequence.c"
#include "distance.c"


int main(int argc, char **argv){
	
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
			
			return 0;
		}
	
	SEQUENCE *s = init_sequence();
	
	s = lire_depuis_fichier(argv[1]);
	
	exit(0);
}
