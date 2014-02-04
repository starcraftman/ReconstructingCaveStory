# Clang alternative makefiles, this is based on tut.
# I'll keep this one at top level like his.

EXE:=gen/cavestory

compile:
	clang++ -o $(EXE) src/**.cpp

run:
	$(EXE)

clean:
	rm $(EXE)

