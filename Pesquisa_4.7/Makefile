CC = gcc
CFLAGS = -Wall -g

PROG = programa

FONTES = main.c operacoes.c
OBJETOS = $(FONTES:.c=.o)

$(PROG): $(OBJETOS)
	$(CC) $(CFLAGS) $(OBJETOS) -o $(PROG)

main.o: main.c operacoes.h
operacoes.o: operacoes.c operacoes.h

clean:
	rm -f *.o $(PROG)