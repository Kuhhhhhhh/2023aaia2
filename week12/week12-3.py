#week12-3.py
table = [True]*240000
ans = 0
for i in range(2, 240000):
  if table[i]==True:
    ans += 1
    for k in range(i*i, 240000, i): table[k] = False #國王繼位後,把他的兄弟殺光光

print('找到',ans,'個質數')