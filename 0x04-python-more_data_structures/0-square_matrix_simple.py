#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    if not matrix:
        return None
    if (isinstance(matrix, list)):
        pass
    else:
        return None
    tmp, new = [], []
    for row in matrix:
        tmp = list(map(lambda x : x**2, row))
        new.append(tmp)
    return new
