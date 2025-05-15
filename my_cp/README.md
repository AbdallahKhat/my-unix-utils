# my_cp

A simple implementation of the `cp` command for copying files.

## Features

- Copies file contents using buffer
- Creates destination file if it doesn't exist
- Sets appropriate file permissions (0644)
- Error handling for file operations

## Usage

```bash
./my_cp source_file destination_file
```

## Implementation Details

- Implements low-level file operations (open, read, write)
- Proper file descriptor management
