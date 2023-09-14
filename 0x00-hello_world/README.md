# C Programming - Hello, World

## Description
This project is designed to introduce you to the world of C programming. You will learn the basics of C, including its history, key figures, and fundamental concepts. The project includes various tasks that will help you practice writing C code, compiling programs, and adhering to coding style standards.

## Resources
Before diving into the tasks, it's essential to explore the following resources:

- [Everything you need to know to start with C.pdf](https://example.com/c-pdf) (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://example.com/dennis-ritchie)
- ["C" Programming Language: Brian Kernighan](https://example.com/brian-kernighan)
- [Why C Programming Is Awesome](https://example.com/why-c-is-awesome)
- [Learning to program in C part 1](https://example.com/learn-c-part1)
- [Learning to program in C part 2](https://example.com/learn-c-part2)
- [Understanding C program Compilation Process](https://example.com/compilation-process)
- [Betty Coding Style](https://example.com/betty-coding-style)
- [Hash-bang under the hood](https://example.com/hash-bang)
- [Linus Torvalds on C vs. C++](https://example.com/linus-torvalds-c-vs-cpp)

### Man or Help
You can also refer to the following man pages and help resources:

- `gcc`
- `printf (3)`
- `puts`
- `putchar`

## Learning Objectives
By the end of this project, you should be able to explain the following concepts to anyone without needing Google:

1. Why C programming is awesome
2. Who invented C
3. Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
4. What happens when you type `gcc main.c`
5. What is an entry point
6. What is `main`
7. How to print text using `printf`, `puts`, and `putchar`
8. How to get the size of a specific type using the unary operator `sizeof`
9. How to compile using `gcc`
10. What is the default program name when compiling with `gcc`
11. What is the official C coding style, and how to check your code with `betty-style`
12. How to find the right header to include in your source code when using a standard library function
13. How does the `main` function influence the return value of the program

## Requirements
### C
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

## More Info
### Betty Linter
To run the Betty linter with the command `betty <filename>`:

1. Go to the [Betty repository](https://example.com/betty-repo).
2. Clone the repo to your local machine.
3. Change to the Betty directory.
4. Install the linter with `sudo ./install.sh`.
5. Create a new file called `betty` using `emacs` or `vi`, and copy the script below:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

6. Save the file and exit. Change permissions to apply to all users with `chmod a+x betty`.
7. Move the `betty` file into the `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`.
8. You can now type `betty <filename>` to run the Betty linter.

## Copyright - Plagiarism
You are tasked to come up with solutions for the tasks yourself to meet the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. Plagiarism in any form is strictly forbidden and will result

 in removal from the program.

---

This README.md provides a comprehensive overview of the C Programming - Hello, World project. It includes essential resources, learning objectives, and requirements for completing the project successfully. Make sure to explore the provided resources and adhere to the specified guidelines throughout the project.
