# my_pwd

A simple implementation of the `pwd` command.  
Prints the current working directory.

## Build

```sh
gcc my_pwd.c -o my_pwd
```

## Usage

```sh
./my_pwd
```

## Example Output

```bash
/home/user/current/directory
```

## Implementation Details

The program uses the POSIX `getcwd()` function to retrieve the current working directory path. Memory is dynamically allocated and properly freed after use.
