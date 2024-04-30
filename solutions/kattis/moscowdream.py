a, b, c, n = [ int(x) for x in input().split(' ')]

if( a >= 1 and b >= 1 and c >= 1 and a + b + c >= n and n >= 3 ):
  print('YES\n')
else:
  print('NO\n')