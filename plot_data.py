#!/usr/bin/env python3

import matplotlib
import matplotlib.pyplot as plt
import numpy as np

def main():
    f=open("./program.txt", "r")
    fl =f.readlines()
    ar =[]
    for x in fl:
      ar.append(list(map(int, x.rstrip().split()))) 
    plt.plot(ar[1],ar[0])
    plt.xlabel('some numbers')
    plt.ylabel('some numbers')
    plt.show()
 

if __name__== "__main__":
  main()