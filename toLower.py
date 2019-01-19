pt = input().split()
p, t = int(pt[0]), int(pt[1])

cases_solved = 0
for i in range(p):
  check = False
  for j in range(t):
    in_str = input()
    if not in_str[1:].islower():
      check = True

  if not check:
    cases_solved += 1

print(cases_solved)
