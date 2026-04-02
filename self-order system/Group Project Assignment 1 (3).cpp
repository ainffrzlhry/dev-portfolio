// #include <iostream>
// #include <iomanip>
// using namespace std;

	
// 	void menu_mainCourse();
// 	void menu_beverage();
// 	void menu_dessert();
// 	void selection_mainCourse();
// 	void selection_beverage();
// 	void selection_dessert();
// 	void mainMenu();
// 	void payment();
// 	float final();
	
// 	const int num_mainCourse = 8; // num main course items on the menu
// 	const int num_beverage = 7;  // num beverage items on the menu
// 	const int num_dessert = 8; // num dessert items on the menu
// 	const int MAX_ORDER_ITEMS = 10;  // max num of items per order
	
// 	int num=0;
// 	const int Max = 10;
// 	int itemNo1[Max], itemNo2[Max], itemNo3[Max];
//     int quantity1[Max], quantity2[Max], quantity3[Max];
// 	int itemNum1, itemNum2, itemNum3;
// 	int qty1, qty2, qty3, payment_code;
// 	char choice, answer1, answer2, answer3;
// 	float total, subtotal1, subtotal2, subtotal3, subtotalAll, taxcharged;
	
// 	// menu mainCourse
// 	const string mainCourse[num_mainCourse] = {"Grilled Mushroom", "Chicken Blackpepper", "Chicken Bulgogi", 
// 	"Mac and Cheese", "Wantan Noodle Soup", "Salmon Crispy Roll", "Fried Rice Chicken Chop",
// 	"Nasi Lemak Rendang" };
//     const double menuPrice1[num_mainCourse] = { 6.90, 12.30, 8.30, 7.50, 6.90, 8.40, 15.90, 9.90 };
    
//     // menu beverage 
//     const string beverage[num_beverage] = {"Sparkling Water", "Sky iuice", "Iced Mocha", "Iced Fresh Lemonade", 
// 	"Iced Green Tea", "Java Chip Frappe", "Fresh Orange Juice"};
//     const double menuPrice2[num_beverage] = { 2.20, 1.20, 5.80, 6.70, 6.40, 7.50, 6.90 };
    
//     // menu dessert
//     const string dessert[num_dessert] = {"Vanilla Gelato", "Classis Carrot Cake", "Apple Pie with Cream", 
// 	"Banana Foster", "Chocolate Cookies", "Korean Pancakes", "Black Forest Cake", "White Choco Waffle" };
//     const double menuPrice3[num_dessert] = { 4.70, 8.80, 5.30, 5.50, 3.30, 6.40, 12.90, 9.90 };

// //print main menu
// void mainMenu()	
// {
	
// 	cout << "\n   Would you like to order Main Course, Beverage or Dessert? " << endl ;
// 	cout << "\n\t     [A] Main Course" << endl;
// 	cout <<"\t     [B] Beverage" << endl;
// 	cout <<"\t     [C] Dessert" << endl;
// 	cin >> choice;
	
// 	if (choice == 'A' || choice == 'a')
// 	{
// 		menu_mainCourse();
// 		selection_mainCourse ();
// 	}
// 	else if (choice =='B' || choice =='b')
// 	{
// 		menu_beverage();
// 		selection_beverage ();
// 	}
// 	else if (choice =='C' || choice =='c')
// 	{
// 		menu_dessert();
// 		selection_dessert();
// 	}

// 	else
// 		cout << "\n     Wrong option, my dear!" ;
	
// }

// // print menu mainCourse
// void menu_mainCourse()
// {
// 	cout << "\n----------------------- Today's Menu ------------------------" << endl;
// 	cout << "\n\t\t\t MAIN COURSE" << endl;
// 	cout << "------------------------------------------------------------- " << endl;	
// 	cout << "\n\tCODE  MENU\t\t\t    PRICE\n" << endl; 
	
// 	{
// 	for (int i=0; i<num_mainCourse;i++)
// 		{
// 		cout << setw(9) << "[" << i << "]" << "   " << left << setw(29) << mainCourse[i] <<
// 		right << " RM " << setw(5) << fixed << setprecision(2) << menuPrice1[i] << endl;
// 		}
// 	cout << endl;
// 	}
// 	cout << "------------------------------------------------------------- " << endl;	
// }

// // print menu beverage
// void menu_beverage()
// {
// 	cout << "\n----------------------- Today's Menu ------------------------" << endl;
// 	cout << "\n\t\t\t BEVERAGE" << endl;
// 	cout << "------------------------------------------------------------- " << endl;	
// 	cout << "\n\tCODE  MENU\t\t\t    PRICE\n" << endl; 
	
// 	{
// 	for (int i=0; i<num_beverage;i++)
// 		{
// 		cout << setw(9) << "[" << i << "]" << "   " << left << setw(29) << beverage[i] <<
// 		right << " RM " << setw(5) << fixed << setprecision(2) << menuPrice2[i] << endl;
// 		}
// 	cout << endl;
// 	}
// 	cout << "------------------------------------------------------------- " << endl;	
// }

