#!/usr/bin/python3

def magic_calculation(a, b):
    """import dis

    Usage:
    dis.dis(magic_calculation)
    """
    from magic_calculation_102 import add, sub

    if a < b:
        c = add(a, b)

        for i in range(4, 6):
            c = add(c, i)
        return c
    else:
        return sub(a, b)
