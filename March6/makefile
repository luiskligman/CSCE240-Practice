compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

temperature.o : temperature.cc temperature.h
	$(compile) $<

march6 : march6.cc temperature.o
	$(link) $^
	./a.out

clean :
	rm *.o a.out