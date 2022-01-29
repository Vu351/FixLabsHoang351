#include <iostream> 
using namespace std;

struct S
{
	std::string s1;
	std::string s2;
	int it;
};



template <class T1>
void all__sort(T1* arr, int l, int r, S* v = nullptr)
{
	T1 p;
	S pv;
	int lh = l;
	int rh = r;
	p = arr[l];
	if (v != nullptr)
		pv = v[l];
	while (l < r)
	{
		while ((arr[r] >= p) && (l < r))
			r--;
		if (l != r)
		{
			arr[l] = arr[r];
			if (v != nullptr)
				v[l] = v[r];
			l++;
		}
		while ((arr[l] <= p) && (l < r))
			l++;
		if (l != r)
		{
			arr[r] = arr[l];
			if (v != nullptr)
				v[r] = v[l];
			r--;
		}
	}
	arr[l] = p;
	if (v != nullptr)
		v[l] = pv;
	int t = l;
	l = lh;
	r = rh;
	if (l < t)
		all__sort(arr, l, t - 1, v);
	if (r > t)
		all__sort(arr, t + 1, r, v);
	return;
}

template <typename T2>
void hal_1(T2* v, const int n) {
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	all__sort(v, 0, int(n) - 1);
	for (auto i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	delete[] v;
}



void hal_2(S* v, const int n)
{
	cout << "Enter first name, second name and age: \n";
	for (auto i = 0; i < n; i++) {
		cin >> v[i].s1 >> v[i].s2 >> v[i].it;
	}
	int t;
	cout << "1. sort name \n2. sort surname \n3. sort age\n";
	cin >> t;
	switch (t)
	{
	case 1: {
		string* arr = new string[n];
		for (int i = 0; i < n; i++)
			arr[i] = v[i].s1;
		all__sort(arr, 0, int(n) - 1, v);
		break;
	}
	case 2: {
		string* arr = new string[n];
		for (int i = 0; i < n; i++)
			arr[i] = v[i].s2;
		all__sort(arr, 0, int(n) - 1, v);
		break;
	}
	case 3: {
		int* arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = v[i].it;
		}
		all__sort(arr, 0, int(n) - 1, v);
		break;
	}
	default:
		break;
	}
	for (auto i = 0; i < n; i++) {
		cout << v[i].s1 << " " << v[i].s2 << " " << v[i].it << "\n\n";
	}
}
template <class T1>
bool operator > (T1 a, T1 b) {
	bool bl = true;
	if (a <= b)
		bl = false;
	return bl;
}

int main() {
	int a = 0;
	const int n = 3;
	while (a != 5) {
		cout << "1. mas int \n2. mas double \n3. mas string \n4. struct\n";
		cin >> a;
		switch (a) {
		case 1: {
			int* ar = new int[n];
			hal_1(ar, n);
			break;
		}
		case 2: {
			double* ar = new double[n];
			hal_1(ar, n);
			break;
		}
		case 3: {
			string* ar = new string[n];
			hal_1(ar, n);
			break;
		}
		case 4: {
			S s[n];
			hal_2(s, n);
		}
		default: {

			break;
		}
		}
		cout << "\n";
	}
	return 0;
}