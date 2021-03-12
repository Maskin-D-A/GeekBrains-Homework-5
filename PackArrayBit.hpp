

namespace homework {
	
	int PackArrayBit(int *array, int N){
		for (int i = 0; i < N; i++){
			array[i] = rand() % (0 + 2);
		}
		return *array;
	}
}