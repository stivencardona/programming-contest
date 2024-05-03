import math

[p,a,b,c,d,n] = map(float, input().split(' '))

def price(k):
  return p * (math.sin(a * k + b ) + math.cos(c * k + d) + 2)


for i in range(int(n)):
  print(price(i + 1))