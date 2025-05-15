# my_echo

A simple implementation of the `echo` command that displays lines of text.

## Features

- Prints all command-line arguments
- Adds spaces between arguments
- Includes help option (--help)
- Uses low-level write syscall

## Usage

```bash
./my_echo [STRING]...
./my_echo --help
```

## Example

```bash
./my_echo Hello World
# Output: Hello World
```
