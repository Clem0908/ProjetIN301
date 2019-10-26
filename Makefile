run: exec
	./exec
	
exec: main.c
	gcc -Wall -o exec main.c
	
clean:
	rm -rf *.o
	ls -lt
