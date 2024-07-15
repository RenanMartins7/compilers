#Makefile para a cadeira de compiladores
#Dupla: Renan Martins Alves / Marcel Ramos do Carmo


etapa3: main.o parser.tab.o lex.yy.o ast.o hash.o
	gcc main.o lex.yy.o parser.tab.o hash.c ast.c -o etapa4
parser.tab.o: parser.tab.c
	gcc -c parser.tab.c
lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

parser.tab.c: parser.y
	bison -d parser.y
lex.yy.c: scanner.l
	lex scanner.l
ast.o: ast.c
	gcc -c ast.c
hash.o: hash.c
	gcc -c hash.c 
	
clean:
	rm lex.yy.c parser.tab.c *.o etapa4
