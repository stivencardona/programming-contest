def game(p1, p2, s1, s2, r1, r2):
  if p1 == p2:
    return 'Tie.'
  if p1 == 21:
    return 'Player 1 wins.'
  if p2 == 21:
    return 'Player 2 wins.'
  if s1 == s2 and r1 != r2:
    return 'Player 1 wins.'
  if s1 != s2 and r1 == r2:
    return 'Player 2 wins.'
  if p1 > p2:
    return 'Player 1 wins.'
  return 'Player 2 wins.'



[ s1, s2, r1, r2 ] = map(int, input().split(' '))
while s1 and s2 and r1 and r2:
  p1 = max(s1, s2) * 10 + min(s1, s2)
  p2 = max(r1, r2) * 10 + min(r1, r2)
  print(game(p1, p2, s1, s2, r1, r2))
  [ s1, s2, r1, r2 ] = map(int, input().split(' '))