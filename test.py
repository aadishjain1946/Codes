import math
def distance(x,y):
    output = math.sqrt((x*x) + (y*y))
    return round(2* output,2)

out = distance(10,15)
print("Output for x = 10, y = 15:",out)
