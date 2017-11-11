n = input().split()
n = [int(x) for x in n]

for_new = n[2]
total = n[0] + n[1]
count = int(total / for_new)
rem = (total % for_new) + count

while rem >= for_new:
  rem_new = int(rem / for_new)
  count += rem_new
  rem = (rem % for_new) + rem_new

print(count)
  