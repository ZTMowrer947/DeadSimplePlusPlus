PREFIX=/usr/local
CXX=g++
CXXFLAGS=-Wall

all:
	${CXX} ${CXXFLAGS} -o ds++ main.cpp

ds++:
	make

clean:
	rm ds++

install: ds++
	install -vD ds++ ${PREFIX}/bin/ds++

uninstall:
	rm -f ${PREFIX}/bin/ds++