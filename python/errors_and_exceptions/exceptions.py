# You are given two values a and b.
# Perform integer division and print a / b.
# In the case of ZeroDivisionError or ValueError, print the error code.
#
# Sample input:
# 3 <- num of cases
# 1 0
# 2 $
# 3 1
#
# Sample output:
# Error Code: integer division or modulo by zero
# Error Code: invalid literal for int() with base 10: '$'
# 3


if __name__ == '__main__':
    t = int(input()) # test cases

    for i in range(0, t):
        try: 
            a, b = map(int, input().split())
        except ValueError as E:
            print("Error Code:", E)
        else:    
            try:
                print(a // b)
            except ZeroDivisionError as E:
                print("Error Code:", E)
