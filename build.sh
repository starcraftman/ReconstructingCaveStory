#!/usr/bin/env bash
# Run this to build project with cmake
# Alternative to my normal makefiles
ROOT=$(readlink -f '.')
BDIR="./buildCmake"
SYS=$(uname -a)

usage() {
  echo "Builds the project. Takes optional args:
  clean: Remove build dir.
  run  : Execute main program.
  test : Run tests."
}

if [ "$#" -lt 1 ]; then
  usage
  exit
fi

if [ "clean" == "$1" ]; then
  rm -rf "$BDIR"
  exit
fi

if [ "x$SYS" == "xLinux" -a ! -d ./libs ]; then
  ./GetLibs.py gtest boost SDL
fi

mkdir "$BDIR"
pushd "$BDIR"
SDLDIR="$ROOT/libs" cmake ..
make
popd

if [ "run" == "$1" ]; then
  ./$BDIR/CaveStory
elif [ "test" == "$1" ]; then
  ./$BDIR/CaveStoryTest
fi
