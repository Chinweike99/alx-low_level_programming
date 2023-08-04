#/!bin/bash
for file in *.c; do
  gcc -c "$file"
done
gcc -static -o liball.a *.o
