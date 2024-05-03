while True:
  ans = 1
  n = input()
  if n == 'END':
    break
  prev = n
  while True:
    n = str(len(n))
    if  prev == n:
      break
    prev = n
    ans += 1
  print(ans)