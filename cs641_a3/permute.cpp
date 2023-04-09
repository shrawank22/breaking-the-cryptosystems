#include <bits/stdc++.h>
using namespace std;

int main() {
	string c5 = "qmnjvsanvwewcflctvprjtjtvvplvlfvxjavqildhcxmlnvcnacyclpafcgytvfvwfvwgqyppqqpqcsywsqrxqmnjvafycgvtlvhfcwtylaeuqfvxjatkbvcqnsqslhfavawnccveasfuqbqvqtcyllrqrxxwacfypsdcuqfavrqcgefqpyattracxwvtaawwddveasflcbqvdtrawmvupqquwxdecgqcwtyqyaflvlqsyqklhqsnafqvmllhvqpawrnqgvfusrecwawyqpfnwgawdgf";
	int l = c5.size(); // l=284
	c5 += '*';
	vector<string> vec;
	string temp = "";
	for (int i = 1; i < c5.size() + 1; i++) {
		temp += c5[i - 1];
		if (i != 0 && i % 5 == 0) {
			vec.push_back(temp);
			temp = "";
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		swap(vec[i][0], vec[i][3]);
		swap(vec[i][2], vec[i][4]);
		swap(vec[i][1], vec[i][4]);
	}

	string res = "";
	for (auto it : vec)
		res += it + " ";
	cout << res << endl;
	return 0;
}
