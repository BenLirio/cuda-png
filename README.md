# Viz

Viz is a command line tool that converts a stream of numbers into either an image or animation.

## Installation

```bash
./install.sh
```

## Usage
**viz** requires a data, a list of numbers, to be piped into it.
Then, by using the flags, you can specify how to interpret the data.


```bash
$ clang img_gen.c -o img_gen
$ ./img_gen | viz
```