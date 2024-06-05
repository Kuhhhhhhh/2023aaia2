#week16-1a ªº»²§U±`ÃÑ collections.Counter
import collections
words = ["bella","label","roller"]
for i in range(3):
  counter = collections.Counter(words[i])
  print(words[i],counter)
ans = collections.Counter(words[0]) &collections.Counter(words[1]) &collections.Counter(words[2])
print(ans)
