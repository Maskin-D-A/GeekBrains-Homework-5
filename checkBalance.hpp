
namespace homework{
	int checkBalance(int *array, int N){
		int sum_1 = 0, sum_2 = 0;
		if (N%2 == 0){
			for(int i = 0; i < N/2; i++){
				sum_1 += array[i];
			}
			for(int j  = N/2; j < N; j++){
				sum_2 += array[j];
			}
		}
		else {
			for (int i = 0; i < (N-1)/2; i++){
				sum_1 += array[i];
			}
			for(int j  = (N-1)/2; j <N; j++){
				sum_2 += array[j];
			}
		}
		std :: cout << "sum_1 = " << sum_1 << '\t' << "sum_2 = " << sum_2 << '\n'; 
		bool check (sum_1 == sum_2);
		return check;
	}
}
