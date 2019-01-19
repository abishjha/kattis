import sys

def calculate(input_line):
    result = 0
    for i in range(0, len(input_line), 2):
        if input_line[i] not in word_dict:
            raise Exception('unknown')
        else:
            if i == 0:
                result = word_dict[input_line[i]]
            else:
                if input_line[i-1] == '+':
                    result += word_dict[input_line[i]]
                elif input_line[i-1] == '-':
                    result -= word_dict[input_line[i]]

    return list(word_dict.keys())[list(word_dict.values()).index(result)]
    

word_dict = {}

for inp in sys.stdin:
    inp = inp.split()
    
    if len(inp) == 1: # clear
        word_dict.clear()
    elif len(inp) == 3 and inp[0] != 'calc': # definition
        word_dict[inp[1]] = int(inp[2])
    else:
        inp = inp[1:]
        try:
            result = calculate(inp)
            print(' '.join(inp), result)
        except:
            print(' '.join(inp), 'unknown')
