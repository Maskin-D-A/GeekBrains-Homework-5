namespace homework{
	int PrintArray(int *array, int N){
		for (int i = 0; i < N; i++){
			std::cout << array[i] << ' ';
		}
		std :: cout << '\n';
		return 0;
	}
}