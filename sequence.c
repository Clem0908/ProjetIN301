#include "sequence.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

SEQUENCE *lire_depuis_fichier(SEQUENCE *s){
	
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
		}
		
	FILE *f1 = NULL;	
	f1 = fopen("seq01.txt","r");
	
	int count = 0;
	
		while(feof(f1) != 0){ //Compte la longueur de la chaîne
			
			count++;
		}
		
	char str1[count];
	
		if(f1 == NULL){
			
			printf("Erreur lors de l'ouverture du fichier \n");
		}
						
	fscanf(f1,"%s",str1);
	printf("%s \n",str1);	
	fclose(f1);
	
	return s;
}
