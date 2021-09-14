// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate circumference

#include <iostream>

int main() {
  // This function calculate circumference
  int raidus;
  const double TAU = 6.28;
  double circumference;

  // input
  std::cout << "enter radius of the circle(mm): " << std::endl;
  std::cin >> raidus;

  // process
  circumference = raidus * TAU;

  // putput
  std::cout << "" << std::endl;
  std::cout << "Circumference = τr = " << circumference << " mm" << std::endl;
  std::cout << "\nDone" << std::endl;
}
