
# Recursion

Recursion is the process by which a function calls itself directly or indirectly, and the associated function is known as a recursive function. Certain issues can be easily addressed using a recursive approach. Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, and other analogous issues are examples. A recursive function solves a specific problem by calling itself and addressing smaller subproblems of the original problem. As and when needed, many additional recursive calls can be created. It is critical to understand that we must specify a specific instance in order to end this looping process. So we may argue that the function calls itself with a simplified version of the original problem every time.

### Properties of Recursion:
1) Performing the same processes with different inputs several times.
2) We attempt smaller inputs at each stage to make the problem smaller.
3) A base condition is required to terminate the recursion; otherwise, an infinite loop would ensue.

### A Mathematical Interpretation
Consider the difficulty of a programmer determining the sum of the first n natural numbers. There are numerous approaches, but the easiest is to simply add the integers from 1 to n. So the function looks like this.

```
approach(1) – Simply adding one by one

f(n) = 1 + 2 + 3 +……..+ n
```
but there is another mathematical approach of representing this,
```
approach(2) – Recursive adding 

f(n) = 1                  n=1

f(n) = n + f(n-1)    n>1
```
There is a simple difference between the approach (1) and approach(2) and that is in approach(2) the function “ f( ) ” itself is being called inside the function, so this phenomenon is named recursion, and the function containing recursion is called recursive function, at the end, this is a great tool in the hand of the programmers to code some problems in a lot easier and efficient way.

### How are recursive functions stored in memory?
Because the recursive function adds to the stack with each recursive call and holds the items there until the call is done, recursion consumes additional memory. The recursive function, like the stack data structure, employs the LIFO (LAST IN FIRST OUT) structure.

### What is the base condition in recursion? 
```
int fact(int n)
{
    if (n < = 1) // base case
        return 1;
    else    
        return n*fact(n-1);    
}
```
In the above example, the base case for n < = 1 is defined and the larger value of a number can be solved by converting to a smaller one till the base case is reached.

### How a particular problem is solved using recursion? 
The goal is to break down an issue into one or more smaller problems and then add one or more base conditions to stop the recursion. For example, if we know the factorial of, we can compute factorial n. (n-1). The factorial base case would be n = 0. When n = 0, we return 1.
