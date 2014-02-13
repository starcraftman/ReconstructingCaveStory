# Clang alternative makefiles, this is based on tut.
# I'll keep this one at top level like his.

EXE:=gen/cavestory.exe

all: $(EXE)

$(EXE):
	clang++ -o $(EXE) src/**.cpp

run: $(EXE)
	$(EXE)

clean:
	rm $(EXE)

