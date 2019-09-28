# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(void){

vector<int> vec{0,0,1,1};
//vector<int>::iterator it;

auto it = find(vec.begin(), vec.end(),0);
cout<<*it<<endl;


vector<pair<int,char>> vec2{{0,'a'},{3,'b'},{1,'a'},{1,'b'}};
//vector<pair<int,char>>::iterator it2;
//auto it2 = find_if(vec2.begin(), vec2.end(), [](pair<int,char> const& p) {return p.first==3;});
auto it2 = find_if(vec2.begin(), vec2.end(), [](auto const& p) {return p.first==3;});
cout<<it2.first<<endl;
return 0;
}

