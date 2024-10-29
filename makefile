Task1:  Task1.c
	gcc -o Task1 Task1.c
Task2:  Task2.c
	gcc -o Task2 Task2.c
Task3: Task3.c
	gcc -o Task3 Task3.c
Task4: Task4.c
	gcc -o Task4 Task4.c
all: Task1 Task2 Task3 Task4
clean:
	rm -f Task1 Task2 Task3 Task4 

