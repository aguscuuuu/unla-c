# C Programming Practice
### Universidad Nacional de Lanús, Buenos Aires, Argentina

This repository contains a collection of C language exercises developed for the Computer Programming course taught during the first year of the Bachelor's Degree in Systems at the National University of Lanús. It also includes additional exercises from [C Ya](https://www.tutorialesprogramacionya.com/cya/), a Spanish-language C programming tutorial site. The main goal of this project is to practice fundamental programming concepts while becoming familiar with the syntax and logic of the C programming language.

The exercises cover topics such as:
- Basic syntax, data types, and operators
- Input/output handling and sequential programming
- Conditional structures (if/else, switch, nested)
- Loops and iteration (while, for, do-while)
- Functions, parameters, return values, and recursion
- Arrays, strings, and matrices
- Structs and record data structures
- Pointers and dynamic memory management (malloc/free)
- Dynamic data structures: linked lists, stacks, queues, and trees
- Sorting and searching algorithms
- Modular programming and multi-file projects
- Binary and text file handling
- Abstract data types and algorithm design strategies

The structure is simple and focused on learning, making it ideal for beginners starting with C.

---

# Run
To execute the exercises locally, follow the steps below.

### 1. Clone the repository
```sh
git clone https://github.com/aguscuuuu/unla-c.git
```

This downloads all the `.c` and `.exe` files with the exercises. Within them are the instructions.

### 2. Install a C compiler
Before running the code, you need to install a C compiler in your computer.
Follow this video tutorial step by step: 
> https://www.youtube.com/watch?v=oC69vlWofJQ&list=PLdQfpB5wpgrOOmjAj-UF9Pothx88vxXHN

The video explains how to install:
- GCC compiler (via MSYS2)
- Environment Visual Studio Code setup
- Basic configuration

> **Note on IDE choice:** The course professors recommend [Code::Blocks](https://www.codeblocks.org/) as the IDE, as it comes with a built-in compiler and is straightforward for beginners. However, I personally migrated to Visual Studio Code for its ease of use and seamless integration with Git and GitHub.

### 3. Compile and run

#### Option A — Terminal
Open a terminal in the project folder, then compile and run:
```sh
gcc 2-4.c -o 2-4
./2-4
```

#### Option B — VSCode shortcut (F9, optional)
This project includes a `.vscode/tasks.json` file with a predefined task to compile and run the current file automatically.

> Note: GCC must be installed and configured (as shown in the setup video) for this to work.  
> If your compiler path is different, you may need to update the `"command"` field inside `tasks.json`.

To bind the task to **F9**:

1. Open Keyboard Shortcuts:
   - `File → Preferences → Keyboard Shortcuts`
   - or press `Ctrl + K` then `Ctrl + S`
2. Click the keybindings file icon (`{}`) in the top right
3. Add the following:
```json
[
  {
    "key": "f9",
    "command": "workbench.action.tasks.runTask",
    "args": "Ejecutar C"
  }
]
```

Once configured, pressing **F9** will compile and run the currently open `.c` file in one step.

---

## Status
> In progress.

- **Version:** `1.0.0`
- **Purpose:** Learning C programming
- **Level:** Beginner

New exercises may be added as part of the learning process.

---

## Used Technologies
- **Language:** C
- **Compiler:** GCC (via MSYS2)
- **Ideal editor:** Visual Studio Code

---

## Developers & Contributors
- **Agustin Cuenca** (`agustin.cuenca.ct@gmail.com`) — Student & Developer

---

## License

This work has been dedicated to the public domain under the **Creative Commons CC0 1.0 Universal Public Domain Dedication**.

To the extent possible under law, the author has waived all copyright and related or neighboring rights.

> You can copy, modify, distribute and perform the work, even for commercial purposes, all without asking permission.

**© 2025 cueCode Software.**

 
                                       ______          __              
                      _______  _____  / ____/___  ____/ /__            
                     / ___/ / / / _ \/ /   / __ \/ __  / _ \           
                   / /__/ /_/ /  __/ /___/ /_/ / /_/ /  __/                  
                    \___/\__,_/\___/\____/\____/\__,_/\___/  _____    
                      / ___/____  / __/ /__      ______ _________      
                      \__ \/ __ \/ /_/ __/ | /| / / __ `/ ___/ _ \     
                     ___/ / /_/ / __/ /_ | |/ |/ / /_/ / /  /  __/     
                    /____/\____/_/  \__/ |__/|__/\__,_/_/   \___/  
