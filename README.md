# Solution

compute.cpp reads up to 100 decimal values from standard input (one per line) and takes two
command-line arguments: threshold and limit.

For each input value:
1. Subtract threshold from it, clipped at 0 (values <= threshold produce 0).
2. Cap the result against the remaining room under the remaining limit. 
   Once the running total reaches limit, all further outputs are 0.

After processing all inputs, a final line is printed(summedResult). It will never exceed the limit.

All output is formatted to one decimal place, as required.

The solution was validated against all examples provided in the problem specification.

## Build

    ./compile

## Run

    ./compute <threshold> <limit> < input.txt>
