compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

feb27.o : feb27.cc
	$(compile) $<

feb27 : feb27.o
	$(link) $^ -o $@
	./$@

clean :
	rm *.o feb27