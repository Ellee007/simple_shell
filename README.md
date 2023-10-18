# Simple Shell Project

**A simple Unix command line interpreter**

## About this project
This project is a simple version of the linux shell. It takes command from the keyboard for the system to execute.

> Displays a prompt and waits for user input.
> Handles commands with arguments.
> Handles the PATH global variable.
> Handles The EOF (End Of File) condition.
> Handles the Ctrl + D to exit the shell

## USAGE
ubunto@ubuntu:/root/simple_shell$ gcc -Wall -Wextra -Werror -pedantic *.c -o hsh
ubunto@ubuntu:/Bureau/simple_shell$ ./hsh
	- $ echo Hello, This is an example
		Hello, This is an example
	- $ ls
		README.md  hsh shell.h

## Allowed functions used 

* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `malloc` (man 3 malloc)
* `perror`(man 3 perror)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `write` (man 2 write)

## TEAM
- George Sunday
- Aliyu Alhassan
