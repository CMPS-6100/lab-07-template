# CMPS 6100  Lab 08

In this lab, you explore the shell and learn the basics of C programming.

Some prompts will require you to edit `main.py` and others will require answers will go in `answers.md`.

Refer back to the [README.md](README.md) for instruction on git, how to test your code, and how to submit properly to get all the points you've earned.

# Our Server

For this lab (and the following labs), we have provisioned a linux server for your use! If you are curious, this is a virtual machine provided in "the cloud" on Microsoft Azure.

Our server gives you a linux environment to interact with and a common environment in which to implement the lab problems in this and future labs. I have created a user for you. Your username is your tulane username, and I have initialized your password to be your student ID. This isn't secure. You will have to change this!

The environment is solely text based. You will interact with it through a terminal, the most powerful interface to interact with and control computers. The first step will be to connect to it.

You can connect to the server using `ssh`. `ssh`, or Secure SHell, is a terminal program that allows you to remotely login to other computers.

1. Connect to our server by opening a terminal and issuing the following command (replace `username` with your user name). Note: `$` indicates a shell prompt. You do not need to type `$`. Your command begins with `ssh`.

    `$ ssh username@cmps-6100-lab.cs.tulane.edu`

    For example, I would issue the command:

    `$ ssh amaus@cmps-6100-lab.cs.tulane.edu`

    You will be prompted for your password. Your password is set by default to be your student ID. Enter it and you will see a shell prompt logged in to the server for you. 

2. Change you password! Your default password is not secure. Once logged in, issue the command:

    `$ passwd`

    This will prompt you to enter a password. Choose and set a secure password for your account. If you don't, and we have any hackers break in though your account, we will know you didn't choose a secure password!

# What is a shell?

As mentioned, a shell is the most powerful interface we have to computers. GUI and (now-a-days) voice interfaces are limited by what they are programmed to do. The shell is only limited by the capabilities of the computer itself. 

A *shell* is an interactive command-line interpreter that runs programs on behalf of the user. A shell repeatedly prints a prompt, waits for a command line on stdin, and then carries out some action, as directed by the contents of the command line.

The command line is a sequence of ASCII text words delimited by whitespace. The first word in the command line is either the name of a built-in command or the pathname of an executable file. The remaining words are command-line arguments. If the first word is a built-in command, the shell immediately executes the command in the current process. Otherwise, the word is assumed to be the pathname of an executable program. In this case, the shell forks a child process, then loads and runs the program in the context of the child. The child processes created as a result of interpreting a single command line are known collectively as a job. In general, a job can consist of multiple child processes connected by Unix pipes.

If the command line ends with an ampersand “&”, then the job runs in the background, which means that the shell does not wait for the job to terminate before printing the prompt and awaiting the next command line. Otherwise, the job runs in the foreground, which means that the shell waits for the job to terminate before awaiting the next command line. Thus, at any point in time, at most one job can be running in the foreground. However, an arbitrary number of jobs can run in the background.

For example, entering the command:

    `$ jobs`

causes the shell to execute the buit-in `jobs` command. Entering the command:

    `$ sleep 5`

runs the sleep program for 5 seconds in the foreground. This causes a process to sleep for 5 seconds before continuing. `5` is a command line argument that modifies the behavior of `sleep`. Alternatively entering the command:

    `$ sleep 10 &`

runs the sleep program in the background. At this point, if you run `$ jobs` you will see it listed!

# Getting to know the shell

There are some basic commands that you should become familiar with in order to operate on the shell.

- `pwd`: Present Working Directory
    - Print to standard out (stdout) the present working directory. This is your current location in your file system
- `ls`: List files
    - List the files and directories in the present working directory
- `cd`: Change Directory
    - Change the present working directory to a new directory
- `cat`: Concatenate Files
    - Concatenate the contents of files and print them to stdout. This is most commonly used to print the contents of a single file.

Most importantly:

- `man`: Manual
    - Display the manual for a given program. e.g, `$ man ls` displays the manual for `ls`, giving a description of this program, a list of all command line arguments, and other information as well.
- `help`: Help
    - Display a list of the shell's built-in commands, or get help for an individual one of them. E.g, `$ help pwd` or `$help cd` displays the help information about `pwd` and `cd` respectively.

Other useful commands:

- `mkdir`: Make Directory
- `touch`: Create an empty file
- `history`: Display the history of all commands you have entered
- `exit`: Exit your shell. This will close your ssh session.
- `vi`: Edit the specified file with the Vim text editor. [Vim Basics Tutorial](https://opensource.com/article/19/3/getting-started-vim)

## Secrets

In your home directory, I have hidden a secret directory with a secret file.

Find this directory and file.

The file contains the assembly code for a simple C program. In it,
you will find a section with the instructions that correspond to the main method.
Other sections have to do with the initialization and running of the program.

In the main method, you see that a value is stored in a memory location, the
location given as `-0x4(%rbp)`. Operations are performed on this value and the
value in `-0x4(%rbp)` at the end of the program is the final value of the operations.

1. What value is stored in `-0x4(%rbp)`, what operations are performed on it, and what
is the final result of the operations? In assembly, the values are given in hexadecimal. Give your answers in decimal (base-10).

    **Enter your answers in answers.md**

# C Programming

2. Print cmd line args

3. Implement Parse line. Bonus arguments in single quotes count as single argument

4. Fork problem?