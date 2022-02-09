#include<bits/stdc++.h>
using namespace std;

 bool exist(vector<vector<char>>& board, string word) {
 	int k=0; 
 	string xword= word; 
 	vector<vector<char>> xboard = board; 
 	for(int i=0;i<board.size();i++){
 		k=0; 
 		xword = word; 
 		xboard = board; 

 		for(int j=0;j<board[i].size();j++){
 			int id=i,jd=j;
 			while(xboard[id][jd] == xword[k]){
 				if((jd+1)<board[i].size()&&xboard[id][jd+1] == xword[k+1]){
 					xboard[id][jd+1] ='0';
 					jd++;k++; 
 				}
 				else if((id+1)<board[i].size()&&xboard[id+1][jd] == xword[k+1] ){
 					xboard[id+1][jd] ='0'; 
 					id++;k++;
 				}
 				else if((id-1)>=0&&xboard[id-1][jd] == xword[k+1]){
 					xboard[id-1][jd] ='0'; 
 					id--; k++;
 				}
 				else if((jd-1)>=0 && xboard[id][jd-1] == xword[k+1]){
 					xboard[id][jd-1] ='0'; 
 					jd--; k++; 
 				}else{
 					break; 
 				}
 			}

 		}
 	}
  } 
int main(){



	return 0; 
}	