#include<stdio.h>
#include<string.h>

int main(){
	int size;
	puts("Enter the dimensions of matrix: ");
	scanf("%d",&size);
	//int max[(size/2)][(size/2)];
	int matrix[size][size];
	printf("Enter value of matrix");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int max1=0,max2=0,max3=0,max4=0;
	int maxes[16];
	int maxval=0;
   //switch statement to handle different cases based on the size of the matrix (2, 4, or 8)
	switch(size){
		case 2:
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>maxval){
						maxval=matrix[i][j];
					}
				}
			}
			printf("Max value is %d",maxval);
			break;
		case 4:
			printf("matrix is\n");
			for(int i=0;i<4;i++){
				printf("\n");
				for(int j=0;j<4;j++){
					printf("%d ",matrix[i][j]);
				}
			}printf("\n");
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max1){
						maxval=matrix[i][j];
					}
				}
			}for(int i=2;i<4;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max1){
						max2=matrix[i][j];
					}
				}
			}
			for(int i=0;i<2;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max3){
						max3=matrix[i][j];
					}
				}
			}
			for(int i=2;i<4;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max4){
						max4=matrix[i][j];
					}
				}
			}
			printf("Max matrix is\n%d  %d\n%d  %d",maxval,max3,max2,max4);
			break;
		case 8:
			printf("matrix is\n");
			for(int i=0;i<8;i++){
				printf("\n");
				for(int j=0;j<8;j++){
					printf("%d ",matrix[i][j]);
				}
			}printf("\n");
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max1){
						maxes[0]=matrix[i][j];
					}
				}
			for(int i=2;i<4;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max1){
						maxes[1]=matrix[i][j];
					}
				}
			}
			for(int i=0;i<2;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max3){
						maxes[2]=matrix[i][j];
					}
				}
			}
			for(int i=2;i<4;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max4){
						maxes[3]=matrix[i][j];
					}
				}
			for(int i=0;i<2;i++){
				for(int j=4;j<6;j++){
					if(matrix[i][j]>max3){
						maxes[4]=matrix[i][j];
					}
				}
			}
			for(int i=0;i<2;i++){
				for(int j=6;j<8;j++){
					if(matrix[i][j]>max3){
						maxes[5]=matrix[i][j];
					}
				}
			}
			for(int i=2;i<4;i++){
				for(int j=4;j<6;j++){
					if(matrix[i][j]>max4){
						maxes[6]=matrix[i][j];
					}
				}
			for(int i=2;i<4;i++){
				for(int j=6;j<8;j++){
					if(matrix[i][j]>max4){
						maxes[7]=matrix[i][j];
					}
				}
			for(int i=4;i<6;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max4){
						maxes[8]=matrix[i][j];
					}
				}
			for(int i=4;i<6;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max4){
						maxes[9]=matrix[i][j];
					}
				}
			for(int i=4;i<6;i++){
				for(int j=4;j<6;j++){
					if(matrix[i][j]>max4){
						maxes[10]=matrix[i][j];
					}
				}
			for(int i=4;i<6;i++){
				for(int j=6;j<8;j++){
					if(matrix[i][j]>max4){
						maxes[11]=matrix[i][j];
					}
				}
			for(int i=6;i<8;i++){
				for(int j=0;j<2;j++){
					if(matrix[i][j]>max4){
						maxes[12]=matrix[i][j];
					}
				}
			for(int i=6;i<8;i++){
				for(int j=2;j<4;j++){
					if(matrix[i][j]>max4){
						maxes[13]=matrix[i][j];
					}
				}
			for(int i=6;i<8;i++){
				for(int j=4;j<6;j++){
					if(matrix[i][j]>max4){
						maxes[14]=matrix[i][j];
					}
				}
			for(int i=6;i<8;i++){
				for(int j=6;j<8;j++){
					if(matrix[i][j]>max4){
						maxes[15]=matrix[i][j];
					}
				}
			break;
	}
	
}}}}}}}}}}}

printf("Max matrix is\n %d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",maxes[0],maxes[1],maxes[2],maxes[3],maxes[4],maxes[5],maxes[6],maxes[7],maxes[8],maxes[9],maxes[10],maxes[11],maxes[12],maxes[13],maxes[14],maxes[15]);

}}
