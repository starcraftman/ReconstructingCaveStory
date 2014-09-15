#!/bin/sh
ROOT=$(readlink -f '.') 
BDIR="./cmakeGen"

if [ -d "$BDIR" ]; then
  rm -Rf "$BDIR"
fi

mkdir "$BDIR" 
cd "$BDIR"
SDLDIR="$ROOT/libs" cmake ..
make
