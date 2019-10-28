typedef struct sequence{
	
	int n;		//Longueur de la séquence
	char c; 	//Caractère de la séquence
	char *suiv; //Pointeur vers le cararctère suivant de la séquence

} SEQUENCE;

SEQUENCE *lire_depuis_fichier(SEQUENCE *s);
