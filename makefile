all:
	lex interpreter.l
	yacc -d interpreter.y
	gcc -o program.out lex.yy.c y.tab.c -ly -ll

clean:
	rm a.out
	rm lex.yy.c
	rm y.tab.*