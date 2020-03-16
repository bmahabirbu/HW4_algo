#include <utility>
#include <vector>
#include <string>
#include "hw4.h"

using namespace std;

// (a)
int unsorted_mode(std::vector<int> v) {
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = i; j < v.size(); j++)
			if(v[j] ^ v[i] == 1)
			{
				return v[j];
			}

	}

	return NULL;
}

// (b)
int sorted_mode(std::vector<int> v) {

	for(int i = 0; i < v.size(); i++)
	{
		int j = i + 1;

		if(v[i] ^ v[j] == 1)
		{
			return v[i];
		}
	}

}

// (c)
std::pair<int, int> unsorted_closest_integers(std::vector<int> v) {
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++)
	{
		int j =  + 1;
		
		if (j == v.size()) //edge case 
		{
			j = 1 - v.size();
		}

		if (abs(v[i] - v[j]) == 1) //edge case
		{
			return make_pair(v[i], v[j]);
		}

		
	}
	
	return make_pair(v[i], v[j]);
}
	

// (d)
std::pair<std::pair<int, int>, std::pair<int, int>>

unsorted_closest_coordinates(std::vector<std::pair<int, int>> v) {
	// ...
	// your code here
	// ...
	return std::make_pair(std::make_pair(0, 0), std::make_pair(0, 0)); // you will need to change this
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