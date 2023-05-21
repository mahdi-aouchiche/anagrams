# ANAGRAMS

> Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/anagrams>)

## Overview

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

* Given a vector of words, put and print all anagrams next to each other.

> Note: Enter any words in the main vector to see all anagrams of the given words

`Example`:  
  Given vector vec = {"code", "viles", "evil", "save", "war", "coed", "elvis", "doce", "live", "lives", "raw", "vile", "vase" }  
  There are 11 anagrams words that can be formed from the above vector which are:  
  01 code   -  coed  
  02 code   -  doce  
  03 coed   -  doce  
  04 elvis  -  lives  
  05 elvis  -  viles  
  06 evil   -  live  
  07 evil   -  vile  
  08 live   -  vile  
  09 lives  -  viles  
  10 raw    -  war  
  11 save   -  vase  

### To run the project nicely use the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

### 1 executable is created, use one of the commands to run the executable

```c++
./build/anagrams
```
