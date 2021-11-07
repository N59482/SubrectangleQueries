/*
Subrectangle Queries
Implement the class SubrectangleQueries which receives a rows x cols rectangle as a matrix of integers in the constructor and supports two methods:
1. updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
Updates all values with newValue in the subrectangle whose upper left coordinate is (row1,col1) and bottom right coordinate is (row2,col2).
2. getValue(int row, int col)
Returns the current value of the coordinate (row,col) from the rectangle.

Example 1:
Input
["SubrectangleQueries","getValue","updateSubrectangle","getValue","getValue","updateSubrectangle","getValue","getValue"]
[[[[1,2,1],[4,3,4],[3,2,1],[1,1,1]]],[0,2],[0,0,3,2,5],[0,2],[3,1],[3,0,3,2,10],[3,1],[0,2]]
Output
[null,1,null,5,5,null,10,5]
Explanation
SubrectangleQueries subrectangleQueries = new SubrectangleQueries([[1,2,1],[4,3,4],[3,2,1],[1,1,1]]);  
// The initial rectangle (4x3) looks like:
// 1 2 1
// 4 3 4
// 3 2 1
// 1 1 1
subrectangleQueries.getValue(0, 2); // return 1
subrectangleQueries.updateSubrectangle(0, 0, 3, 2, 5);
// After this update the rectangle looks like:
// 5 5 5
// 5 5 5
// 5 5 5
// 5 5 5 
subrectangleQueries.getValue(0, 2); // return 5
subrectangleQueries.getValue(3, 1); // return 5
subrectangleQueries.updateSubrectangle(3, 0, 3, 2, 10);
// After this update the rectangle looks like:
// 5   5   5
// 5   5   5
// 5   5   5
// 10  10  10 
subrectangleQueries.getValue(3, 1); // return 10
subrectangleQueries.getValue(0, 2); // return 5
*/

#include <iostream>
#include <vector> 

using namespace std;

class SubrectangleQueries {
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) 
    	{
        	for(auto & ir : rectangle)
        		{
    				vector<int> temp_col;
        			for(auto & ic : ir) temp_col.push_back(ic);
        			matrix.push_back(temp_col);
        		};
    	};
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    	{
        	for(int ir = row1; ir <= row2; ir++)
        		{
        			for(int ic = col1; ic <= col2; ic++)
        				{
        					matrix[ir][ic] = newValue;
        				};
        		};
    	};
    int getValue(int row, int col) 
    	{
        	return matrix[row][col];
    	};
    void show(vector<int> & v)
    	{
        	for(auto & i : v) cout<<i<<" ";
        	cout<<endl;
    	};
    void show(vector<vector<int>> & m)
    	{
        	for(auto & ir : m)
            	{
               		show(ir);
            	};
        	cout<<endl;
    	};
    void show()
    	{
      	show(matrix);  
    	};
private:
	vector<vector<int>> matrix;
};
    	
int main()
	{
    	vector<vector<int>> m = {{0,2,5},{4,3,4},{3,2,1},{1,1,1}};
    
    	SubrectangleQueries s(m);
    
    	s.show();
    
    	int leftupper = s.getValue(0,0);
    	int rightuper = s.getValue(0,2);
    
    	cout<<"leftupper = "<<leftupper<<"\nrightuper = "<<rightuper<<endl;
    	
    	
    	s.updateSubrectangle(1,0,2,1,6);
    	
    	s.show();

    	return 0;
	};




class SubrectangleQueries 
	{
	public:
    	SubrectangleQueries(vector<vector<int>>& rectangle) 
    	{
        	for(auto & ir : rectangle)
        		{
    				vector<int> temp_col;
        			for(auto & ic : ir) temp_col.push_back(ic);
        			matrix.push_back(temp_col);
        		};
    	};
    	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    	{
        	for(int ir = row1; ir <= row2; ir++)
        		{
        			for(int ic = col1; ic <= col2; ic++)
        				{
        					matrix[ir][ic] = newValue;
        				};
        		};
    	};
    	int getValue(int row, int col) 
    	{
        	return matrix[row][col];
    	};
	private:
		vector<vector<int>> matrix;
	};