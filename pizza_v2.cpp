// Pizza.cpp 

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Выбирите меню\n";
    int pizzaID, drinkID, pizzaAmount, drinkAmount, temp;
    float salepizzaPrice, pizzaPrice1, pizzaPrice2, pizzaPrice3, pizzaPrice4;
    float saledrinkPrice, drinkPrice1, drinkPrice2, drinkPrice3;
    float orderAmount;

    pizzaPrice1 = 8.90;
    pizzaPrice2 = 10.20;
    pizzaPrice3 = 7.10;
    pizzaPrice4 = 14.99;

    drinkPrice1 = 2.20;
    drinkPrice2 = 3.00;
    drinkPrice3 = 1.99;

    orderAmount = 0;

    cout << "Выбирите пиццу:\n";
    cout << "1: Пицца Мясная $" << pizzaPrice1 << "\n";
    cout << "2: Пицца Гавайская $" << pizzaPrice2 << "\n";
    cout << "3: Пицца Четыре сыра $" << pizzaPrice3 << "\n";
    cout << "4: Пицца От шефа $" << pizzaPrice4 << "\n";
    cin >> pizzaID;
    cout << "Введите количество пиццы:\n";
    cin >> pizzaAmount;

    cout << "Выбирите напиток:\n";
    cout << "1: Кока-Кола $" << drinkPrice1 << "\n";
    cout << "2: Чай Липтон $" << drinkPrice2 << "\n";
    cout << "3: Швепс $" << drinkPrice3 << "\n";
    cin >> drinkID;
    cout << "Введите количество напитков\n";
    cin >> drinkAmount;

    switch (pizzaID)
    {
    case 1:
        salepizzaPrice = pizzaPrice1;
        break;
    case 2:
        salepizzaPrice = pizzaPrice2;
        break;
    case 3:
        salepizzaPrice = pizzaPrice3;
        break;
    case 4:
        salepizzaPrice = pizzaPrice4;
        break;
    default:
        cout << "Такая пицца отсутствует"
            "Вернуться в меню\n";
        salepizzaPrice = 0;
        break;
    }

    switch (drinkID)
    {
    case 1:
        saledrinkPrice = drinkPrice1;
        break;
    case 2:
        saledrinkPrice = drinkPrice2;
        break;
    case 3:
        saledrinkPrice = drinkPrice3;
        break;
    default:
        cout << "Такой напиток отсутствует"
            "Вернуться в меню\n";
        saledrinkPrice = 0;
        break;
    }

    temp = pizzaAmount;
    if (pizzaAmount >= 5)
    {
        cout << "СКИДКА ДЛЯ ВАС - КАЖДАЯ ПЯТАЯ ПИЦЦА БЕСПЛАТНО!\n";
        pizzaAmount = pizzaAmount - pizzaAmount / 5;
    }

    orderAmount = orderAmount + pizzaAmount * salepizzaPrice;

    if ((drinkAmount >= 3) && (saledrinkPrice > 2))
    {
        cout << "ДЛЯ ВАС ЕСТЬ СКИДКА В 15% НА НАПИТКИ!\n";
        orderAmount = orderAmount + drinkAmount * saledrinkPrice * (1 - 0.15);
    }
    else
    {
        orderAmount = orderAmount + drinkAmount * saledrinkPrice;
    }

    if (orderAmount > 50)
    {
        cout << "ДЛЯ ВАС ЕСТЬ СКИДКА 20% НА ВЕСЬ ЗАКАЗ!\n";
        orderAmount = orderAmount * (1 - 0.2);
    }

    cout << "Ваш заказ:\n";
    cout << "Пицца" << pizzaID << "-" << temp << "-$";
    cout << salepizzaPrice << "\n";
    cout << "Напиток" << drinkID << "-";
    cout << drinkAmount << "-$" << saledrinkPrice << "\n";
    cout << "Итоговая сумма: $" << orderAmount << "\n";
    cout << "Спасибо за заказ. Приятного аппетита!";

    return 0;
}
