#include "sequence.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int compter_longueur_sequence(char *argv){
	
	FILE *F = NULL;	
	F = fopen(argv,"r");
		
		if(F == NULL){
			
			printf("Erreur lors de l'ouverture du fichier (func compter_longueur_sequence) \n");
			
			return 0;
		}
		
	int count = 0;
	
		while(feof(F) != 0){ //Compte la longueur de la chaîne
			
				count++;
			}
			
	return count;
}

SEQUENCE *lire_depuis_fichier(char *argv){
		
	int ret = chdir("sequences_ADN"); //Change le dossier courant pour aller voir les fichiers séquences ADN
		
		if(ret == -1){				  //chdir() retourne -1 si échec et 0 si succès
			
			printf("Erreur lors du changement de dossier \n");
			
			return 0;
		}
	
	int count = compter_longueur_sequence(argv);
							
	SEQUENCE *s = init_sequence();
	s->n = count; s->c = malloc(count * sizeof(char));
		
		if(s->c == NULL){
			
			printf("Erreur allocation mémoire (func lire_depuis_fichier) \n");
			return 0;
		}
		
	FILE *F = NULL;	
	F = fopen(argv,"r");
		
	int ret_lecture_string = fscanf(F,"%s",s->c);
		
		if(ret_lecture_string != count){
			
			printf("Problème lecture fichier (func lire_depuis_fichier) \n"); 
			return 0;
		}
		
	printf("Séquence lue : %s \n",s->c);
	fclose(F);
	
	chdir("ProjetIN301");
	return s;
}

SEQUENCE *init_sequence(){
	
	SEQUENCE *s = NULL; //Initialisation du pointeur de la séquence à NULL
	s->n = 0; 			//Initialisation de la longueur de la séquence à 0
	
	return s;
}

/*float calcul_distance(SEQUENCE *s1, SEQUENCE *s2){

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
*/
