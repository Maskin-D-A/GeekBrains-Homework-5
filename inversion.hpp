
namespace homework{
	int inversion(int *array, int N){
		for (int i = 0; i < N; i++){
			array[i] = !array[i];
		}
		return *array;
	}
}