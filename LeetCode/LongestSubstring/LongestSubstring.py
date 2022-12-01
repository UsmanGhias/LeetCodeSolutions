#Check repetion
def Repetion(str, i, j):

	# Note : Default values in visited are false
	visited = [0] * (26)

	for k in range(i, j + 1):
		if (visited[ord(str[k]) -
				ord('a')] == True):
			return False
			
		visited[ord(str[k]) -
				ord('a')] = True

	return True


def LengthofLS(str):
	
	n = len(str)
	
	# Result
	res = 0
	
	for i in range(n):
		for j in range(i, n):
			if (Repetion(str, i, j)):
				res = max(res, j - i + 1)
				
	return res

# Driver code
if __name__ == '__main__':
	
	str = "CodewithUsmanGhias"
	print("The input is ", str)
	
	length = LengthofLS(str)
	print("The length of the longest non-repeating character substring is ", length)


