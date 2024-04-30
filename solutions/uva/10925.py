c = 1
while True:
  n, f = map(int, input().split())
  if n == 0 and f == 0:
    break
  sum = 0
  while n:
    n -= 1
    sum += int(input())
  
  print(f"Bill #{c} costs {sum}: each friend should pay {sum//f}\n")
  c += 1