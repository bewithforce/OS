#!/usr/bin/env bash
cd lab1 || exit
rm -r lab1

printf "1\n"
echo $PWD
cd ..
echo $PWD
cd lab1 || exit
echo $PWD

printf "\n2\n"
ls -l

printf "\n3\n"
mkdir lab1
cd lab1 || exit
echo $PWD
touch cat1
echo "cat1 file" >> cat1
cat cat1 > cat2
ls
printf "\ncat2 file:\n"
cat cat2

printf "\n4\n"
touch a
mkdir a
mkdir b
touch b
ls
echo
rm a
rmdir b
touch a.a
echo "a.a file" >> a.a
touch b.b
echo "b.b file" >> b.b
touch c.c
echo "c.c file" >> c.c
mkdir a
mkdir b
mkdir c
cp a.a a_copy
cp a.a c/
cp b.b c/
cp -r c b
printf "\nroot:\n"
ls
cd c || exit
printf "\nc:\n"
ls
cd ../b || exit
printf "\nb:\n"
ls
cd ..

printf "\n5\n"
echo $PWD
mv b/c a
cd a || exit
printf "\na:\n"
ls
mv /home/dzianis/Projects/C++/OS/lab1/lab1/a/c /home/dzianis/Projects/C++/OS/lab1/lab1/b
cd ../b || exit
printf "\nb:\n"
ls
cd ..
rm -rf *
ls

printf "\n6\n"
touch d1
chmod u+x-rw d1
chmod g+rwx d1
chmod o-rwx d1
ls -l
rm d1

printf "\n8\n"
umask 60
mkdir a
ls -l
rmdir a

umask 600
mkdir a
echo
ls -l
rmdir a

umask 777
mkdir a
echo
ls -l
rmdir a
echo
ls -l

cd ..
umask 022
printf "\n9 and 10: \n"
g++ lab1.cpp
./a.out
rm a.out