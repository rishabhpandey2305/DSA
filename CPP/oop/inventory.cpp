#include <iostream>
using namespace std;
class inventory
{
public:
    int Product_id[100];
    int i;
    int n;
    int stock[100];
    string product_type[100];
    string product_name[100];   
    int product_price[100];
    int product = 0;
    int product_discount[100];
    int index;
    void getDetails()
    {
        cout << "Enter your total product stock" << endl;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            product++;
            cout << "Enter the product namee:" << endl;
            cin >> product_name[i];
            cout << "Enter your Product Id:" << endl;
            cin >> Product_id[i];
            cout << "Enter stock filled or not by 1 or 0" << endl;
            cin >> stock[i];
            cout << "Enter the product type" << endl;
            cin >> product_type[i];
            cout << "Enter product price" << endl;
            cin >> product_price[i];
            cout << "Enter product discount in %" << endl;
            cin >> product_discount[i];
        }
    }
    void display_inverntory()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Product name:- " << " " << product_name[i] << endl;
            cout << "Product id:- " << " " << Product_id[i] << endl;
            cout << "Product Type:- " << " " << product_type[i] << endl;
            if (stock[i] == 1)
            {
                cout << "This product available" << endl;
            }
            cout << "Total product Available:- " << product << endl;
        }
    }
    void product_order()
    {
        string order_name;
        cout << "Enter your product name to order your product";
        cin >> order_name;
        cout << "Your product ordered successfully" << order_name;
        for (int i = 0; i < n; i++)
        {
            if (product_name[i] == order_name)
            {
                int discount_price = product_price[i] / product_discount[i];
                cout << "Your product price is " << product_price[i] << endl;
                cout << "Your discount price is " << discount_price << endl;
                cout << "Your Final price is " << product_price[i] - discount_price << endl;
                removeproduct(i);
                return;
            }
        }
    }

private:
    void removeproduct(int index)
    {
        for (int i = index; i < n - 1; i++)
        {
            product_name[i] = product_name[i + 1];
            Product_id[i] = Product_id[i + 1];
            product_type[i] = product_type[i + 1];
            stock[i] = stock[i + 1];
            product_price[i] = product_price[i + 1];
            product_discount[i] = product_discount[i + 1];
            product--;
            product_name[n - 1] = " ";
            Product_id[n - 1] = 0;
            product_type[n - 1] = " ";
            stock[n - 1] = 0;
            product_price[n - 1] = 0;
        }
    }
};
class updatestock : public inventory
{
public:
    void update()
    {
        int update;
        cout << "Enter your Product id to update product name" << endl;
        cin >> update;
        for (int i = 0; i < n; i++)
        {
            if (update == Product_id[i])
            {
                cout << "Enter your new product name" << endl;
                cin >> product_name[i];
                cout << "Product name updated" << endl;
                break;
            }
        }
    }
};
int main()
{
    int switch_case;
    bool condition = true;
    updatestock ups;
    while (condition)
    {
        cout << "Chosee option" << endl;
        cout << "1. Get Details from user " << "2. Display details " << "3. update details " << "4. Product Order" << "5. Exit" << endl;
        cin >> switch_case;
        switch (switch_case)
        {
        case 1:
            ups.getDetails();
            break;
        case 2:
            ups.display_inverntory();
            break;
        case 3:
            ups.update();
            break;
        case 4:
            ups.product_order();
            break;
        case 5:
            condition = false;
            return 0;
        default:
            cout << "Choose valid option";
            break;
        }
    }
    return 0;
}