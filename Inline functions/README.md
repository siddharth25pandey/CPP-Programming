# Inline Functions
One of the most essential features of C++ is the inline function. So, first, let's look at why inline functions are utilised and what their purpose is.
> When the programme executes the function call instruction, the CPU saves the memory location of the instruction that follows the function call, copies the function's arguments to the stack, and ultimately transfers control to the designated function. After executing the function code, the CPU saves the function return value in a designated memory location/register and returns control to the caller function. This can be considered overhead if the function's execution time is shorter than the switching time from the caller function to the called function (callee).
> For big and/or sophisticated routines, the overhead of the function call is generally minor in comparison to the length of time the function takes to operate. However, for short, often-used functions, the time required to make the function call is frequently far more than the time required to execute the function's code. This cost exists for short functions since their execution time is smaller than their switching time.
> Inline functions are provided by C++ to decrease function call overhead. An inline function is one that is expanded in line when invoked. When an inline function is invoked, its whole code is inserted or substituted at the point of inline function call. At compilation time, the C++ compiler does this replacement. If the inline function is tiny, it may boost efficiency.
##### The following is the syntax for declaring the function inline:
```
inline return-type function-name(parameters)
{
    // function code
}  
```
Keep in mind that inlining is really a request to the compiler, not a command. The request for inlining might be ignored by the compiler. In the following cases, the compiler may refuse to execute inlining:
1) If a function has a loop. (while, for a while)
2) If there are static variables in a function.
3) Whether or not a function is recursive.
4) If a function's return type is not void and the return statement is missing from the function body.
5) If there is a switch or goto statement in a function.

## The following benefits are provided by inline functions:
1) There is no function call overhead.
2) It also eliminates the overhead of pushing and popping variables on the stack when the function is invoked.
3) It also avoids the overhead of a function return call.
4) When you inline a function, you may instruct the compiler to conduct context-specific optimization on the function body. Normal function calls do not allow for such improvements. Other optimizations can be realised by taking into account the fluxes of the calling and called contexts.
5) Inline functions (if tiny) may be advantageous for embedded devices since they produce less code than function call preamble and return.

## The downsides of inline functions are as follows:
1) The new variables from the inlined function occupy more registers, If the number of variables that will utilise the register rises after inlining, they may impose overhead on register variable resource usage. This implies that when the inline function body is substituted at the function call, the entire number of variables utilised by the function is also added. As a result, the number of registers required for variables will be raised. So, if variable numbers grow dramatically after function inlining, there will undoubtedly be an increase in register consumption.

2) If you employ too many inline functions, the size of the binary executable file will be huge due to code duplication.

3) Excessive inlining can limit your instruction cache hit rate, decreasing the speed of instruction retrieve from cache memory to primary memory.

4) Inline functions may raise compilation time overhead if the code within the inline function is changed, then all the calling locations must be recompiled since the compiler would need to rewrite all the code once again to reflect the changes, else it would continue to work as before.

5) Inline functions may be ineffective in many embedded systems. Because code size is more essential than speed in embedded devices.

## The following programme shows how to utilise the inline function:
```
#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	return 0;
} //Output: The cube of 3 is: 27
```

6) Inline functions may cause thrashing since they increase the size of the binary executable file. Thrashing in memory degrades computer performance.
