#include <iostream>

using namespace std;

// -------------- Design Matrix class here ---------------
// -----------------------------------------------------------
// private variable and member function:
//  Variables number of rows, number of columns, type_double pointer to pointer m for the matrix (** m), you can use m[i_idx][j_idx]
//  You can use int or uint_32_t (unsigned) for number of rows and columns
//  Private member function, utility function:
//  This function set up the Matrix and create dynamic array pointer in row and each row point array of columns
//  Matrix(uint32_t rows, uint32_t cols) : rows(rows), cols(cols), m(new double*[rows]){
//  Write here your code
//  loop each pointer rows[idx] and for each row create array of size columns
//  }
// make the following functions
//  1. Constructor that take #of rows and #of columns and initial value for all elements
//     Matrix G(2, 2, 0) ===>
//                                 index_0  index_1
//                       index_0     0       0
//                       index_1     0       0
//  2. Copy constructor
//  3. Assign operator = for copy constructor
//     - use swap(new_matrix, original_matrix)
//  4. Deconstruct  ~Matrix: loop inside each pointer and delete it
//  5. Move constructor
//  6. Overload () operator twice:
//     - first: return_type is double and member function is const
//     - second: return_type is reference double and member function is not const
//  7. overload [] operator
//     - return_type double pointer
//  8. Overload << operator to print out matrix similar to:
//                            0   0
//                            0   0
class Matrix {
private:
    uint32_t rows;
    uint32_t columns;
    double **m;
    Matrix(uint32_t rows, uint32_t columns) : rows(rows), columns(columns), m(new double*[rows]){
        for (int r = 0; r < rows; r++){
            m[r] = new double[columns];
        }
    }
public:
    Matrix(uint32_t rows, uint32_t columns, double val) : Matrix(rows, columns){
        for(int r=0; r<rows; r++){
            for(int c=0; c<columns; c++){
                m[r][c] = val;
            }
        }
    }
    Matrix(const Matrix &other):Matrix(other.rows, other.columns){
        for(int r=0; r<rows; r++){
            for(int c=0; c<columns; c++){
                m[r][c] = other.m[r][c];
            }
        }
    }
   Matrix& operator=(const Matrix &other){
        for(int r=0; r<rows; r++){
            for(int c=0; c<columns; c++){
                m[r][c] = other.m[r][c];
            }
        }
        return *this;
    }
    ~Matrix() {
        for(int r=0; r<rows; r++) {
            delete m[r];
        }
        delete []m;
    }
    Matrix(Matrix &&other):Matrix(other.rows, other.columns){
        Matrix(other.rows, other.columns);
        for(int r=0; r<rows; r++){
            for(int c=0; c<columns; c++){
                m[r][c] = other.m[r][c];
            }
        }
        for(int r=0; r<rows; r++) {
            delete other.m[r];
            other.m[r] = nullptr;
        }
        delete []other.m;
        m = nullptr;
    }
    double operator()(uint32_t i, uint32_t j) const{
        if(i<0 || i>=rows || j<0 || j>=columns)
        {
            cout << "Invalid Index: ";
        }
        return m[i][j];
    }

    double& operator()(uint32_t i, uint32_t j){
        if(i<0 || i>=rows || j<0 || j>=columns) {
            cout << "Invalid Index: ";
        }
        return m[i][j];
    }

    double* operator[](uint32_t i){
        return m[i];
    }


    friend ostream& operator<<(ostream &out, const Matrix &matrix){
        for(int r=0; r<matrix.rows; r++){
            for(int c=0; c<matrix.columns; c++){
                out << matrix.m[r][c]<<" ";
            }
            out<<endl;
        }
        return out;
    }

    Matrix operator+(const Matrix& matrix2){
        Matrix matrix3(rows, columns, 0);
        for(int r=0; r<rows; r++){
            for(int c=0; c<columns; c++){
                matrix3.m[r][c] = m[r][c] + matrix2.m[r][c];
            }
        }
        return matrix3;
    }

};

int main() {
    cout << "########" << endl;
    cout << "Main Problem" << endl;
    cout << "########" << endl;

    // Create matrix a with 4 rows and 3 columns filled with values in zero
    Matrix a(4, 3, 0.0);
    // print out the complete matrix
    cout << a << endl;
    // print out one element in the matrix
    // overload of () return const value
    cout << a(2,3) << endl;
    // change one element in a(2,2) equal 1.5
    // overload of () assign reference to 1.5
    a(2,2) = 1.5;
    // print out one element in the matrix
    cout << "\n" << a << endl;
    // change one element in a(2,1) using operator [] ==> a[2][1] equal 2.5
    // Overload of []
    a[2][1] = 2.5;
    a[2][2] = a[2][1];
    cout << "\n" << a << endl;

    // Create b matrix and add it to a and save result inn matrix c
    Matrix b(4, 3, 1.0);
    Matrix c = a + b;
    cout << "\n" << c << '\n';


    cout << "\n";
    cout << "====[ end ]====" << endl;
    cout << "               " << endl;

    return 0;
}

