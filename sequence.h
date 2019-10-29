typedef struct sequence{
	
	int n;		//Longueur de la séquence
	char *c; 	//Chaîne de caractères de la séquence

} SEQUENCE;

SEQUENCE *lire_depuis_fichier(SEQUENCE *s);
