#include <iostream>
#include <iomanip>
#include <math.h>
#include "Invoice.h"

using namespace std;

void displayInvoice(Invoice x);

int main()
{
	Invoice hammer{ "12345", "Hammer", 100, 5.00 };
	Invoice saw{ "13579", "Saw", 500, -7.00 };
	Invoice nail{ "24680", "Nail", -100, 0.05 };

	displayInvoice(hammer);
	displayInvoice(saw);
	displayInvoice(nail);

	hammer.setParDes("hammy");
	hammer.setPrice(100.00);
	hammer.setQuantity(8);
	hammer.setPartNum("294564");

	displayInvoice(hammer);

	return 0;
}


void displayInvoice(Invoice x)
{
	cout << "Part Number: " << x.getPartNum() << endl;;
	cout << "Part Description: " << x.getPartDes() << endl;
	cout << "Quantity: " << x.getQuantity() << endl;
	cout << "Price: " << x.getInvoiceAmount() << endl;
	 
}