def partition(arr, s, e):
pivot = arr[s]
cnt = 0
for i in range(s+1, e+1):
if arr[i] <= pivot:
cnt += 1
pivotIndex = s + cnt
arr[pivotIndex], arr[s] = arr[s], arr[pivotIndex]
i, j = s, e
while i < pivotIndex and j > pivotIndex:
while arr[i] <= pivot:
i += 1
while arr[j] > pivot:
j -= 1
if i < pivotIndex and j > pivotIndex:
arr[i], arr[j] = arr[j], arr[i]
i += 1
j -= 1
return pivotIndex
def quickSort(arr, s, e):
if s >= e:
return
p = partition(arr, s, e)
quickSort(arr, s, p-1)
quickSort(arr, p+1, e)
# Main Program
n = int(input("Enter the number of students: "))
if n <= 0:
print("Please enter a valid number of students.")
exit()
arr = []
print("Enter the percentage of students:")
for i in range(n):
ele = float(input())
arr.append(ele)
quickSort(arr, 0, len(arr) - 1)
print("Percentage of top 5 students are:")
for i in range(min(5, len(arr))):
print(arr[i])
