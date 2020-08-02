import time

print("\n10^4")
start = time.time()
for i in range(0, 10000):
    m = i
end = time.time()
print(i)
print(end - start)

print("\n10^5")
start = time.time()
for i in range(0, 100000):
    m = i
end = time.time()
print(i)
print(end - start)

print("\n10^6")
start = time.time()
for i in range(0, 1000000):
    m = i
end = time.time()
print(i)
print(end - start)

print("\n10^7")
start = time.time()
for i in range(0, 10000000):
    m = i
end = time.time()
print(i)
print(end - start)

print("\n10^8")
start = time.time()
for i in range(0, 100000000):
    m = i
end = time.time()
print(i)
print(end - start)

