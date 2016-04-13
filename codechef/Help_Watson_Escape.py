'''
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
'''
import math

def fast_power(x, y, z):
    "Calculate (x ** y) % z efficiently."
    number = 1
    while y!=0:
        if y & 1:
            number = number * x % z
        y >>= 1
        x = x * x % z
    return number

t = input()
i = 0
while i < t :
    n, k = raw_input().split()
    n = int(n)
    k = int(k)
    sum = fast_power(k-1,n-1,1000000007)
    sum = sum * k
    while sum >= 1000000007 :
        sum %= 1000000007
    print int(sum)
    i += 1
