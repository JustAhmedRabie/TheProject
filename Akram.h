﻿#ifndef AKRAM_H
#define AKRAM_H
//void LoadRoams(room *rooms);
void normalizeName(char *str) ;
int  QueryCustomerbyName(Reservation* reserved, char* name, int* indices) ;
void QueryCustomer() ;
//ROOMS SECTION
void QueryRoom() ;
int QueryRoom_ChoiceProcess(char choice) ;
/*By Status*/
void QueryRoomStatus() ;
void QueryRoomStatus_A() ;
void QueryRoomStatus_R() ;
int  QueryStatusbyGet(Room * roomsData, char* Option, int* indices) ;
int QueryRoom_Status_ChoiceProcess(char choice) ;
/*By NUMBER section*/
void QueryRoomNumber() ;
int  QueryRoomNumber_get(Room* roomsData, int inputNumber ) ;
//MENU SECTION
int QueryChoiceProcess(char choice) ;
void Query() ; // just call it , the others are auxiliary
#endif
