_This project has been created as part of the 42 curriculum by oznachki._

# 🔢 push_swap

A sorting algorithm project that sorts data on a stack with a limited set of instructions, using the lowest possible number of actions.

---

## 📋 Description

**push_swap** is an algorithm project from the 42 school curriculum that challenges you to sort a stack of integers using only two stacks and a specific set of operations. The goal is to sort the numbers in ascending order on stack `a` while using stack `b` as a helper, all while minimizing the number of operations.

### Project Goals:
- Implement efficient sorting algorithms for different input sizes
- Understand algorithmic complexity and optimization
- Master stack data structures and operations
- Work with doubly linked lists in C

### Key Features:
- ✅ Handles 2, 3, 5, 100, and 500+ numbers efficiently
- ✅ Input validation (duplicates, non-integers, integer overflow)
- ✅ Optimized algorithms (simple sorts for small sets, radix sort for large sets)
- ✅ Memory leak-free implementation
- ✅ Norm-compliant code

---

## 🎯 Algorithm Overview

The program uses different sorting strategies depending on input size:

| Input Size | Algorithm | Max Operations |
|------------|-----------|----------------|
| 2 numbers | Simple swap | 1 |
| 3 numbers | Hard-coded optimal sort | 3 |
| 5 numbers | Push smallest to B, sort 3, push back | 12 |
| 100 numbers | Radix sort with indexing | ~ 1084 |
| 500 numbers | Radix sort with indexing | ~ 6784 |

### Radix Sort Approach
For larger sets (100+), the program:
1. **Indexes** all numbers (converts to ranks 0, 1, 2, ...)
2. Sorts by **binary digits** (LSB to MSB)
3. Uses stack B as temporary storage
4. Achieves O(n·k) complexity where k is number of bits

---

## 🛠️ Instructions

### Prerequisites
- CC compiler
- Make
- Unix-based system (Linux/macOS)

### Compilation
```bash
# Clone the repository
git clone [your-repo-url]
cd push_swap

# Compile the project
make

# The executable 'push_swap' will be created
```

### Usage
```bash
# Basic usage
./push_swap [numbers...]

# Examples
./push_swap 3 2 1
./push_swap 5 4 3 2 1
./push_swap 42 8 15 16 23 4

# With random numbers
ARG=$(seq -5000 5000 | shuf -n 500 | tr '\n' ' '); ./push_swap $ARG
```

### Output
The program outputs a series of operations (one per line) that will sort the stack:
- `sa` : swap first 2 elements of stack a
- `sb` : swap first 2 elements of stack b
- `ss` : sa and sb at the same time
- `pa` : push top of b to a
- `pb` : push top of a to b
- `ra` : rotate stack a (shift up)
- `rb` : rotate stack b (shift up)
- `rr` : ra and rb at the same time
- `rra` : reverse rotate stack a (shift down)
- `rrb` : reverse rotate stack b (shift down)
- `rrr` : rra and rrb at the same time

### Error Handling
The program outputs `Error` to stderr and exits if:
- Arguments contain non-integer values
- Arguments exceed integer limits (< INT_MIN or > INT_MAX)
- Duplicate numbers are present

---

## 🧪 Testing

### Manual Testing
```bash
# Test with 3 numbers
./push_swap 2 1 3 | wc -l  # Should output ≤ 3

# Test with 5 numbers
./push_swap 5 4 3 2 1 | wc -l  # Should output ≤ 12

# Test with 100 numbers
ARG=$(seq -5000 5000 | shuf -n 100 | tr '\n' ' ');
./push_swap $ARG | wc -l  # Should output ~ 1084

# Test with 500 numbers
ARG=$(seq -5000 5000 | shuf -n 500 | tr '\n' ' ');
./push_swap $ARG | wc -l  # Should output ~ 6784
```

### Error Testing
```bash
# Duplicate numbers
./push_swap 5 2 5  # Should output: Error

# Non-integer
./push_swap 5 abc 3  # Should output: Error

# Integer overflow
./push_swap 2147483648  # Should output: Error

# Already sorted (no output expected)
./push_swap 1 2 3 4 5
```

