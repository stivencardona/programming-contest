import math

m, n, t = [ int(x) for x in input().split(' ')]
INF = 10e9 + 1

def factorial(n):
    if n == 1:
        return 1
    return n * factorial(n - 1)

def get_operations(n, t):
    if t == 1:
        if n <= 12:
            return factorial(n)
        return INF
    if t == 2:
        if n <= 30:
            return 2**n
        return INF
    if t == 3:
        if n <= 177:
            return n**4
        return INF
    if t == 4:
        if n <= 1000:
            return n**3
        return INF
    if t == 5:
        if n <= 10000:
            return n**2
        return INF
    if t == 6:
        if n <= 4500000:
            return n * math.log2(n)
        return INF
    if t == 7:
        return n

if get_operations(n, t) <= m:
    print('AC')
else:
    print('TLE')