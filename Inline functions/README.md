One of the most essential features of C++ is the inline function. So, first, let's look at why inline functions are utilised and what their purpose is.
When the programme executes the function call instruction, the CPU saves the memory location of the instruction that follows the function call, copies the function's arguments to the stack, and ultimately transfers control to the designated function. After executing the function code, the CPU saves the function return value in a designated memory location/register and returns control to the caller function. This can be considered overhead if the function's execution time is shorter than the switching time from the caller function to the called function (callee).
For big and/or sophisticated routines, the overhead of the function call is generally minor in comparison to the length of time the function takes to operate. However, for short, often-used functions, the time required to make the function call is frequently far more than the time required to execute the function's code. This cost exists for short functions since their execution time is smaller than their switching time.
Inline functions are provided by C++ to decrease function call overhead. An inline function is one that is expanded in line when invoked. When an inline function is invoked, its whole code is inserted or substituted at the point of inline function call. At compilation time, the C++ compiler does this replacement. If the inline function is tiny, it may boost efficiency.
The following is the syntax for declaring the function inline:

///
inline return-type function-name(parameters)
{
    // function code
}  

///
