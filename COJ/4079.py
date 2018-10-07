import sys

R,S = map(float, sys.stdin.readline().split())
N = int(sys.stdin.readline())
anw = 0
for i in range(0, N):
  F = float(sys.stdin.readline())
  diff = (R-F) / S
  anw+= diff

anw+= 2*N
print("{0:.4f}".format(anw))
