#include <iostream>
#include <vector>

using namespace std;
//With help from Christopher Youngclaus

// -------------- Design Merge class here ---------------
// -----------------------------------------------------------
// Use template class for Merge class ,i.e., Merge<datatype> objectNName;
// No private/public variable or data member
//  No need for constructor
// Write the following functions:
// - merge function that take vector of vector
//   - write code that solve the problem of merging intervals that overlap
//   - implement exception handling for given (vector of vector) that have less than two intervals, e.g., [(1,2)] this is not accepted as input. because it has only one interval
//   - use error handling: try, throw, and catch
// - print function that print out intervals
// example of merging the following intervals: [(2,5),(1,4),(3,9),(20, 29),(7,16), (15, 27)];
//1   2   3   4   5   6   7   8   9   10  ...  15  16  17  18 ... 20 ... 27   28  29
//    *-----------*
//*-----------*
//        *-----------------------*
//                                                                 *----------------*
//                         *-------------------------*
//                                               *------------------------*
// The merge result wil be interval from 1 to 29
//*---------------------------------------------------------------------------------*

template <typename test> class Merge {
public:
    vector<vector<int>> merge(vector<vector<int>> original) {    //vector of vector (type int)
        //sorting the original
        vector<vector<int>> sorted;                 // new vector with the sorted variables, will be used to copy back into the original
        int originalSize = original.size();

        while (sorted.size() < originalSize) {       // keeps loop going until the original vector is empty
            int index = 0;                          // holds the index of the used vector to have erased from the original
            vector<int> temp = original[0];          // holder for first value from the original. will add ontop of temp with new inputs

            for (int i=0; i<original.size(); i++) {
                if ((original[i][0] + original[i][1]) < (temp[0] + temp[1])) {        // rather than looking for the lowest number, the element with the lowest added value is the next to be merged
                    temp = original[i];
                    index = i;
                }
            }
            original.erase(original.begin()+index);   // gets rid of the copied vector from the original
            sorted.push_back(temp);                 // adds a copied vector to sorted
        }

        // merging
        original = sorted;                           //the original is now sorted
        sorted.clear();                             // resetting the temp vector, wiping the sorted vector after copied to the original
        sorted.push_back(original[0]);

        for (int i = 1; i < original.size(); i++) {         //checking the first element of the original with the second element of the sorted. it will then merge
            if (original[i][0] <= sorted.back()[1]) {
                sorted.back()[1] = original[i][1];
            } else {
                sorted.push_back(original[i]);
            }
        }

        original = sorted;

        return original;
    }

    void print(vector<vector<int>> group) {
        cout << "{ ";
        for (auto &vec : group) {
            cout << "{" << vec[0] << "," << vec[1] << "} ";
        }
        cout << "} " << endl;
    }

};

int main() {

    vector<vector<int>> array1, array2, array3, array4;
    vector<vector<int>> ans;
    //Make object of Class Merge with template T used as int
    Merge<int> s;

    array1 = {{2,5},{1,4},{3,9},{20, 29},{7,16}, {15, 27}};
    array2 = {{1,3},{2,6},{8,10},{15,18}};
    array3 = {{2,5},{6,10},{15,20},{30,31}};
    array4 = {{1,4}};

    // Merge first array and print
    cout << "array 1 after merge: \n";
    ans = s.merge(array1);
    s.print(ans);

    // Merge second array and print
    cout << "\narray 2 after merge: \n";
    ans = s.merge(array2);
    s.print(ans);

    // Merge third array and print
    cout << "\narray 3 after merge: \n";
    ans = s.merge(array3);
    s.print(ans);

    // Merge forth array and print
    cout << "\narray 4 after merge: \n";
    ans = s.merge(array4);
    s.print(ans);


    return 0;
}


