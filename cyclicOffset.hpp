
namespace homework {
	int cyclicOffset(int *array, int N){
		while (N > 0){
			for (int i = 0; i < N - 1; i++) 
			{
				int memory = array[i];
				array[i] = array[i + 1];
				array[i + 1] = memory;
			}
			N--;
		}
    return *array;
}

}