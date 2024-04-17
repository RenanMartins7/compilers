#Makefile para a cadeira de compiladores
#Dupla: Renan Martins Alves / Marcel Ramos do Carmo


etapa3: main.o parser.tab.o lex.yy.o
	gcc main.o lex.yy.o parser.tab.o -o etapa3
parser.tab.o: parser.tab.c
	gcc -c parser.tab.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

parser.tab.c: parser.y
	bison -d parser.y
lex.yy.c: scanner.l
	lex scanner.l
	
clean:
	rm lex.yy.c parser.tab.c *.o etapa3
