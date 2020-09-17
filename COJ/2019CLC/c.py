import math
import matplotlib.pyplot as plt
x = [0.1*n for n in range(0,100)]
a = [math.exp(x[i]) for i in range(0,100)]

plt.plot(x,a)

print math.atan(1)