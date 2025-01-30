compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

jan28.o : jan28.cc
	$(compile) $<

jan28 : jan28.o
	$(link) $^ -o $@
	./$@

clean :
	rm *.o jan28
