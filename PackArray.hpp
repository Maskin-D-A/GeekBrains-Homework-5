
namespace homework{


	int PackArray(int *array, int N){
		for (int i = 0; i < N; i++){
			array[i] = rand() % (0 + 10) - 5;
		}
		return *array;
	}
}