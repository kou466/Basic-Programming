#include <stdio.h>

#define BasicPay 10.00
#define OverTime 40.00
#define OverTimePay 1.5
#define TaxRate1 0.15
#define TaxStart 300.0
#define TaxRate2 0.20
#define TaxNext 450.0
#define TexRate3 0.25

double CalGrossPay(double hours);
double CalTax(double GrossPay);

int main() {
	double hours, GrossPay, taxes, netpay;

	if (scanf("%lf", &hours) == 1) {
		GrossPay = CalGrossPay(hours);
		taxes = CalTax(GrossPay);
		netpay = GrossPay - taxes;

		printf("%.2lf %.2lf %.2lf\n", GrossPay, taxes, netpay);
	}

	return 0;
}

double CalGrossPay(double hours) {
	if (hours > OverTime)
		return OverTime * BasicPay + (hours - OverTime) * BasicPay * OverTimePay;
	else
		return hours * BasicPay;
}

double CalTax(double GrossPay) {
	if (GrossPay > TaxNext)
		return TexRate3 * (GrossPay - TaxNext) + TaxRate2 * (TaxNext - TaxStart) + TaxRate1 * TaxStart;
	else if (GrossPay > TaxStart)
		return TaxRate2 * (GrossPay - TaxStart) + TaxRate1 * TaxStart;
	else
		return TaxRate1 * GrossPay;
}