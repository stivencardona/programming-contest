t = int(input())

while t:
  n = int(input())
  memo = []
  ans = 0
  while n:
    inst = input()
    if inst == 'LEFT':
      memo.append(-1)
    elif inst == 'RIGHT':
      memo.append(1)
    else:
      idx = int(inst.split(' ')[2])
      memo.append(memo[idx - 1])
    n -= 1
  for i in memo:
    ans += i
  print(ans)
  t -= 1