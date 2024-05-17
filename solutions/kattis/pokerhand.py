freq = {}
vals = input().split(' ')

for val in vals:
  key = val[0]
  if key in freq:
    freq[key] += 1
  else:
    freq[key] = 1
    
ans = 0

for val in freq.values():
  ans = max(ans, val)
  
print(ans)