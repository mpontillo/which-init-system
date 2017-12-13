which-init-system: which-init-system.o
	gcc -o which-init-system which-init-system.o -Wall
	sudo chown root:root which-init-system
	sudo chmod u+s which-init-system

which-init-system.o: which-init-system.c
	gcc -o which-init-system.o -c which-init-system.c -Wall

clean:
	rm -f which-init-system which-init-system.o
