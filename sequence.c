#include "sequence.h"
#include <stdio.h>
#include <unistd.h>

SEQUENCE *lire_depuis_fichier(SEQUENCE *s){
	
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
		}
		
	FILE *f1 = NULL;	
	f1 = fopen("seq01.txt","r");
	
		if(f1 == NULL){
			
			printf("Erreur lors de l'ouverture du fichier \n");
		}
	
	fclose(f1);
	
	return s;
}
