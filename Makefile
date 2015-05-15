CXX = g++
CXXFLAGS = -Wall -MMD -g
EXEC = connectfour
OBJECTS = cell.o board.o game.o main.o row.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
