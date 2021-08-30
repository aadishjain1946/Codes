sitting_list = [10, 30, 20, 70, 11, 15, 22, 16, 58, 100, 12, 56, 70, 80]
#splitting the above list into two list containing elements
#1. At even indices
#2. At odd indices
even_ind = []
odd_ind = []
for i in range(len(sitting_list)):
    if i%2 == 0:
        even_ind.append(sitting_list[i])
    else:
        odd_ind.append(sitting_list[i])
#sorting list with even index element in ascending order
even_ind = sorted(even_ind)
#sorting list with odd index element in descending order
odd_ind = sorted(odd_ind,reverse=True)
result = []
i = 0
j = 0
k = 0
##merging both list into one list
while i < len(even_ind) and j < len(odd_ind):
    if k%2 == 0:
        result.append(even_ind[i])
        i+=1
    else:
        result.append(odd_ind[j])
        j+=1
    k+=1
while i < len(even_ind):
    result.append(even_ind[i])
    i+=1
while j < len(odd_ind):
    result.append(odd_ind[j])
    j+=1
print(result)

