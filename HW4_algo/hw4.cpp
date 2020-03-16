//https://www.geeksforgeeks.org/find-the-largest-pair-sum-in-an-unsorted-array/
#include <utility>
#include <vector>
#include <string>
#include "hw4.h"

using namespace std;

// (a)
int unsorted_mode(std::vector<int> v) {
	for(int i = 0; i < v.size(); i++) //nested for loop 
	{
		for(int j = i; j < v.size(); j++)
			if(v[j] ^ v[i] == 1) //bit wise xor to find mode
			{
				return v[j];
			}

	}

	return NULL;
}

// (b)
int sorted_mode(std::vector<int> v) {

	for(int i = 0; i < 1-v.size(); i++)
	{
		
		int j = i + 1;
		
		if(v[i] ^ v[j] == 1) //we know that if the vector is sorted the reoccuring values are next to each other
		{
			return v[i];
		}
	}

}

// (c)
std::pair<int, int> unsorted_closest_integers(std::vector<int> v) {
	
	int min = INT_MAX, min2 = INT_MAX; //set to random values for initial run
	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < min) 
		{ //find the first min value

			min2 = min;

			// Update minimum 
			min = v[i];
		}

		else if ((v[i] < min2) && v[i] != min)
		{//find second min value

			// Update secondMin 
			min2 = v[i];
		}
	

		
	}
	
	return make_pair(min, min2);
}
	

// (d)
std::pair<std::pair<int, int>, std::pair<int, int>>

unsorted_closest_coordinates(std::vector<std::pair<int, int>> v) {
	int mindis = INT_MAX, min2dis = INT_MAX;
	pair<pair<int, int>, pair<int, int>> minpair;
	for (int i = 0; i < 1 - v.size(); i++)
	{
		int j = i + 1;

		int x = get<0>(v[i]);
		int y = get<1>(v[i]);
		int x2 = get<0>(v[j]);
		int y2 = get<1>(v[j]);

		if (sqrt(pow((x2 - x), 2) + pow((y2 - y), 2)) < mindis) //check for smallest value
		{ //find the first min value

			min2dis = mindis;

			// Update minimum 
			minpair = make_pair(v[i], v[j]); //update pair if value is small
		}


	}
	return minpair; // you will need to change this
}

// (e)
void flip_sort(std::vector<int> &v) {
	// ...
	// your code here
	// ...
}

// (f)
void peak_valley_sort(std::vector<int> &v) {
	// ...
	// your code here
	// ...
}

// (g)
void length_alpha_sort(std::vector<std::string> &v) {
	// ...
	// your code here
	// ...
}