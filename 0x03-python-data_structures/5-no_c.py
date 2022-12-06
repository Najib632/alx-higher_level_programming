#!/usr/bin/python3
def no_c(my_string):
    cur_string = my_string.translate({ord(i): None for i in 'cC'})
    return cur_string
