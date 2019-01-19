init_input = input().split()
l = int(init_input[0])
d = int(init_input[1])
birds = []

for i in range(int(init_input[2])):
    birds.append(int(input()))

result = 0
if int(init_input[2]) == 0:
    result = (l - 6) // d
    #if l-6 % d <= 6:
    #    result += 1

#for i in range(birds):
    

print(result)