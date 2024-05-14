import sys

def is_operator(char):
  if char in ['*','/','-','+','(',')']:
    return True
  return False

def to_posfix(expression):
  stack = []
  new_expression = ''
  for char in expression:
    if not is_operator(char):
      new_expression += char
    else:
      if char == '(':
        stack.append(char)
      
      if char == ')':
        curr = stack.pop()
        while curr != '(':
          new_expression += curr
          curr = stack.pop()

      if char == '*' or char == '/':
        while len(stack):
          curr = stack.pop()
          if curr == '/' or curr == '*':
            new_expression += curr
          else:
            stack.append(curr)
            break
        stack.append(char)

      if char == '+' or char == '-':
        while len(stack):
          curr = stack.pop()
          if curr != '(':
            new_expression += curr
          else:
            stack.append(curr)
            break
        stack.append(char)

  while len(stack):
    curr = stack.pop()
    new_expression += curr
  
  return new_expression

lines = sys.stdin.readlines()
stack = []
expression = ""
for line in lines[2:]:
  if line == '\n':
    print(to_posfix(expression))
    print()
    expression = ""
  else:
    expression += line[0] if len(line) == 2 else line

if len(expression):
  print(to_posfix(expression))
