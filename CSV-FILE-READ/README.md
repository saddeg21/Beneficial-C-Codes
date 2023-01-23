# CSV FILE READING/WRITING IN C PROGRAMMING LANGUAGE
Hello World
CSV stands for Comma Separated Values. The process of reading CSV can be broken down into two steps:

> Read a line -> L
> Split L by ,

Now, you have the values of the row.

## Reading a line
> we use fgets() from string.h.

## Tokenizing
Tokenizing is the processing of splitting a string by any given character, in our case we want to split it by ,.

> we use strtok() from string.h

## Writing into a file
There are two ways to write into a file in C.
- Append into file (a)
- Clear the file and write from scratch (w)

### fprintf
We can use **fprintf** function to emphasize how values should be formatted.
If we have number variable as integer and others as char array, then:

> fprintf(FILE_NAME,"%d,%s,%s,%s\n",number,str1,str2,str3);

With the newline character we can separate columns.