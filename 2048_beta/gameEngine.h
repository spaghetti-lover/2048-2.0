#pragma once
//Tao bang
int** createData();

void getEqualArray(int** data_nguon, int** data_cpy);

void updateData(int** data, char key, int& diem);

bool isPossibleMove(int** data1, int** data2);

void randomUpgrade(int** data);
//Check thang/thua
bool check_lose(int** data);

bool check_win(int** data);
//Cap nhat diem
void charW(int** data, int& diem);

void charS(int** data, int& diem);

void charA(int** data, int& diem);

void charD(int** data, int& diem);
//Xoa bang
void deleteData(int** data);
