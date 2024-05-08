#week12-2.py
n = int(input('請輸入1個數'))
def isPrime(n):
  for i in range(2,n):
    if n%i==0:
      return False
  return True #如果都沒有失敗,就是成功

for i in range(2,n+1):
  if isPrime(i): print(i, end=' ')