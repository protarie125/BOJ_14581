#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& fan = ":fan:"s;

	string s;
	cin >> s;

	cout << fan << fan << fan << '\n'
		<< fan << ':' << s << ':' << fan << '\n'
		<< fan << fan << fan;

	return 0;
}