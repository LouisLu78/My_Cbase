# include <iostream>
# include <string>
using namespace std;

class Invoice
{
public:
	
    Invoice(string code, string description, int invioceAmount, int invoicePrice)
    {
        setPartCode(code);
        setPartDescription(description);
        setAmount(invioceAmount);
        setPrice(invoicePrice);
    }

    void setPartCode(string code)
    {
        partCode = code;
    }

    string getPartCode()
    {
        return partCode;
    }

    void setPartDescription(string description)
    {
        partDescription = description;
    }

    string getPartDescription()
    {
        return partDescription;
    }

    void setAmount(int invioceAmount)
    {
        amount = invioceAmount;
    }

    int getAmount()
    {
        return amount;
    }

    void setPrice(int invoicePrice)
    {
        price = invoicePrice;
    }

    int getPrice()
    {
        return price;
    }

    int getPayment()  //alias to to the function name of getInvoiceAmount as suggested in the textbook.
    {
        return amount * price;
    }

private:
	
    string partCode;
    string partDescription;
    int amount;
    int price;
}; 

int main()
{
    Invoice sampleInvoice("I3_8100", "CPU_Intel", 5, 630);

    cout << "The code of the component is " << sampleInvoice.getPartCode() << ";" << endl;
    cout << "The description of the component is " << sampleInvoice.getPartDescription() << ";" <<  endl;
    cout << "The price is " << sampleInvoice.getPrice() << " RMB per piece;" << endl;
    cout << "with the amount of " << sampleInvoice.getAmount() << " pieces;" << endl;
    cout << "In total we spent " << sampleInvoice.getPayment() << " RMB." << endl;

    return 0;
}
