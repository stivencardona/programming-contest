n = int(input())

line_a = input()
input()
input()
line_d = input()
input()

i = 0
while i < len(line_a):
  if(line_a[i:i+4] == ".*.."):
    print(1, end="")
  elif(line_d[i:i+4] == "*..."):
    print(2, end="")
  else:
    print(3, end="")
  i += 4

print()