# My Unix Utils

A collection of simple Unix command implementations written in C.

## Utilities

- [my_cat](./my_cat): Display file contents
- [my_cp](./my_cp): Copy files
- [my_echo](./my_echo): Display text
- [my_mv](./my_mv): Move or rename files and directories
- [my_pwd](./my_pwd): Print working directory

Each utility has its own directory containing:
- Source code (*.c)
- README with usage instructions and implementation details
- Executable binary (after building)

## Building

Each utility can be built individually. Navigate to the utility's directory and run:

```bash
gcc <utility_name>.c -o <utility_name>
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.