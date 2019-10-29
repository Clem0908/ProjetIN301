typedef struct sequence{
	
	int n;		//Longueur de la séquence
	char **c; 	//Chaîne de caractères de la séquence

} SEQUENCE;

SEQUENCE *lire_depuis_fichier(char *nom_fic);

SEQUENCE *init_sequence();

float calcul_distance(SEQUENCE *s1, SEQUENCE *s2);
