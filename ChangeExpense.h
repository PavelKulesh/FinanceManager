//---------------------------------------------------------------------------

#ifndef ChangeExpenseH
#define ChangeExpenseH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TEditExpense : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label1;
	TLabel *Label5;
	TLabel *Label4;
	TEdit *Edit1;
	TDateTimePicker *DateTimePicker1;
	TEdit *Edit2;
	TButton *Done;
	TEdit *Edit3;
	TLabel *Label6;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox5;
	TComboBox *ComboBox1;
	TTimer *Timer1;
	void __fastcall DoneClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TEditExpense(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditExpense *EditExpense;
//---------------------------------------------------------------------------
#endif
