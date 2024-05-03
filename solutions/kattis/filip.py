[a, b] = [ int(x[::-1]) for x in input().split(' ')]

if a > b:
  print(a)
else:
  print(b)