partie1: main1
	./main1
	
main1: main1.c
	gcc -Wall -o main1 main1.c
	
clean:
	rm -rf main1
	ls -l
