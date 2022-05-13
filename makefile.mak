prog: funkc.o
	g++ -o prog main.cpp funkc.o
funkc:
	g++ -c funkc.cpp
student:
	g++ -c data.cpp
clean:
	rm *.o prog.exe