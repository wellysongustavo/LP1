#include <iostream>
#include <algorithm>  
#include <vector>

class MaiorQue {
	private:
		int valor;

	public:
		MaiorQue(int n) : valor(n) {}
		
		bool operator() (int n) const { return n > valor; }
}; 

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last) {

	int sum = 0;
	int count = 0;

	for (auto it = first; it != last; ++it) 	{
		sum += *it;
		count++;
	}

	int media = sum/count;

	auto it = std::find_if(first, last, MaiorQue(media));
	if(it != last) {
		int maior = *it;
		int menor = *(--it);
		++it; //reajustando a posição do it após decrementar

		if((media - menor > maior - media)) {
			return it;
		}else {
			return --it;
		}

	}else {
		std::cout << "\nNão há valor maior que a média" << std::endl;
	}

}