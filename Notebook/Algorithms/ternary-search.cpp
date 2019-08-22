int ternary_search() {
	int lo = 0, hi = 8;
	while (hi - lo > 2) {
		int mid1 = lo + (hi - lo) / 3;
		int mid2 = hi - (hi - lo) / 3;
		if (f(mid1) < f(mid2))
			lo = mid1;
		else
			hi = mid2;
	}
	return lo + 1;
}