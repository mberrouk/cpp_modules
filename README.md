# CPP_MODULES

### Introduction to C++

**C++** is a programming language created by __Bjarne Stroustrup__ and his team at Bell Laboratories in 1979.

As the name implies, C++ was derived from the C language. __Bjarne 's__ goal was to add object-oriented programming into C.
	
 	- Why Use C++ :
		- Is one of the world's most popular programming languages.
		- Is an object-oriented programming languge which gives a clear structure to programs and allows code to be reused, lowering development costs.
		- Is portable and can be used to develop applications that can be multiple platforms.
	
	- Difference between C and C++ :
		- C++ was developed as an extension of C, and both languages have almost the same syntax.
		- The main Difference between C and C++ support classes and objects, while C does not.

### HELLO WORLD !

	- C++, like most programming languge, runs line by line, from top to bottom.

	- Here is the structure of a C++ program:

				```
					#include <iostream>
							// ^---> Include libraries

					int		main()
					{		//^---> The main function
				//	^
				//	|---> The beginning of function


						std::cout << "Hello World!\n";
						// What the program does


					}
				//	^
				//	|---> End of function
					
				```
		
		* `#include <iostream>` This is know as a pre-processor directive. It instructs the compiler to locate the file that contains code for a library known as `iostream`.
		This library contains code that allows for input and output, such as displaying data in the terminal window or reading input from your keyboard.

		* `std::cout` is the __charcacter output stream__. It is pronounced "see-out".
		
		* `<<` is an operator that comes right after it.
		
		* `"Hello World!\n"` is what's being outputted here. You need double quots around text. The `\n` is a special charcacter that indicates a new line.
		
		* `;` is a punctuation that tells the computer that your are at the end of a statement. It is similar to a period in a sentnce.

		* `//` is for a comment. The compiler will ignore everything after `//` to the end of the line.
