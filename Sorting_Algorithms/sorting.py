def bubbleSort(arr):
	for i in range(len(arr)-1, 0, -1):
		for j in range(i):
			if arr[j] > arr[j+1]:
				arr[j], arr[j+1] = arr[j+1], arr[j]
	return arr


def selectionSort(arr):
	for i in range(len(arr)-1):
		minIndex = i
		for j in range(i+1, len(arr)):
			if arr[j] < arr[minIndex]:
				minIndex = j
		if i != minIndex:
			arr[i], arr[minIndex] = arr[minIndex], arr[i]
	return arr


def insertionSort(arr):
        for i in range(1, len(arr)):
                temp = arr[i]
                j = i-1
                while temp < arr[j] and j > -1:
                        arr[j+1] = arr[j]
                        arr[j] = temp
                        j -= 1
        return arr


arr = [3, 6, 1, 9, 5, 8, 2, 7, 4]

sorted1 = bubbleSort(arr)
print(sorted1)

sorted2 = selectionSort(arr)
print(sorted2)

sorted3 = insertionSort(arr)
print(sorted3)