### Memory Leak Testing
```bash
valgrind --leak-check=full ./push_swap 5 4 3 2 1
# Should show: All heap blocks were freed -- no leaks are possible
```

### With Checker (if available)
```bash
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_OS $ARG
# Should output: OK (if sorted correctly)
```

---

## 📂 Project Structure
```
push_swap/
├── includes/
│   └── push_swap.h           # Header file with all function declarations
├── src/
│   ├── main/                 
│   │   ├── push_swap.c       # Main function and sorting logic
│   │   └── parsing.c         # Input parsing and validation
│   ├── operations/           
│   │   ├── swap.c            # Swap operations (sa, sb, ss)
│   │   ├── push.c            # Push operations (pa, pb)
│   │   ├── rotate.c          # Rotate operations (ra, rb, rr)
│   │   └── reverse_rotate.c  # Reverse rotate operations (rra, rrb, rrr)
│   ├── sorting/              
│   │   ├── sort_three.c      # Algorithm for 3 elements
│   │   ├── sort_five.c       # Algorithm for 5 elements
│   │   ├── radix_sort.c      # Radix sort algorithm for large sets
│   │   ├── index_radix.c     # Indexing/ranking algorithm
│   │   └── get_max_bits.c    # Calculate max bits needed
│   └── utils/                
│       ├── is_valid.c        # Validate input strings
│       ├── check_dublicates.c# Check for duplicate numbers
│       ├── ft_atol.c         # Convert string to long
│       ├── append_node.c     # Add node to linked list
│       ├── free_list.c       # Free linked list memory
│       ├── print_error.c     # Error handling and output
│       └── is_sorted.c       # Check if stack is sorted
├── Makefile				  # Compilation rules
└── README.md				  # Project documentation                 
```    

---

## 🎓 What I Learned

- **Algorithm Design**: Implementing and optimizing sorting algorithms for specific constraints
- **Data Structures**: Working with doubly linked lists and stack operations
- **Complexity Analysis**: Understanding time and space complexity (Big O notation)
- **Bit Manipulation**: Using bitwise operations for radix sort
- **Memory Management**: Proper allocation and deallocation in C
- **Input Validation**: Robust error handling and edge case management
- **Performance Optimization**: Choosing the right algorithm for different input sizes

---

## 📚 Resources

### Documentation & Articles
- [push_swap subject (42 PDF)](https://cdn.intra.42.fr/pdf/pdf/xxxxx/en.subject.pdf)
- [Sorting Algorithms Explained](https://www.geeksforgeeks.org/sorting-algorithms/)
- [Radix Sort Algorithm](https://www.programiz.com/dsa/radix-sort)
- [Stack Data Structure](https://www.geeksforgeeks.org/stack-data-structure/)
- [Big O Notation Guide](https://www.bigocheatsheet.com/)

### Tutorials & Guides
- [push_swap Tutorial by Oceano](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Visualizer for push_swap](https://push-swap42-visualizer.vercel.app/)
- [Algorithm Complexity Analysis](https://www.freecodecamp.org/news/big-o-notation-why-it-matters-and-why-it-doesnt-1674cfa8a23c/)

### AI Usage
**AI** was used as a learning assistant throughout this project:

#### How AI Was Used:
- **Conceptual Understanding**: Explaining pointer mechanics, doubly linked lists, and algorithm complexity
- **Debugging Assistance**: Identifying logic errors in operations
- **Algorithm Explanation**: Breaking down radix sort, indexing strategies, and optimization techniques
- **Documentation**: Helping structure and explain the README

#### What AI Did NOT Do:
- ❌ Write the core algorithm implementations
- ❌ Generate the sorting logic
- ❌ Produce copy-paste solutions

**Learning Approach**: AI was used as a teacher/mentor to understand concepts deeply, not as a code generator. All implementations were written by hand with understanding of every line.

---

## 🔧 Makefile Commands
```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile from scratch
```

---

## ⚠️ Known Limitations

- Does not handle split arguments (e.g., `./push_swap "3 2 1"`)
- Optimized for speed over absolute minimum operations
- Radix sort requires indexing step (adds overhead for small sets)

---
