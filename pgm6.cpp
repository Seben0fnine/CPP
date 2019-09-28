# include <iostream>
# include <memory>
using namespace std;

int main (void) {
    shared_ptr<int> sp1(new int(11));
	cout<<sp1<<endl;
	auto sp2 = make_shared<int>(22);
	cout<<sp1<<" "<<sp2<<endl;
	cout<<*sp1<<" "<<*sp2<<endl;
	return 0;


}
