package main

import "fmt"

func binary_search(myList []int, item int) int {
	low := 0
	high := len(myList) - 1

	for low <= high {
		mid := (low + high) / 2
		guess := myList[mid]

		if guess == item {
			return mid
		} else if guess > item {
			high = mid - 1
		} else {
			low = mid + 1
		}
	}

	return -1
}

func main() {
	myList := []int{1, 3, 5, 7, 9}
	fmt.Println(binary_search(myList, 3))  // 1
	fmt.Println(binary_search(myList, -1)) // -1
}
