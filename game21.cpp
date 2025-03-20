//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cmath>
//#include <cctype>
//#include <conio.h>
//#include<cstdio>
//#include<cstdlib>
//#include<ctime>
//#include <random>
//#include<utility>
//#include<vector>
//using namespace std;
//int usermap = 0;
//int compmap = 0;
//int first_card_user = 0;
//int first_card_comp = 0;
//int new_card_user = 0;
//int new_card_comp = 0;
//static void main_menu(string line)
//{
//  if (line == "yes")
//  {
//    std::cout << "Welcome to the game 21" << endl;
//    std::cout << "---------------//-------------------" << endl;
//  }
//  else
//  {
//    std::cout << "Goodbye" << endl;
//    exit(0);
//  }
//  std::cout << endl;
//}
//static void maps()
//{
//  int i = 0;
//  const int valet = 2;
//  const int dama = 3;
//  const int karol = 4;
//  const int tuz = 11;
//  int array_card[10] = { 5,6,7,8,9,10,valet,dama,karol,tuz };
//  std::cout << "playing cards:" << endl;
//  std::cout << endl;
//  for (; i < 10; i++) {
//    std::cout << array_card[i] << " ";
//  }
//  std::cout << endl;
//  std::cout << "Valet = " << " " << valet << endl;
//  std::cout << "Dama = " << " " << dama << endl;
//  std::cout << "Karol = " << " " << karol << endl;
//  std::cout << "Tuz = " << " " << tuz << endl;
//  std::cout << endl;
//}
//static void card_distribution()
//{
//  srand(static_cast<unsigned int>(time(NULL)));
//  string decision;
//  bool f = true;
//  std::cout << "The game begins" << endl;
//  std::cout << "He goes first user" << endl;
//  std::cout << "He walks second comp" << endl;
//  first_card_user = rand() % 10 + 2;
//  first_card_comp = rand() % 10 + 2;
//  usermap = first_card_comp;
//  compmap = first_card_comp;
//  while (f)
//  {
//    std::cout << "Would you like to get another card?" <<
//      " " << "yes / now" << " ";
//    std::cin >> decision;
//    std::cout << endl;
//    if (decision == "yes") {
//      new_card_user = rand() % 10 + 2;
//      usermap += new_card_user;
//      std::cout << "usermap =" << " " << usermap;
//      std::cout << endl;
//    }
//    else if (decision == "now") {
//      new_card_comp = rand() % 10 + 2;
//      compmap += new_card_comp;
//      std::cout << "-----------------::-------------" << endl;
//      std::cout << "compmap =" << " " << compmap;
//      std::cout << endl;
//    }
//    else {
//      f = false;
//      break;
//    }
//  }
//}
//static void determining_the_winners()
//{
//  int card = 21;
//  if (usermap > card && compmap > card) {
//    std::cout << "Game over" << endl;
//    exit(0);
//  }
//  if (usermap > compmap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "The User won" << " " << "Congratulate!" << endl;
//    exit(0);
//  }
//  else if (compmap > usermap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "The Comp won" << " " << "Congratulate!" << endl;
//    exit(0);
//  }
//  else if (compmap == usermap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "Congratulations, you don't have anyone" << endl;
//    exit(0);
//  }
//}
//
//int main() {
//  setlocale(LC_ALL, "RUS");
//
//  string flag;
//  std::cout << "In game 21, the winner is the one who scores the most points." << endl;
//  std::cout << "If a player has more than 21 points, he has lost" << endl;
//  std::cout << "Start the game! (yes/no)" << " " << flag;
//  std::cin >> flag;
//  std::cout << endl;
//  main_menu(flag);
//  maps();
//  card_distribution();
//  determining_the_winners();
//  system("pause");
//  return 0;
//}