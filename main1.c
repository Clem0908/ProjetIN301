#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include <unistd.h>
#include "sequence.h"
#include "distance.h"

int main(int argc, char **argv){
	
	SEQUENCE *s1;
	s1 = init_sequence();
	s1 = lire_depuis_fichier(argv[1]);
		
	exit(0);
}
