//Beautiful Year, solved 2/12/14
//http://codeforces.com/problemset/problem/271/A

n = input() + 1
while len(set(str(n))) < 4:
    n+=1
print n
