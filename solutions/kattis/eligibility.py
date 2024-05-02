t = int(input())

while t:
  [n, s, b, c] = input().split(' ')
  [ ys, ms, ds] = map(int, s.split('/'))
  [ yb, mb, db] = map(int, b.split('/'))
  c = int(c)
  if ys >= 2010:
    print(f'{n} eligible')
  elif yb >= 1991:
    print(f'{n} eligible')
  elif c >= 41:
    print(f'{n} ineligible')
  else:
    print(f'{n} coach petitions')
  t-=1