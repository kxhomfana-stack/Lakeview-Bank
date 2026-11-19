# Lakeview Bank - Banking System

A simple C++ console banking app using arrays, loops and functions.

## Features
- Login by name (5 customers)
- Check Balance
- Deposit with 2% transaction fee
- Transfer between accounts
- Withdraw

## Customers
| Name | Account | Starting Balance |
| --- | --- | --- |
| zinhle | 1001 | R5000 |
| Amo | 1002 | R6000 |
| Lwandle | 1003 | R7000 |
| Alondwe | 1004 | R8000 |
| Imange | 1005 | R9000 |

## How to Run
1. Compile: g++ main.cpp -o bank
2. Run: ./bank
3. Login with a name e.g. zinhle
4. Choose 1-5 from the menu

## Test Result
Deposit R5000 -> Fee R100 -> Credited R4900 -> New Balance R9900 - PASSED
