<!-- GETTING STARTED -->
## My_readline
### Task Description

The function my_readline reads a line from the stream represented by fd and returns it into an allocated string. It stops when either the newline character is read or when the end-of-file is reached, whichever comes first. The newline character is not copied to the string.

On success, a pointer to the string is returned. On error, a null pointer is returned. If the end-of-file occurs before any characters have been read, the string remains unchanged.

Number of characters read will be set by the define READLINE_READ_SIZE
You are allowed to maximum one static. Be ready, we will change the value of READLINE_READ_SIZE.

### Program Usage

1. Edit the file.txt file with one newline after text ito input to my_readline() function before compilation or edit code as per comments to change input to standard input for after compilation. From the terminal move to "my_readline" directory and type "make" to compile the program. READLINE_READ_SIZE can also be set to any value and the code will still function with the variable buffer size. 

   ```sh
   make
   ```
2. You can then run the program with "./my_readline" and either input string to output with the function or standalone with the string to read in the program. 

   ```sh
   e.g './my_readline "here is my input string"
        ./my_readline
   ```

3. You can clean up '.o' files by typing the following command after usage
    ```sh
   'make clean'
   ```
