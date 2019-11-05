OPT = -Wall -O2
system: main.o Control.o View.o Manage.o Repository.o Setting.o Program.o
	g++ $(OPT) -o system main.o Control.o View.o Manage.o Repository.o Setting.o Program.o

main.o: main.cc
	g++ $(OPT) -c main.cc

Control.o: Control.cc #Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc #View.h
	g++ $(OPT) -c View.cc

Manage.o: Manage.cc #Manage.h
	g++ $(OPT) -c Manage.cc

Repository.o: Repository.cc #Repository.h
	g++ $(OPT) -c Repository.cc

Setting.o: Setting.cc #Setting.h
	g++ $(OPT) -c Setting.cc

Program.o: Program.cc #Program.h
	g++ $(OPT) -c Program.cc



#Instruction.o: Instruction.cc Instruction.h
#	g++ $(OPT) -c Instruction.cc

#File.o: File.cc File.h
#	g++ $(OPT) -c File.cc

clean:
	rm -f *.o system
