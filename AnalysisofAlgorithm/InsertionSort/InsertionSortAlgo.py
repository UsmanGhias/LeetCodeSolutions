# Function to do insertion sort
def insertionSort(arrayIS):

	for i in range(1, len(arrayIS)):

		key = arrayIS[i]
		j = i-1
  
		while j >= 0 and key < arrayIS[j] :
			arrayIS[j + 1] = arrayIS[j]
			j = j - 1
		arrayIS[j + 1] = key


# Driver code to test above
arrayIS = [78, 76, 2, 87, 4,43,78, 11, 90, 1]
insertionSort(arrayIS)
for i in range(len(arrayIS)):
	print ("% d" % arrayIS[i])




