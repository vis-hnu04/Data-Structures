typedef std::string error;
class Exeption {
	error txt;
public:
	Exeption(const error& err)
		: txt(err) {};
	error getError() {
		return this->txt;
	}
};