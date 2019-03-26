# csx730-deadlock Deadlock Avoidance Activity

In a multiprogramming environment, a **deadlock** is a state in which each processes or thread
is waiting for another processes or thread, including itself, to take action, such as sending a 
message or more commonly releasing a lock.

### Getting Started

1. Form into **small groups of two or three** people. These instructions assume that at least one group 
   member is logged into the Nike. 

1. Use Git to clone the repository for this exercise onto Nike into a subdirectory called `csx730-deadlock`:

   ```
   $ git clone https://github.com/cs1730/csx730-deadlock.git
   ```

1. Change into the `csx730-deadlock` directory that was just created and look around. There should be a
   couple different files already present.
   
### Activity Questions

This activity is open book, open notes, and asking your instructor questions is allowed.
You may find Ch. 8 of _Operating System Concepts_ by Silberschatz, Gagne, and Galvin
useful as a reference.

1. Modify `SUBMISSION.md` to include the name, UGA ID number, course number (4730 or 6730) 
   for each group member. Then, **sign the piece of paper that your instructor has at the front 
   of the room.**
   
1. ~Under "Necessary Conditions" in `SUBMISSION.md`, list and define the four~
   ~conditions that must hold simnultaneously in a system for a deadlock to~
   ~arise, according to Silberschatz, Gagne, and Galvin.~
   
1. Experiment with `deadlock.c` by increasing `NTHREAD` and witnessing deadlocks.
   Under the sub-headings of "Resource Allocation Graph" in `SUBMISSION.md`, provide
   example output produced by the program, the edge set for the resource allocation
   graph induced by the output, and the observed cycle. An example for `NTHREAD = 2`
   is provided but should be replace with your own example.

**CHECKPOINT:** Ask your instructor if you have any questions.

1. Create a copy of `deadlock.c` called `safety.c`. 

1. In this checkpoint, you will be implementing part of the banker's algorithm for
   avoiding deadlocks. Several data structures must be maintained to implement
   the banker's algorithm. Under "Data Structures" sub-heading of 
   "Banker's Algorithm" in `SUBMISSION.md`, list and define these data
   structures.
   
1. In `safety.c`, implement the Banker's Safety Algorithm as described by
   Silberschatz, Gagne, and Galvin in Ch. 8.6.3.1.
   
   * Your program should print `SAFE` or `UNSAFE` before and after each resource
     is acquired by a thread.
   * You should test it for `2 ≤ NTHREAD ≤ 5` and resource instance counts as
     high as `2`.
   
1. Under "Safety Algorithm Examples" sub-heading of "Banker's Algorithm" in 
   `SUBMISSION.md`, provide an example output that demonstrate that not all 
   unsafe states lead to deadlock.
   
**CHECKPOINT**

1. Create a copy of `safety.c` called `banker.c`.

1. In `banker.c`, implement the Banker's Resource-Request Algorithm as described by
   Silberschatz, Gagne, and Galvin in Ch. 8.6.3.2.
   
   * You should test it for `2 ≤ NTHREAD ≤ 5`.
   * While not very technical, you can be somewhat confident that your 
     implementation is correct if no deadlock occurs within the first 30 seconds
	 of execution.

**SUBMISSION**

1. **Before 11:55 PM on WED**, double check that your group member names are listed 
   in `SUBMISSION.md` as well as the piece of paper that your instructor has at the 
   front of the room, then submit your activity attempt using the `submit` command. 
   From the parent directory:
   
   ```
   $ submit csx730-deadlock csx730
   ```
   
1. Remember to share this directory with your group members!

<hr/>

[![License: CC BY-NC-ND 4.0](https://img.shields.io/badge/License-CC%20BY--NC--ND%204.0-lightgrey.svg)](http://creativecommons.org/licenses/by-nc-nd/4.0/)

<small>
Copyright &copy; Michael E. Cotterell and the University of Georgia.
This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a> to students and the public.
The content and opinions expressed on this Web page do not necessarily reflect the views of nor are they endorsed by the University of Georgia or the University System of Georgia.
</small>
