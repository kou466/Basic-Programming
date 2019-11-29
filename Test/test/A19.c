#include <stdio.h>

#define artichokes 2.05
#define beets 1.15
#define carrots 1.09

#define U5Shipping 6.50
#define U20Shipping 14.00
#define ShippingOver 0.50

#define Discount 0.05

double CalShipping(double weight);

int main() {
	double artichokes_weight = 0, beets_weight = 0, carrot_weight = 0, total_weight;
	double artichokes_price, beets_price, carrots_price, discount, shipping, subtotal, total;
	int cnt, amount;
	double weight;
	char category;

	scanf("%d", &amount);

	while (0 < amount) {

		category = getchar();

		switch (category) {
		case 'a':
			amount--;
			if (scanf("%lf", &weight) == 1) {
				artichokes_weight += weight;
			}
			else {
				while (getchar() != '\n');
				continue;
			}
			break;
		case 'b':
			amount--;
			if (scanf("%lf", &weight) == 1) {
				beets_weight += weight;
			}
			else {
				while (getchar() != '\n');
				continue;
			}
			break;
		case 'c':
			amount--;
			if (scanf("%lf", &weight) == 1) {
				carrot_weight += weight;
			}
			else {
				while (getchar() != '\n');
				continue;
			}
			break;
		}
		artichokes_price = artichokes_weight * artichokes;
		beets_price = beets_weight * beets;
		carrots_price = carrot_weight * carrots;
		subtotal = artichokes_price + beets_price + carrots_price;

		if (subtotal >= 100) {
			cnt = 1;
			discount = Discount * subtotal;
		}
		else {
			cnt = 0;
		}

		total_weight = artichokes_weight + beets_weight + carrot_weight;
		shipping = CalShipping(total_weight);
		total = subtotal + shipping - (cnt == 1 ? discount : 0.0);
	}
	printf("%.2lf", total);

	while (getchar() != '\n');

	return 0;
}

double CalShipping(double weight) {
	if (weight < 5.0)
		return U5Shipping;
	else if (weight < 20.0)
		return U20Shipping;
	else
		return U20Shipping + ShippingOver * weight;
}