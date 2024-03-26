# get_next_line

## Description

  Get Next Line (GNL) is a function designed to read a line from a file descriptor, one line at a time, without losing 
  the reading thread. This project is a fundamental part of learning file manipulation and dynamic memory allocation 
  in C programming. GNL allows users to read content from various file descriptors such as standard input, files, or 
  even network sockets.

## Features

  Reads a line from a given file descriptor
  Handles multiple file descriptors simultaneously
  Works with any buffer size specified by the user
  Supports reading from files, standard input, or other file descriptors


## Usage
  To use the Get Next Line function in your project:
  
    1-Clone this repository to your local machine.
    2-Include the get_next_line.h header file in your project.
    3-Call the get_next_line() function in your code, passing the file descriptor and a pointer to a character pointer
      as arguments. 
    4-Repeat the function call until it returns 0 (end of file), -1 (error), or 1 (line read successfully).


### A short main example how to callit in a c file

    #include "get_next_line.h"
    int main(void) {
      int fd;
      char *line;
  
      fd = open("example.txt", O_RDONLY);
      while (get_next_line(fd, &line)) {
          printf("%s\n", line);
          free(line);
      }
      close(fd);
  
      return (0);
  }


## Parameters

    int fd: The file descriptor from which to read.
    char **line: A pointer to a pointer that will be used to store the line read from the file descriptor.


## Return Value

    1 if a line has been read.
    0 if the end of file has been reached.
    -1 if an error occurred.


## Author

  Erik Seferi


## License

  This project is licensed under the MIT License.
