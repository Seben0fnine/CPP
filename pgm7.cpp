# include <iostream>
# include <memory>
using namespace std;

int main() {
	auto sp = make_shared<int>(1789);
	auto sp2 = sp;
	auto sp3 = sp;

	cout<<sp<<" "<<sp2<<" "<<sp3<<endl;
	cout<<*sp<<" "<<*sp2<<" "<<*sp3<<endl;

	weak_ptr<int> wp(sp);
    auto wp2 = wp, wp3 = wp, wp4 = wp, wp5 = wp;
	//cout<<wp<<" "<<wp2<<" "<<wp3<<endl;

	sp.reset();
	//cout<<wp<<" "<<wp2<<" "<<wp3<<endl;
	cout<<sp<<" "<<sp2<<" "<<sp3<<endl;


	return 0;




}
