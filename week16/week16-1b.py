week16-1b
from collections import Counter
words = ["bella","label","roller"]
for i in range(3):
  counter = Counter(words[i])
  print(words[i],counter)
ans = Counter(words[0]) &Counter(words[1]) &Counter(words[2])
print(ans)
