etapa1: lex.yy.c
	gcc -o etapa1 lex.yy.c main.c
lex.yy.c: scanner.l
	flex scanner.l
clean:
	rm lex.yy.c etapa1
