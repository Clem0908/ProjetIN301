partie1: main1
	./main1
	
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
