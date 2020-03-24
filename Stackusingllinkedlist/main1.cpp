# include "stack.h"

int main(){
    
    ds::Stack<int> s;

    int  choice;
    int value;
    while(1){
        std::cout << "1. Push element \n";
		std::cout << "2. Pop element \n";
		std::cout << "3. Display top most element \n";
		std::cout << "4. Display filled size of stack \n";
		std::cout << "0. Exit \n";
		std::cout << "Enter option: ";
		std::cin >> choice;
        switch(choice){
            case 1:
			std::cout << "Enter number: ";
			std::cin >> value;
			s.push(value);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			std::cout << s.top() << "\n";
			break;
		case 4:
			std::cout << s.size() << "\n";
			break;
		case 0:
			exit(1);
			break;
		default:
			std::cout << "Wrong option! \n";
			break;
		}
        }
}
