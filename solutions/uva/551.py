import sys

for line in sys.stdin.readlines():
  if line[len(line) - 1] == '\n':
    line = line[:-1]
  stack = []
  i = 0
  j = 1
  stop = False
  while i < len(line) and not stop:
    if line[i] == '{' or line[i] == '[' or line[i] == '<':
      stack.append((line[i], j))
    elif line[i] == '(':
      if i + 1 < len(line) and line[i + 1] == '*':
        stack.append(('(*', j))
        i += 1
      else:
        stack.append((line[i], j))
    
    elif line[i] == '}':
      if len(stack):
        curr = stack.pop()
        if curr[0] != '{':
          print(f"NO {j}")
          stop = True
      else:
        print(f"NO {j}")
        stop = True
    
    elif line[i] == '>':
      if len(stack):
        curr = stack.pop()
        if curr[0] != '<':
          print(f"NO {j}")
          stop = True
      else:
        print(f"NO {j}")
        stop = True
    
    elif line[i] == ']':
      if len(stack):
        curr = stack.pop()
        if curr[0] != '[':
          print(f"NO {j}")
          stop = True
      else:
        print(f"NO {j}")
        stop = True
    
    elif line[i] == ')':
      if len(stack):
        curr = stack.pop()
        if curr[0] != '(':
          print(f"NO {j}")
          stop = True
      else:
        print(f"NO {j}")
        stop = True
    
    elif line[i] == '*' and i + 1 < len(line) and line[i + 1] == ')':
        i += 1
        if len(stack):
          curr = stack.pop()
          if curr[0] != '(*':
            print(f"NO {j}")
            stop = True
        else:
          print(f"NO {j}")
          stop = True

    i += 1
    j += 1
  
  if not stop:
    if len(stack):
      curr = stack.pop()
      print(f"NO {j}")
    else:
      print('YES')
