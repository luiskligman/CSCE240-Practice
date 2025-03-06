compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

temperature.o : temperature.cc temperature.h
	$(compile) $<

test : march4th.cc temperature.o
	$(link) $^
	./a.out

march4th.o : march4th.cc
	$(compile) $<

march4th : march4th.o
	$(link) $^ -o $@
	./$@

clean :
	rm *.o march4th