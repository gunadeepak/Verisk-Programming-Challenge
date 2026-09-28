#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int argc, char* argv[]) 
{
    if (argc < 3) {
        std::cerr << "Usage: compute <threshold> <limit>" << std::endl;
        return 1;
    }

    double threshold = std::atof(argv[1]);
    double limit = std::atof(argv[2]);

    std::cout << std::fixed << std::setprecision(1);

    double input;
	double summedResult = 0.0;

	while (std::cin >> input)  // Read values from standard input until EOF
    {
        double result = 0.0;
		if (input > threshold)  //Check:1 If the value exceeds the threshold
        {
            result = input - threshold;
        }

		double remainingLimit = limit - summedResult; //Check:2 Calculate the remaining limit
        if(remainingLimit < 0.0)
        {
            result = 0.0;
        }

        if(result > remainingLimit) //Check:3 If the result exceeds the remaining limit
        {
            result = remainingLimit;
		}

        std::cout << result << std::endl;
		
        summedResult += result;    
	}
	std::cout << summedResult << std::endl;

    return 0;
}