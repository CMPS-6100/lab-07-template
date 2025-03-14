# CMPS 6100  Lab 07

In this lab, you will become acquainted with the shell and learn some C programming.

To complete this lab, follow the instructions in [lab-07.md](lab-07.md) ([PDF version](lab-07.pdf)). Below you'll find important and useful information about submitting your work, using git, and testing your code. 

## Turning in your work
- At the top of `answers.md` file, **include your name**.
- Once you have pushed your final submission to GitHub, go to Canvas and submit a link to your repository to the Canvas assignment for this lab.
- Upload your completed lab to gradescope. 

### Gradescope

The easiest way to submit to gradescope is to compress the contents of your lab and upload that archive to gradescope. Specifically, if your lab directory structure is:

```
lab-XX/
  README.md
  answers.md
  lab-XX.md
  lab-XX.pdf
  src/
    main.py
  tests/
    test_main.py
```

you need to compress *the contents* of `lab-XX`, not `lab-XX` itself.

When uploading, the directory structure of the lab must be maintained in your submission. E.g., the `src` directory with your source file(s) inside of it must be uploaded.

## Using Git 
- [Clone] your lab repository.
- As you complete this lab, `add`, `commit`, and `push` your work up to GitHub. 
  - You will need to issue `git add` for all files that you have modified, e.g., `main.py`, `answers.md`, and any others that you modify or add to the repository as well.
  - For example, on the command line, in the same directory as your cloned lab:
    ```
    $ git add hello.c
    $ git add answers.md
    $ git commit -m "Implement wello world, add name to answers.md"
    $ git push origin main
    ```
  - It is recommended that you `add`, `commit`, and `push` your work often in order to regularly save your work to GitHub. The latest version of your work will be what is graded.

## About Markdown

We use Markdown extensively in these labs. Markdown is a great way to easily add formatting to simple text documents.

Here is a [cheatsheet] for markdown syntax.

You will notice in the lab documents that you can format mathematical expressions in markdown. To do so, wrap them in dollar signs. You can use [latex syntax] within the dollar signs. 

For example, the run time of our first example, linear search, this semester is $c_1n + c_2n + c_4 \in O(n)$. 

More generally, the runtime of any program can be expressed as:

$$\sum_i c_i * n_i$$

for every instruction $n_i$ and its cost $c_i$.

It's easy to do powers too. Euler's identity states: $e^{ix} + 1 = 0$

Pretty cool, huh?

[Clone]: https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository-from-github/cloning-a-repository
[cheatsheet]: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet
[latex syntax]: https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/writing-mathematical-expressions
