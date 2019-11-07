#ifndef DEF_SEQUENCE
#define DEF_SEQUENCE

typedef struct sequence{
	
	int n;		//Longueur de la séquence
	char *c; 	//Caractère de la séquence

} SEQUENCE;

int compter_longueur_sequence(char *argv);

SEQUENCE *lire_depuis_fichier(char *argv);

SEQUENCE *init_sequence();

float calcul_distance(SEQUENCE *s1, SEQUENCE *s2);
#endif