// // print menu dessert
// void menu_dessert()
// {
// 	cout << "\n----------------------- Today's Menu ------------------------" << endl;
// 	cout << "\n\t\t\t DESSERT" << endl;
// 	cout << "------------------------------------------------------------- " << endl;	
// 	cout << "\n\tCODE  MENU\t\t\t    PRICE\n" << endl; 
	
// 	{
// 	for (int i=0; i<num_dessert;i++)
// 		{
// 		cout << setw(9) << "[" << i << "]" << "   " << left << setw(29) << dessert[i] <<
// 		right << " RM " << setw(5) << fixed << setprecision(2) << menuPrice3[i] << endl;
// 		}
// 	cout << endl;
// 	}
// 	cout << "------------------------------------------------------------- " << endl;	
// }

// // get order main course
// void selection_mainCourse()
// {
// 		cout << "Please enter your menu code : " ;
// 		cin >> itemNum1;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty1;
	
//     //repeat inputs until quantity is 0 or MAX_ORDER_ITEMS exceeded

//      while ((qty1!=0)&&num<MAX_ORDER_ITEMS-1)
//     {
//     	itemNo1[num]=itemNum1;
//     	quantity1[num]=qty1;
//     	num++;
    	
//     	cout << "\n- Press 10 in menu code and Press 0 in quantity to stop adding order from Beverage - " << endl;
//   		cout << "\nPlease enter your menu code : " ;
// 		cin >> itemNum1;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty1;
	
//   	}
  	
//   	//subtotal for main course items
// 	subtotal1=0;
//     for (int i=0; i<num; i++)
//     {
//         subtotal1 += menuPrice1[itemNo1[i]]*quantity1[i];
//     }
    
//     //adding more order
//     	cout << "\nDo you want to add order from the other category? Y [Yes] or N [No] " << endl;
// 		cin >> answer1;
	
// 	if (answer1 == 'N' || answer1 == 'n')
// 	{
// 			payment();
// 		}
// 	else
// 		{
// 		mainMenu();
// 	}
// }

// // get order beverage
// void selection_beverage()
// {
// 		cout << "Please enter your menu code : " ;
// 		cin >> itemNum2;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty2;
	
//     //repeat inputs until quantity is 0 or MAX_ORDER_ITEMS exceeded

//      while ((qty2!=0)&&num<=MAX_ORDER_ITEMS)
//     {
//     	itemNo2[num]=itemNum2;
//     	quantity2[num]=qty2;
//     	num++;
    
// 		cout << "\n- Press 10 in menu code and Press 0 in quantity to stop adding order from Beverage - " << endl;
//   		cout << "\nPlease enter your menu code : " ;
// 		cin >> itemNum2;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty2;
	
//   	}
//   	//subtotal for beverage items
// 	subtotal2=0;
//     for (int i=0; i<num; i++)
//     {
//         subtotal2 += menuPrice2[itemNo1[i]]*quantity2[i];
//     }
    
//     //adding more order
//     	cout << "\nDo you want to add order from the other category? Y [Yes] or N [No] " << endl;
// 		cin >> answer2;
	
// 	if (answer2 == 'N' || answer2 == 'n')
// 	{
// 			payment();
// 		}
// 	else
// 		{
// 		mainMenu();
// 	}
// }

// // get order dessert
// void selection_dessert()
// {
// 		cout << "Please enter your menu code : " ;
// 		cin >> itemNum3;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty3;
	
//     //repeat inputs until quantity is 0 or MAX_ORDER_ITEMS exceeded

//      while ((qty3!=0)&&num<MAX_ORDER_ITEMS-1)
//     {
//     	itemNo3[num]=itemNum3;
//     	quantity3[num]=qty3;
//     	num++;
    	
//     	cout << "\n- Press 10 in menu code and Press 0 in quantity to stop adding order from Beverage - " << endl;
//   		cout << "\nPlease enter your menu code : " ;
// 		cin >> itemNum3;
// 		cout << "Enter the quantity : " ;
// 		cin >> qty3;
	
//   	}
//   		//subtotal for dessert items
// 	subtotal3 = 0;
//     for (int i=0; i<num; i++)
//     {
//         subtotal3 += menuPrice3[itemNo3[i]]*quantity3[i];
//     }
    
//     //adding more order
//     	cout << "\nDo you want to add order from the other category? Y [Yes] or N [No] " << endl;
// 		cin >> answer3;
	
// 	if (answer3 == 'N' || answer3 == 'n')
// 	{
// 			payment();
// 		}
// 	else
// 		{
// 		mainMenu();
// 	}
// }
 
// //how to make payment
// void payment ()
// {
// 	// calculate the total price
// 	float total;
// 	subtotalAll = subtotal1 + subtotal2 + subtotal3;
// 	taxcharged = subtotalAll*0.06;
// 	total = subtotalAll + taxcharged;
	
