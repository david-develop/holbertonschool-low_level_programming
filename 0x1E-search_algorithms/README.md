### Search Algorithms

## General Learning Objectives:

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Files:
- 0-linear.c - function that searches for a value in an array of integers using the Linear search algorithm
- 1-binary.c - function that searches for a value in a sorted array of integers using the Binary search algorithm
- 2-O - time complexity (worst case) of a linear search in an array of size n
- 3-O - space complexity (worst case) of an iterative linear search algorithm in an array of size n
- 4-O - time complexity (worst case) of a binary search in an array of size n
- 5-O - space complexity (worst case) of a binary search in an array of size n
- 6-O - space complexity of this function:
```
int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}
	return (map);
}
```
- 100-jump.c - function that searches for a value in a sorted array of integers using the Jump search algorithm
- 101-O - time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)
- 102-interpolation.c - function that searches for a value in a sorted array of integers using the Interpolation search algorithm
- 103-exponential.c - function that searches for a value in a sorted array of integers using the Exponential search algorithm
- 104-advanced_binary.c - function that searches for a value in a sorted array of integers.
- 105-jump_list.c - function that searches for a value in a sorted list of integers using the Jump search algorithm.
- 106-linear_skip.c -  function that searches for a value in a sorted skip list of integers.
- 107-O - time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)
- 108-O - time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)
