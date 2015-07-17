CC = gcc
CCFLAGS = -g -W -Wall

FLEX = flex
FLEX_OPTS = -PDoge

BISON = bison
BISON_OPTS = -t -pDoge

OBJS = Absyn.o Lexer.o Parser.o Printer.o TransformDoge.o

.PHONY: clean distclean

all:	TestDoge

re:	clean all

clean:
	rm -f *.o TestDoge Doge.aux Doge.log Doge.pdf Doge.dvi Doge.ps Doge

distclean: clean
	rm -f Absyn.h Absyn.c Test.c Parser.c Parser.h Lexer.c Skeleton.c Skeleton.h Printer.c Printer.h Makefile Doge.l Doge.y Doge.tex

TestDoge: ${OBJS} Test.o
	@echo "Linking TestDoge..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o TestDoge

Absyn.o: Absyn.c Absyn.h
	${CC} ${CCFLAGS} -c Absyn.c

Lexer.c: Doge.l
	${FLEX} ${FLEX_OPTS} -oLexer.c Doge.l

Parser.c: Doge.y
	${BISON} ${BISON_OPTS} Doge.y -o Parser.c

Lexer.o: Lexer.c Parser.h
	${CC} ${CCFLAGS} -c Lexer.c

Parser.o: Parser.c Absyn.h
	${CC} ${CCFLAGS} -c Parser.c

Printer.o: Printer.c Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Printer.c

TransformDoge.o: TransformDoge.c TransformDoge.h Absyn.h
	${CC} ${CCFLAGS} -c TransformDoge.c

Test.o: Test.c Parser.h Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Test.c
