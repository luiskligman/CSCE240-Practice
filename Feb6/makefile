compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

somefunctions.o : somefunctions.cc somefunctions.h
	$(compile) $<

feb6.o : feb6.cc somefunctions.h
	$(compile) $<

feb6 : feb6.o somefunctions.o
	$(link) $^ -o $@
	./$@

clean :
	rm *.o feb4