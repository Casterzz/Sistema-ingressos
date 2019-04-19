GOOGLE_TEST_LIB = gtest
GOOGLE_TEST_INCLUDE = /usr/local/include

IDIR =../include
CC=gcc
CCPLUS=g++	
CFLAGS=-I $(IDIR) -g -fvar-tracking -fvar-tracking-assignments
G_FLAGS=-I $(IDIR) -I $(GOOGLE_TEST_INCLUDE) -g -ftest-coverage -fprofile-arcs
LD_FLAGS=-I $(IDIR) -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread -g -ftest-coverage -fprofile-arcs

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = dominios.h entidades.h testes.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o dominios.o entidades.o testes.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: testa_bib

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CCPLUS) -c -o $@ $< $(CFLAGS)

testa_bib: $(OBJ)
	$(CCPLUS) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
