#pragma once
using namespace std;
#include<vector>
#include<climits>
#include<cmath>
bool isPrime(int n) {
	if (n <= 0) return false;
	if (n == 2 || n==1) return true;
	for (int i = 2; i <= (int)pow(n, 0.5)+1; i++) {
		if (n % i==0) return false;
	}	return true;
}
int returnSetBits(int x) {
	if (x == 0)	return 0;
	int ans = 0;
	while (x > 0) {
		if (x & 1)ans += 1;
		x = x >> 1;
	}	return ans;
}
int gcd(int x, int y) {
	if (x == y) return y;
	if (x > y) return gcd(y, x);
	int ans = 0;
	for (int i = 1; i <= (int)pow(y, 0.5) + 1; i++) {
		if (isPrime(i) && (y%i==0 && x%i==0 )) ans = max(ans, i);
	}	return ans;
}
vector<int>PrimeFactors(int n) {
	vector<int>ans;
	for (int i = 1; i < (int)pow(n, 0.5)+1; i++) {
		if (isPrime(i) && n % i == 0) ans.push_back(i);
	}	return ans;
}
int countDigits(int x) {
	int ans = 0;
	if (x < 0) x *= -1;
	while (x > 0) {
		ans += 1;
		x = (int)x / 10;
	}	return ans;
}
int trailingZeroes(int n) {
	int ans = 0;
	while (n >=5) {
		ans += 1;
		n /= 5;
	}
	return ans;
}
int factorial(int n) {
	if (n == 0 || n == 1) { return 1; }
	if (n < 0) { return -1; }
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}	return ans;
}
int reverse(int x) {
	bool check = false;
	if (x < 0) {
		if (x == INT_MIN) return 0;
		x *= -1;
		check = true;
	}
	int ans = 0;
	while (x > 0) {
		if (ans > INT_MAX / 10) return 0;
		ans = ans * 10 + x % 10;
		x /= 10;
	}
	if (check) {
		return -1 * ans;
	}	return ans;
}

vector<int>twoSum(vector<int>v, int target) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] + v[j] == target) {
				vector<int>ans;
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}
	vector<int>ans = { -1,-1 };
	return ans;
}

bool isPalindrome(int x) {
	if (x < 0) return false;
	int len = 0;
	int flag = x;
	int temp = flag;
	while (flag > 0) {
		len += 1;
		flag /= 10;
	}
	int check = 0;
	while (x > 0) {
		if (check > INT_MAX / 10) return false;
		check = 10 * check + x % 10;
		x = x / 10;
	}
	if (check == temp) return true;
	return false;

}

int divide(int divisor, int dividend) {
	if (dividend == 0) return -1;
	if (divisor >= INT_MAX) return INT_MAX;
	else if (divisor <= INT_MIN) return INT_MIN;
	return (int)divisor / dividend;

}