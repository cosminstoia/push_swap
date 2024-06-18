# push_swap
## Overview
The push_swap project is part of the 42 School curriculum, designed to deepen understanding of algorithmic problem-solving and optimization. The objective is to sort a stack of integers using a set of predefined operations with the least number of moves. This project requires implementing two programs: push_swap to generate a sorting sequence and checker to verify it.
## Features
- Supports various operations to manipulate stacks (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr).
- Optimized to produce the shortest possible sequence of operations for sorting.
- Includes a checker program to validate the sorting sequence.
## Operations
- sa (swap a): Swap the first two elements at the top of stack a.
- sb (swap b): Swap the first two elements at the top of stack b.
- ss (swap both): sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a.
- pb (push b): Take the first element at the top of a and put it at the top of b.
- ra (rotate a): Shift all elements of stack a up by one.
- rb (rotate b): Shift all elements of stack b up by one.
- rr (rotate both): ra and rb at the same time.
- rra (reverse rotate a): Shift all elements of stack a down by one.
- rrb (reverse rotate b): Shift all elements of stack b down by one.
- rrr (reverse rotate both): rra and rrb at the same time.
