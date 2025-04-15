compiler = g++
flags = -std=c++17 -Wall
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

employee.o : employee.cc employee.h
	$(compile) $<

hourly.o : hourly.cc hourly.h employee.h
	$(compile) $<

salaried.o : salaried.cc salaried.h employee.h
	$(compile) $<

test.o : test.cc employee.h hourly.h salaried.h
	$(compile) $<

test : test.o employee.o hourly.o salaried.o
	$(link) $^
	./a.out

clean :
	rm *.o a.out
