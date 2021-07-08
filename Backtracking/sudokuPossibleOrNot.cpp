#include<iostream>
using namespace std;

bool can_place(int num,int mat[9][9], int i, int j){
	for(int k=0;k<9;k++){
		if(mat[i][k] == num || mat[k][j] == num){
			return false;
		}
	}
	int row = (i/3)*3;
	int col = (j/3)*3;
	for(int k = row; k<row+3; k++){
		for(int m= col; m<col+3; m++){
			if(mat[k][m] == num) return false;
		}
	}
	return true;
}

bool sudoku(int mat[9][9], int i, int j){
	if(j==9) return sudoku(mat,i+1,0);
	if(i==9) return true;
	if(mat[i][j] == 0){
		for(int num=1; num<= 9; num++){
			if(can_place(num,mat,i,j)){
				mat[i][j] = num;
				bool can_solve_sudoku = sudoku(mat,i,j+1);
				if(can_solve_sudoku) return true;
				mat[i][j] = 0;
			}

		}
		return false;
	}else{
		return sudoku(mat,i,j+1);
	}

}

int main() {
	int n; cin>>n;
	int mat[9][9];
	for(int i=0; i<9;i++){
		for(int j=0; j<n; j++){
			cin>>mat[i][j];
		}
	}

	bool solved = sudoku(mat,0,0);

	if(solved){
		for(int i=0;i<9; i++){
			for(int j=0; j<9; j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else cout<<"-1";
	return 0;
}