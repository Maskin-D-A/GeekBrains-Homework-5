#include <iostream>
#include <ctime>

#include "PackArray.hpp"
#include "PackArrayBit.hpp"
#include "PackArrayPlusThree.hpp"
#include "PrintArray.hpp"
#include "inversion.hpp"
#include "checkBalance.hpp"
#include "cyclicOffset.hpp"

using namespace homework;

int main(){
	
	srand(time(0));
	
	int array_1[]{};
	int N_1 = 10;
	int (*PackBit)(int *array_1, int N_1);
	int (*PackBit_Print)(int *array_1, int N_1);
	PackBit = PackArrayBit;
	int result_1_1 = PackBit(array_1, N_1);
	PackBit_Print = PrintArray; 
	int result_1_2 = PackBit_Print(array_1, N_1);
	PackBit = inversion;
	int result_1_3 = PackBit(array_1, N_1);
	result_1_2 = PackBit_Print(array_1, N_1);
	
	std :: cout << '\n';
	
	int N_2 = 8;
	int array_2[8]{};
	int (*PackThree)(int *array_2);
	int (*PackThree_Print)(int *array_2, int N_2);
	PackThree = PackArrayPlusThree;
	int result_2_1 = PackThree(array_2);
	PackThree_Print = PrintArray; 
	int result_2_2 = PackThree_Print(array_2, N_2);
	
	std :: cout << '\n';
	
	int array_3[]{};
	int N_3 = 10;
	int (*checkB)(int *array_3, int N_3);
	int (*checkB_Print)(int *array_3, int N_3);
	checkB = PackArray;
	int result_3_1 = checkB(array_3, N_3);
	checkB_Print = PrintArray;
	int result_3_2 = checkB_Print(array_3, N_3);
	checkB = checkBalance;
	int result_3_3 = checkB(array_3, N_3);
	if (result_3_3 == 0) std::cout << "FALSE" << '\n';
	else std::cout << "TRUE" << '\n';
	
	std:: cout << '\n';
	
	int array_4[]{};
	int N_4 = 10;
	int (*PackLast)(int *array_4, int N_4);
	int (*PackLast_Print)(int *array_4, int N_4);
	PackLast = PackArray;
	int result_4_1 = PackLast(array_4, N_4);
	PackLast_Print = PrintArray; 
	int result_4_2 = PackLast_Print(array_4, N_4);
	PackLast = cyclicOffset;
	int result_4_3 = PackLast(array_4, N_4);
	result_4_2 = PackLast_Print(array_4, N_4);
	
	
	return 0;
}