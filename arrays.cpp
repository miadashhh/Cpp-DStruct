// write a program where you implement an array and write functions that can be done onto it: max min exists avg show( displaying the functions)
#include <iostream>
#include <string>

using namespace std;



// max fct >> searches through the array in order to find the max value
int max(const int v[], int n) {
	int max = v[0];
	for (int i = 0; i < n; i++) {
		if (v[i] > max) {
			max = v[i];
		}
		else {
			continue;
		}
	}
	cout << "The maximum value in the stored elements of the array is: " << max << endl;
	return max;
}



// min fct >> .  ...... min value
int min(const int v[], int n) {
	int min = v[0];
	for (int i = 0; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
		else {
			continue;
		}
	}

	cout << "The minimum value in the stored elements of the array is: " << min << endl;
	return min;
}




// sum fct>> computes the sum of all the elements in the given array

int sum(const int v[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s = s + v[i];
	}

	cout << "The sum of all of the elements stored in the array is: " << s << endl;
	return s;
}




// avg fct >> sums up all of the elements of the array and divides them by the number of elemnents in the array whuich is its size
double average(const int v[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s = s + v[i];
	}

	cout << "The average of the elements stored in the array is: " << s / n << endl;

	return s / n;
}



// add two arrays element wise 
void add(const int v1[], const int v2[], int v3[], int n) {
	for (int i = 0; i < n; i++) {
		v3[i] = v1[i] + v2[i];
	}
}

// mul an array by scalar element wise
void mul(int v1[], int k, int n) {
	for (int i = 0; i < n; i++) {
		v1[i] * k;
	}
}


// sub two arrays element wise
void sub(const int v1[], const int v2[], int v3[], int n) {
	for (int i = 0; i < n; i++) {
		v3[i] = v1[i] - v2[i];
	}
}

// isequal check equality of two arrays
bool isequal(const int v1[], const int v2[], int n) {
	for (int i = 0; i < n; i++) {
		if (v1[i] != v2[i]) // this is time saving as one instance of inequality will stop the program
			return false;
		return true;
	}
}


// reverse to reverse the elements of an array
void reverse(const int v1[], int v2[], int n) {
	for (int i = 0; i < n; i++) {
		int p = n - 1 - i;
		v2[p] = v1[i];
	}
}


// ispalindrome to check if the reverse of an array is the same as its original
bool ispalindrome(const int v1[], int v2[], int n) {
	reverse(v1, v2, n);

	return isequal(v1, v2, n);
}

 
// sort to sort out the elements of ana array smallest to biggest and vice versa   ( i made a swap funcion for this)
void swap(int& a, int& b) {
	int temp = a;                 // simple swap algo
	a = b;
	b = temp;
}
	
void sort(int v1[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;                // we set the first index to be the index of the min value of the array
		for (int j = i + 1; j < n; j++) {                // we check for the smallest element by comparing position i by its successor positiuon i + 1 which is j 
			if (v1[j] < v1[min])
				min = j;                // if the former value is bigger than the next value then we set the index min to j which is the index of the next element
		}
		if (min != i) {                        // if after the checking we see that the initial index i is no longer the one of the smallest element
			swap(v1[min], v1[i]);                // then we swap that index for the new value of min which is going to be the last j we are left with from the inner for
		}
	}


}


//exists fct >> after inputing an element, this fct checks whether the element is in the array or not

int exists(const int v[], int e, int n) {

	for (int i = 0; i < n; i++) {
		if (e == v[i]) {
			return 1;
		}
		else {
			return 0;
		}
	}


}




//show fct >> this display the array and its elements 

void show(string str, const int v[], int n) {
	cout << str << ": {";
	for (int i = 0; i < n; i++) {
		cout << v[i] << ",";
	}
	cout << v[n - 1] << "}" << endl;

}




int main() {



	int numbers[20] = { 1,  4,  5, 2, 8, 3, 10, 12, 3, 5, 6, 7, 9, 15, 20, 11, 17, 25, 18, 8 };

	show("Numbers", numbers, 20);

	cout << "\nMin is " << min(numbers, 20) << ", max is " << max(numbers, 20) <<
		", sum is " << sum(numbers, 20) << ", avg is " << average(numbers, 20) << ", ";

	int key = 25;

	if (exists(numbers, key, 20))
		cout << "value " << key << " is in the vector ";
	else
		cout << "value " << key << " is not in the vector";




	return 0;
}
