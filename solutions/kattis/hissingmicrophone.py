import re

x = input()
ans = re.search("[a-z]*ss[a-z]*", x)
if ans:
  print("hiss")
else:
  print("no hiss")
