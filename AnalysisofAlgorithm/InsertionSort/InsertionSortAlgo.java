
public class InsertionSortALgo {

	void InsertionSortALgo(int arr[])
	{
		int n = arr.length;
		for (int i = 1; i < n; ++i) {
			int key = arr[i];
			int j = i - 1;

			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	static void printArray(int arr[])
	{
		int n = arr.length;
		for (int i = 0; i < n; ++i)
			System.out.print(arr[i] + " ");

		System.out.println();
	}

	// Driver method
	public static void main(String args[])
	{
		int arr[] = { 78, 75, 11, 1, 9, 76, 565, 23};

		InsertionSortALgo ob = new InsertionSortALgo();
		ob.InsertionSort(arr);

		printArray(arr);
	}
};

