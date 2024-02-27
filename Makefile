# ### Windows
# all: compile link

# compile:
# 	g++ -Isrc/include -c main.cpp

#  link:
# 	g++ main.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system

### Linux
all: compile link

compile:
	g++ -c Genshim_court_prison.cpp

link:
	g++ Genshim_court_prison.o -o Genshim_court_prison -lsfml-graphics -lsfml-window -lsfml-system
	./Genshim_court_prison

clean:
	rm -f Genshim_court_prison *.o