
k=0
for i in range (n):
    if(orange[i] <= pivot):
        orange[i],oranges[k] = oranges[k],oranges[i]
        k=k+i

   oranges[k], oranges[n-1] = oranges[n-1], oranges[k]
