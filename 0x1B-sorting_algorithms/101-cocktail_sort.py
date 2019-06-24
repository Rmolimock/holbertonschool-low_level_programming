#!/usr/bin/env python3
'''Cocktail sorting algorithm implemented in python3
'''

def cocktail_sort(array):
    unsorted = True
    pos = 0
    while (unsorted):
        unsorted = False
        for i in range(1, len(array)):
            if array[i] < array[i - 1]:
                unsorted = True
                tmp = array[i]
                array[i] = array[i - 1]
                array[i - 1] = tmp
                print(array)
                pos = i
        for n in range(pos, 1, -1):
            if array[n] < array[n - 1]:
                unsorted = True
                tmp = array[n]
                array[n] = array[n - 1]
                array[n - 1] = tmp
                print(array)
if __name__ == "__main__":
    array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
    cocktail_sort(array)
