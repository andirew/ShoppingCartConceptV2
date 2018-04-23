#ifndef OOP344_W4_KVLIST
#define OOP344_W4_KVLIST
#include <array>
using namespace std;
template <typename K, typename V, int N>
class KVList {
private:
	static const int _maxSize = N;
	std::array<K, N> myK;
	std::array<V, N> myV;
	int number;
public:
	KVList() {
		number = 0;
	}
	size_t size() const {

		return myK.size();
	}
	const K& key(int i) const {
		return myK[i];
	}
	const V& value(int i) const {
		return myV[i];
	}
	KVList& add(const K& k, const V& v) {

		if (number < _maxSize) {

			myK[number] = k;
			myV[number] = v;
			number++;
		}
		return *this;
	}
	int find(const K& k) const {
		for (int i = 0; i < myK.size(); i++) {

			if (myK[i] == k) {
				return i;
			}
		}
		return 0;
	}
	KVList& replace(int i, const K& k, const V& v) {
		i = find(k);

		myK[i] = k;
		myV[i] = v;
		return *this;
	}
};

#endif
