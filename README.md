c-experiments
===============

https://github.com/rsp/c-experiments

Some experiments with C.

Currently this is GCC-specific.

This is still work in progress and is not finished yet.

Prerequisites
-------------
* make
* gcc
* possibly more...

It should work on any standard Linux/Unix distribution. If it doesn't,
please [sumbit an issue](https://github.com/rsp/c-experiments/issues).

It was written and tested on Ubuntu 14.04.

Experiments
-----------

### binary-size

Testing different tricks to see how they help reduce the binary size of C programs.
This is inspired by [How to create 4KB Linux
binaries](https://stackoverflow.com/questions/10551665/how-to-create-4kb-linux-binaries)
on Stack Overflow and especially [this
answer](https://stackoverflow.com/questions/10551665/how-to-create-4kb-linux-binaries#10552160)
by [Sebastian Mach](https://github.com/phresnel)
where he explains the GCC options that he used in
[ntropy2007](http://phresnel.org/gpl/4k/ntropy2k7/), a 4k flame fractal renderer,
to make the binary smaller.

Author
------
Rafał Pocztarski - https://github.com/rsp

License
-------
MIT License (Expat). See [LICENSE.md](LICENSE.md) for details.
