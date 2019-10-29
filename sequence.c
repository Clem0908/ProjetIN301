#include "sequence.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

SEQUENCE *lire_depuis_fichier(char *nom_fic){
	
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
			
			return 0;
		}
		
	FILE *f1 = NULL;	
	f1 = fopen(nom_fic,"r");
		
		if(f1 == NULL){
			
			printf("Erreur lors de l'ouverture du fichier \n");
			
			return 0;
		}	
		
	int count = 0;
	
		while(feof(f1) != 0){ //Compte la longueur de la chaîne
			
			count++;
		}					
	
	SEQUENCE *s = malloc(sizeof(SEQUENCE *));
	s->n = count;
	s->c = malloc(count * sizeof(char));	
	fscanf(f1,"%s",s->c[0]);
	fclose(f1);
	
	return s;
}

SEQUENCE *init_sequence(){
	
	SEQUENCE *s = NULL; //Initialisation du pointeur de la séquence à NULL
	
	return s;
}

float calcul_distance(SEQUENCE *s1, SEQUENCE *s2){

		if(strlen(s1->c) != strlen(s2->c)) return 0;
	
	int i = 0;
	int j = 0;
	int dist = 0;
	
		while(s1->c[i][j] != '\0'){
			
			if(s1->c[i][j] != s2->c[i][j]){
				
				if(((s1->c[i][j] == 'A') && (s2->c[i][j] == 'G')) ||((s1->c[i][j] == 'G') && (s2->c[i][j] == 'A'))){
					
					dist += 1;
				}
				
				if(((s1->c[i][j] == 'C') && (s2->c[i][j] == 'T')) ||((s1->c[i][j] == 'T') && (s2->c[i][j] == 'C'))){
					
					dist += 1;
				}
				
				if(((s1->c[i][j] == 'A') && (s2->c[i][j] == 'C')) ||((s1->c[i][j] == 'C') && (s2->c[i][j] == 'A'))){
					
					dist += 2;
				}
				
				if(((s1->c[i][j] == 'A') && (s2->c[i][j] == 'T')) ||((s1->c[i][j] == 'T') && (s2->c[i][j] == 'A'))){
					
					dist += 2;
				}
				
				if(((s1->c[i][j] == 'C') && (s2->c[i][j] == 'G')) ||((s1->c[i][j] == 'G') && (s2->c[i][j] == 'C'))){
					
					dist += 2;
				}
				
				if(((s1->c[i][j] == 'G') && (s2->c[i][j] == 'T')) ||((s1->c[i][j] == 'T') && (s2->c[i][j] == 'G'))){
					
					dist += 2;
				}
			}
			
			dist+=0;
			j++;
		}
		
	return dist;
}
