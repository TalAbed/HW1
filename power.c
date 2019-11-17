#define e 2.71828182846

double Pow(double x, int y){
	double ans = 1;
	if (y>0){
		for (int i=0;i<y;i++){
			ans = ans*x;
		}
	}
	else if (y<0){
		y = y*(-1);
		for (int i=0;i<y;i++){
			ans = ans*x;
		}
		ans = 1/ans;
	}
	else
		return 1;
}

double Exp(int x){
	return Pow(e,x);
}
