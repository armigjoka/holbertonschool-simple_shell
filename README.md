What is Simple Shell?

Simple Shell is a program that make the implementation of the command-line for the Unix operating system created by students of Hoblerton School Armela Gjoka and viviani22. 

Some of the learning objectives about simple shell are:

Who was the author of designed and impleneted the original Unix Operating system?

What is Simple Shell?

Who is Ken Thompson?

How does a shell program works?

What is a pid and ppid?

What is the difference of the a function and a system call?

What are the three prototypes of main file.

How does the shell use the Path command to find the programs?

How to execute the program wiht the execve system call?

Files included in the repository:

Description of what is done on simple shell program created by us.

String_utilisis.c:

String function write from preivious projects.

Shell.h:

It is the header file which we include all the prototyopes files of the project.

Shell.c:

Content of the main functions.

Putchar.c:

It is the file which we have learned and is used to print one character.

Command_Path.c:

The path varibles is an environment variable containing an ordered list of path that linux program will search for executables when runnig a command.

Env_utils.c:

Is using to print the environment variables or run another utility in an aletered environment without having to modify the currently existing environment.

Pid.c:

Is a signed integer type which is capable of representing a process of ID. 

Getpid.c:

Function which returns the process of ID of the current process.


Installation process:

Simple shell is instaled by running the following commands in terminal:

git clone https://github.com/armigjoka/simple_shell.git


After that simple_shell program can compile using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


The testing process of shell:

interactive mode of working shell:

$ ./hsh

($) /bin/ls

hsh main.c shell.c

($)

($) exit

$

Non-interactive mode:

$ echo "/bin/ls" | ./hsh

hsh main.c shell.c test_ls_2

$

$ cat test_ls_2

/bin/ls

/bin/ls

$

$ cat test_ls_2 | ./hsh

hsh main.c shell.c test_ls_2

hsh main.c shell.c test_ls_2

$

Basic operation of simple shell:

When the shell reads the  entry, it is proceeds through a sequence of the operations:

ls -ls

Builtin functions:

env:

Show the environment of variables.

Usage: To show the environment of variables.


Examples:

Interactive Mode:

$ cat test_ls_1

/bin/ls

/bin/ls


Non-Interactive Mode:

$ cat tes_ls_1 | ./hs

hs. main.c shell.c test_ls_1

Example of Usage:

ubunto@ubuntu: ~/Bureau/simple_shell$ gcc -Wall -Wextra -Werror -pedantic *.c -o hsh
ubunto@ubuntu: ~/Bureau/simple_shell$ ./hsh

#cisfun$ echo Hello, This is an example

Hello, This is an example

#cisfun$ ls

README.md  checkbuild.c  line_exec.c  shell.c  string.c

buildin.c  hsh		 linkpath.c   shell.h

#cisfun$ ^C

#cisfun$ ls -l

total 52

-rw-r--r-- 1 ubunto ubunto  3067 Nov 26 04:22 README.md

-rw-r--r-- 1 ubunto ubunto  2183 Nov 24 16:17 buildin.c

-rw-r--r-- 1 ubunto ubunto   574 Nov 24 15:59 checkbuild.c

-rwxr-xr-x 1 ubunto ubunto 18144 Nov 26 04:22 hsh

-rw-r--r-- 1 ubunto ubunto  2091 Nov 24 14:49 line_exec.c

-rw-r--r-- 1 ubunto ubunto  1926 Nov 24 14:30 linkpath.c

-rw-r--r-- 1 ubunto ubunto   951 Nov 24 16:09 shell.c

-rw-r--r-- 1 ubunto ubunto  1351 Nov 24 15:58 shell.h

-rw-r--r-- 1 ubunto ubunto  1727 Nov 24 14:30 string.c

#cisfun$ exit

ubunto@ubuntu:~/Bureau/simple_shell$


List of functions that are allowed and the system calls for the project:

access (man 2 access)

chdir (man 2 chdir)

close (man 2 close)

closedir (man 3 closedir)

execve (man 2 execve)

exit (man 3 exit)

_exit (man 2 _exit)

fflush (man 3 fflush)

fork (man 2 fork)

free (man 3 free)

getcwd (man 3 getcwd)

getline (man 3 getline)

getpid (man 2 getpid)

isatty (man 3 isatty)

kill (man 2 kill)

malloc (man 3 malloc)

open (man 2 open)

opendir (man 3 opendir)

perror (man 3 perror)

read (man 2 read)

readdir (man 3 readdir)

signal (man 2 signal)

stat (__xstat) (man 2 stat)

lstat (__lxstat) (man 2 lstat)

fstat (__fxstat) (man 2 fstat)

strtok (man 3 strtok)

wait (man 2 wait)

waitpid (man 2 waitpid)

wait3 (man 2 wait3)

wait4 (man 2 wait4)

write (man 2 write)

All the files will compiled on Ubuntu 20.04 LTS using gcc, using the option of -Wall -Werror -Wextra -pedantic -std=gnu89.

All the files that we are gone do on the project should end with a new line.

The code has use Betty style

We have done only 5 functions

All header files are included guarded.

Also we have used the system calls.

Authors of the project are: armigjoka, viviani22
