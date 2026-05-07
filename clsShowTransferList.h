//#pragma once
//
//#include <iostream>
//#include "clsScreen.h"
//#include "clsBankClient.h"
//#include "clsUser.h"
//#include <iomanip>
//
//class clsShowTransferList : clsScreen
//{
//
//private:
//
//    static void _PrinttransferLoginRecord(clsUser::stTransferLoginRecord TransferLoginRecord)
//    {
//
//        cout << setw(8) << left << "" << "| " << setw(35) << left << TransferLoginRecord.DateTime;
//        cout << "| " << setw(20) << left << TransferLoginRecord.SourcAcc;
//        cout << "| " << setw(20) << left << TransferLoginRecord.DestnationAcc;
//        cout << "| " << setw(10) << left << TransferLoginRecord.Amount;
//        cout << "| " << setw(20) << left << TransferLoginRecord.SourceBalance;
//        cout << "| " << setw(20) << left << TransferLoginRecord.DestnationBalance;
//        cout << "| " << setw(20) << left << TransferLoginRecord.UserName;
//
//    }
//
//public:
//
//    static void ShowLoginRegisterScreen()
//    {
//
//
//        if (!CheckAccessRights(clsUser::enPermissions::pShowLogRegister))
//        {
//            return;
//        }
//
//        vector <clsUser::stTransferLoginRecord> vTransferLogRecord = clsUser::GetTransferLoginListScreen();
//
//        string Title = "\tTransfer Login  List Screen";
//        string SubTitle = "\t\t(" + to_string(vTransferLogRecord.size()) + ") Record(s).";
//
//        _DrawScreenHeader(Title, SubTitle);
//
//        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
//        cout << "_________________________________________\n" << endl;
//
//        cout << setw(8) << left << "" << "| " << left << setw(35) << "Date/Time";
//
//        cout << "| " << left << setw(20) << "s.Acc";
//        cout << "| " << left << setw(20) << "d.Acc";
//        cout << "| " << left << setw(10) << "Amount";
//        cout << "| " << left << setw(20) << "s.Balance";
//        cout << "| " << left << setw(20) << "d.Balance";
//        cout << "| " << left << setw(20) << "User";
//
//        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
//        cout << "_________________________________________\n" << endl;
//
//        if (vTransferLogRecord.size() == 0)
//            cout << "\t\t\t\tNo Logins Available In the System!";
//        else
//
//            for (clsUser::stTransferLoginRecord &Record : vTransferLogRecord)
//            {
//
//                _PrinttransferLoginRecord(Record);
//                cout << endl;
//            }
//
//        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
//        cout << "_________________________________________\n" << endl;
//
//    }
//
//
//    };
//
//
