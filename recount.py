vote_dict = {}

while True:
  vote = input()
  if vote == "***":
    break
  
  if vote not in vote_dict:
    vote_dict[vote] = 1
  else:
    vote_dict[vote] += 1
    
max_vote = max(vote_dict, key=vote_dict.get)

for vals in vote_dict:
  if vals == max_vote:
    continue
  
  if vote_dict[vals] == vote_dict[max_vote]:
    print("Runoff!")
    exit(0)
  
print(max_vote)
  