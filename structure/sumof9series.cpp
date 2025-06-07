#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the sum of the series
    int sumSeries(int n) 
    {
    int sum = 0;
    int term = 9;
  

    for (int i = 0; i < n; i++) 
    {
        cout<<term<<" ";
        sum =sum+ term;
        term = term * 10 + 9; // Generate the next term
    
    }
    cout<<endl;
    return sum;
}

int main() {
    int n;

    // Input number of terms from the user
    cout << "Enter the number of terms: ";
    cin >> n;

    // Calculate and print the sum of the series
    cout << "the sum of series: " << sumSeries(n) << endl;

    return 0;
}