// 	cout << "\nTotal : RM " << total << endl;
	
// 	// display receipt
// 	string recName1, recName2, recName3;
// 	int recQty1, recQty2, recQty3;
// 	double recPrice1, recPrice2, recPrice3;
					
//     // choose payment method
// 	cout << "\nChoose your payment method" << endl;
// 	cout << "\n\t1 Pay at counter" ;
// 	cout << "\n\t2 Online banking " << endl ;
// 	cin >> payment_code;
	
// 	switch (payment_code)
// 	{
// 		case 1 : 
// 				cout << "\t\n          - Your order has been placed -" << endl;
// 				cout << "     - Please make your payment at the counter - " << endl;
				
// 	            break;
	        
// 	    case 2 : 
		
// 				cout <<"\n\tPayment is successful. \n\nHere's your receipt :\n\n";
// 				cout <<"===============================================\n";
// 				cout << "\n\t\t INVOICE " << endl;
// 				cout << "\nDate : 25/01/2023 \t 11:30:17 " << endl;
// 				cout << "CASHIER : AFFIRA " << endl;
// 				cout <<"===============================================\n";
// 				cout << left << setw(15) << "ITEM" << right << setw(17) << "QUANTITY" 
// 				<< right << setw(12) << "PRICE" << right << setw(20) << endl;
// 				cout <<"===============================================" << endl;
				
// 				for (int i=0; i<num; i++)
//    				{
//         		recName1 = mainCourse[itemNo1[i]];
//         		recName2 = beverage[itemNo2[i]];
//         		recName3 = dessert[itemNo3[i]];
        		
//         		recQty1 = quantity1[i];
//         		recQty2 = quantity2[i];
//         		recQty3 = quantity3[i];
        		
//         		recPrice1 = menuPrice1[itemNo1[i]]*quantity1[i];
//         		recPrice2 = menuPrice2[itemNo2[i]]*quantity2[i];
//         		recPrice3 = menuPrice3[itemNo3[i]]*quantity3[i];
        		
//         		if(recQty1!=0)
// 				{
//         		cout << left << setw(20) << recName1 << right << setw(8) << recQty1 << right << setw(14) << " RM " 
// 				<< setw(5) << recPrice1 << endl;
//            		}
//            		if(recQty2!=0)
//            		{
//         		cout << left << setw(20) << recName2 << right << setw(8) << recQty2 << right << setw(14) << " RM " 
// 				<< setw(5) << recPrice2 << endl;
//            		}
//         		if(recQty3!=0)
//         		{
// 				cout << left << setw(20) << recName3 << right << setw(8) << recQty3 << right << setw(14) << " RM " 
// 				<< setw(5) << recPrice3 << endl;
//            		}
// 				}
    			
//     			cout<<"-----------------------------------------------" << endl;
        	
//            		cout << "Subtotal\t\t " << setw(17) << "RM " << setw(5) << subtotalAll << endl;
//            		cout << "Tax(6%)\t\t\t " << setw(17) << "RM " << setw(5) << taxcharged << endl;
//            		cout << "Total\t\t\t " << setw(17) << "RM " << setw(5) << total << endl;
           		
//       			cout<<"===============================================" << endl;
//          		cout << "\t\n          - Your order has been placed -" << endl;
//          		cout << "\n\t          - Thank You -" ;
// 				cout << "\n\t  See you again. Have a nice day!" << endl;
// 				cout << "\n\t\t    Invoice No." << endl;
// 				cout << "\t    458-10541002-17-2911928-1" << endl;
// 				cout << "\tContact us at www.Revivalco.com.my" << endl;
// 				cout <<"\n===============================================" << endl;
				
// 				break;
// 		default :
// 			cout << "\nSorry! Wrong payment method "	<< endl;	
// 	}

// }
// float final (float taxcharged, float total)
// {
// 	subtotalAll = subtotal1 + subtotal2 + subtotal3;
// 	taxcharged = subtotalAll*0.06;
// 	total = subtotalAll + taxcharged;
// }
	

// int main ()
// {
// 	char decision;
// 	do
// 	{
// 	cout << "\n           - Welcome to the Revival.Co Cafe -" << endl; 
	
// 	mainMenu();
// 	cout << "\nProceed to the next customer?(Y/N):";
// 	cin >> decision;
// 	system("cls");
		
// 	//loop
// 	for (int i = 0; i <= Max; ++i) 
// 	{
//     itemNo1[i] = 0; // reset the value of each element to 0
// 	itemNo2[i] = 0; // reset the value of each element to 0
// 	itemNo3[i] = 0; // reset the value of each element to 0
// 	quantity1[i] = 0; // reset the value of each element to 0
// 	quantity2[i] = 0; // reset the value of each element to 0
// 	quantity3[i] = 0; // reset the value of each element to 0
// 	}
// 	num=0;
// 	}while(decision!='N' && decision!='n');
// 	return 0;

// }
