#include <iostream>

struct Ad{
	int shown;
	double percentageClicked;
	double averageEarnPerClick;
};

Ad setAd(){
	Ad newAd;
	
	std::cout << "How many ads you show to readers: ";
	std::cin >> newAd.shown;
	
	std::cout << "What percentage of those where clicked: ";
	std::cin >> newAd.percentageClicked;

	std::cout << "How many do you earn on average per ad clicked: ";
	std::cin >> newAd.averageEarnPerClick;
	
	return newAd;
}

void printEarn(Ad ad){
	std::cout << "Number of ads shown: " << ad.shown << "\n";
	std::cout << "Percentage of ads clicked: " << ad.percentageClicked << "\n";
	std::cout << "Average earn by ad clicked: " << ad.averageEarnPerClick << "\n";

	std::cout << 	"Today you've made: " << ad.shown * ad.percentageClicked * ad.averageEarnPerClick << "\n";
}

int main(){

	Ad ad = setAd();
	printEarn(ad);

	return 0;
}

