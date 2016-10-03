reverse: string_reversal.o myStringManip.o
	g++ -o reverse string_reversal.o myStringManip.o

string_reversal.o: string_reversal.cpp myStringManip.h
	g++ -c string_reversal.cpp
		
myStringManip.o: myStringManip.cpp myStringManip.h
	g++ -c myStringManip.cpp

clean:
	rm *.o reverse
