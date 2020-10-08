#include <string>

using namespace std;

class Invoice
{
public:
	Invoice(string part, string partdescription, int quantity, double cost)
		:partnum{ part }, partdes{ partdescription }, quant{ quantity }, price{ cost }
	{
		if (quantity < 0)
		{
			quant = 0;
		}
		if (cost < 0)
		{
			price = 0;
		}
	}
	void setPartNum(string part)
	{
		partnum = part;
	}

	string getPartNum() const
	{
		return partnum;
	}

	void setParDes(string partdescription)
	{
		partdes = partdescription;
	}

	string getPartDes() const
	{
		return partdes;
	}
	void setQuantity(int quantity)
	{
		if (quantity < 0)
		{
			quant = 0;
		}
		else {
			quant = quantity;
		}
	}

	int getQuantity() const
	{
		return quant;
	}

	void setPrice(double cost)
	{
		if (cost < 0)
		{
			cost = 0;
		}
		else {
		price = cost;
		}
	}	

	double getPrice() const
	{
		return price;
	}
	double getInvoiceAmount()
	{
		double total = quant * price;
		return total;
	}
private:

	string partnum;
	string partdes;
	int quant;
	double price;
};