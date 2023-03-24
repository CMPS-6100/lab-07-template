# Tests

## `cmdargs`

The shell script `cmdargs_test.sh` and the program `parseline_tests.c` are provided
to test your `cmdargs` and `parseline` programs respectively.

To run the cmdargs test, navigate into this `tests` directory on your shell.
Then issue the command:

`$ ./cmdargs_test.sh`

## `parseline`

To execute the parseline_tests, first compile it:

`$ gcc -g parseline_tests.c -o parseline_tests`

The execute it. You can run all the tests via:

`$ ./parseline_tests --all`

You can alternatively run individual tests:

`$ ./parseline_tests 1`

`$ ./parseline_tests 2`

`$ ./parseline_tests 3`

If you make changes to your `parseline` program, you will have to recompile 
`parseline_tests` in order to test your changes.

I recommend running the tests using the following command:

`$ gcc -g parseline_tests.c -o parseline_tests && ./parseline_tests --all`

to compile and run all at once. This ensures you always test the latest saved
version of your program.
