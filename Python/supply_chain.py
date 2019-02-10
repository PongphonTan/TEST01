L = [800]
T = [0]
D = [800, 725, 630, 500, 645, 690, 730, 810, 1200, 980, 0]
for i in range(0,10):
    L.append(round(0.3*D[i+1]+0.7*(T[i]+L[i]), 3))
    T.append(round(0.2*(L[i+1]-L[i])+0.8*T[i], 3))
print(L, "\n", T)