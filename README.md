# text_editor

This program uses an STL stack of characters to process a line of text in the manner of a text editor.
In a loop, it reads a single character at a time from a stream of characters until the file’s end is reached.
It reads each character and makes a decision to push or pop or clear the stack. 

If the current character is #, the program pops the stack; 
If the current character is $, it reads the next character and pushes that onto the stack; 
If the current character is @, it pops all the elements off the stack; 
Otherwise, it pushes the current character onto stack.

Finally, the program reverses the contents of the stack by copying it to another stack and 
prints out the residual string with the original ordering of letters.
