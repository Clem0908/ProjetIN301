#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include <unistd.h>
#include "sequence.h"
#include "distance.h"

int main(int argc, char **argv){
	
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
			
			return 0;
		}
	
	SEQUENCE *s1;
	s1 = init_sequence();
	s1 = lire_depuis_fichier(argv[1]);
		
		if(s1 == NULL){ printf("Problème main1.c \n"); return 0;}
	ret = chdir("ProjetIN301");
	
		if(ret == -1){				 
			
			printf("Erreur lors du changement de dossier \n");
			
			return 0;
		}
		
	exit(0);
}
