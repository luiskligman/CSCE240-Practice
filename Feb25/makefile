compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

somefunctions.o : arrayfunctions.cc arrayfunctions.h
	$(compile) $<

feb25.o : feb25.cc arrayfunctions.h
	$(compile) $<

feb25 : feb25.o arrayfunctions.o
	$(link) $^ -o $@
	./$@

clean :
	rm *.o feb25