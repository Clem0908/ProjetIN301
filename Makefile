partie1: main1 
	./main1 seq01.txt seq02.txt seq03.txt seq04.txt seq05.txt seq06.txt seq07.txt seq08.txt seq09.txt seq10.txt seq11.txt seq12.txt seq13.txt seq14.txt seq15.txt seq16.txt seq17.txt seq18.txt seq19.txt seq20.txt
	
main1: main1.c sequence  distance
	gcc -Wall -o main1 main1.c

sequence: sequence.h sequence.c
	gcc -c sequence.h sequence.c

distance: distance.h distance.c
	gcc -c distance.h distance.c

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf main1
	ls 
