
namespace homework{
	int PackArrayPlusThree(int *array){
		for (int i = 0; i < 8; i++){
			array[i+1] = (array[i]+3);
			array[i] = array[i]+1;
		}
		return *array;
	}
}