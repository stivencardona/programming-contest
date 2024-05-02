t = int(input())

while t:
  l = input()
  if l == "P=NP":
    print("skipped")
  else:
    [a, b] = map(int, l.split('+'))
    ans = a + b
    print(ans)
  t -= 1