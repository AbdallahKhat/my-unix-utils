# my_mv

A simplified implementation of the `mv` command for moving or renaming files and directories.

## Features

- Move/rename single files
- Move multiple files to a directory
- Error handling for missing files/directories
- Validation of source and destination paths

## Usage

```bash
# Move/rename a single file
./my_mv source_file destination_file

# Move multiple files to a directory
./my_mv file1 file2 file3 destination_directory
```

## Error Handling

- Missing file operand
- Missing destination
- Non-existent source file
- Invalid destination directory
