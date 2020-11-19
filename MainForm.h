#pragma once

#include <math.h>

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSpace;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnClearEntry;
	private: System::Windows::Forms::Button^ btnPlusMinus;
	protected:




	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigit8;
	private: System::Windows::Forms::Button^ btnDigit9;



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnDigit5;
	private: System::Windows::Forms::Button^ btnDigit6;



	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;



	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnEquals;


	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ btnSquaring;

	private: System::Windows::Forms::Button^ btnSquareRoot;
	private: System::Windows::Forms::Button^ btnMemorySave;
	private: System::Windows::Forms::Button^ btnMemoryRead;
	private: System::Windows::Forms::Button^ btnMemoryClear;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ заданиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->btnSquaring = (gcnew System::Windows::Forms::Button());
			this->btnSquareRoot = (gcnew System::Windows::Forms::Button());
			this->btnMemorySave = (gcnew System::Windows::Forms::Button());
			this->btnMemoryRead = (gcnew System::Windows::Forms::Button());
			this->btnMemoryClear = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->заданиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->BackColor = System::Drawing::SystemColors::Info;
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnSpace->Location = System::Drawing::Point(12, 112);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(80, 80);
			this->btnSpace->TabIndex = 0;
			this->btnSpace->Text = L"";
			this->btnSpace->UseVisualStyleBackColor = false;
			this->btnSpace->Click += gcnew System::EventHandler(this, &MainForm::btnSpace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->Location = System::Drawing::Point(12, 41);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(424, 65);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::Info;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(98, 112);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(80, 80);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"С";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->BackColor = System::Drawing::SystemColors::Info;
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClearEntry->Location = System::Drawing::Point(184, 112);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(80, 80);
			this->btnClearEntry->TabIndex = 0;
			this->btnClearEntry->Text = L"СЕ";
			this->btnClearEntry->UseVisualStyleBackColor = false;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MainForm::btnClearEntry_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlusMinus->Location = System::Drawing::Point(12, 456);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(80, 80);
			this->btnPlusMinus->TabIndex = 0;
			this->btnPlusMinus->Text = L"±";
			this->btnPlusMinus->UseVisualStyleBackColor = false;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MainForm::btnPlusMinus_Click);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit7->Location = System::Drawing::Point(12, 198);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(80, 80);
			this->btnDigit7->TabIndex = 0;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit8->Location = System::Drawing::Point(98, 198);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(80, 80);
			this->btnDigit8->TabIndex = 0;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit9->Location = System::Drawing::Point(184, 198);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(80, 80);
			this->btnDigit9->TabIndex = 0;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(270, 112);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 0;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit4->Location = System::Drawing::Point(12, 284);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(80, 80);
			this->btnDigit4->TabIndex = 0;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit5->Location = System::Drawing::Point(98, 284);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(80, 80);
			this->btnDigit5->TabIndex = 0;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit6->Location = System::Drawing::Point(184, 284);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(80, 80);
			this->btnDigit6->TabIndex = 0;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(270, 198);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 0;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit1->Location = System::Drawing::Point(12, 370);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(80, 80);
			this->btnDigit1->TabIndex = 0;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit2->Location = System::Drawing::Point(98, 370);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(80, 80);
			this->btnDigit2->TabIndex = 0;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit3->Location = System::Drawing::Point(184, 370);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(80, 80);
			this->btnDigit3->TabIndex = 0;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(270, 284);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 0;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(98, 456);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 0;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDecimal->Location = System::Drawing::Point(184, 456);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(80, 80);
			this->btnDecimal->TabIndex = 0;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MainForm::btnDecimal_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEquals->Location = System::Drawing::Point(270, 456);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(80, 80);
			this->btnEquals->TabIndex = 0;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MainForm::btnEquals_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(270, 370);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 80);
			this->button20->TabIndex = 0;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// btnSquaring
			// 
			this->btnSquaring->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSquaring->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSquaring->Location = System::Drawing::Point(356, 112);
			this->btnSquaring->Name = L"btnSquaring";
			this->btnSquaring->Size = System::Drawing::Size(80, 80);
			this->btnSquaring->TabIndex = 2;
			this->btnSquaring->Text = L"х²";
			this->btnSquaring->UseVisualStyleBackColor = false;
			this->btnSquaring->Click += gcnew System::EventHandler(this, &MainForm::btnSquaring_Click);
			// 
			// btnSquareRoot
			// 
			this->btnSquareRoot->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSquareRoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSquareRoot->Location = System::Drawing::Point(356, 198);
			this->btnSquareRoot->Name = L"btnSquareRoot";
			this->btnSquareRoot->Size = System::Drawing::Size(80, 80);
			this->btnSquareRoot->TabIndex = 3;
			this->btnSquareRoot->Text = L"√";
			this->btnSquareRoot->UseVisualStyleBackColor = false;
			this->btnSquareRoot->Click += gcnew System::EventHandler(this, &MainForm::btnSquareRoot_Click);
			// 
			// btnMemorySave
			// 
			this->btnMemorySave->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnMemorySave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemorySave->Location = System::Drawing::Point(356, 284);
			this->btnMemorySave->Name = L"btnMemorySave";
			this->btnMemorySave->Size = System::Drawing::Size(80, 80);
			this->btnMemorySave->TabIndex = 4;
			this->btnMemorySave->Text = L"MS";
			this->btnMemorySave->UseVisualStyleBackColor = false;
			// 
			// btnMemoryRead
			// 
			this->btnMemoryRead->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnMemoryRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemoryRead->Location = System::Drawing::Point(356, 370);
			this->btnMemoryRead->Name = L"btnMemoryRead";
			this->btnMemoryRead->Size = System::Drawing::Size(80, 80);
			this->btnMemoryRead->TabIndex = 5;
			this->btnMemoryRead->Text = L"MR";
			this->btnMemoryRead->UseVisualStyleBackColor = false;
			// 
			// btnMemoryClear
			// 
			this->btnMemoryClear->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnMemoryClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMemoryClear->Location = System::Drawing::Point(356, 456);
			this->btnMemoryClear->Name = L"btnMemoryClear";
			this->btnMemoryClear->Size = System::Drawing::Size(80, 80);
			this->btnMemoryClear->TabIndex = 6;
			this->btnMemoryClear->Text = L"MC";
			this->btnMemoryClear->UseVisualStyleBackColor = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->заданиеToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(446, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// заданиеToolStripMenuItem
			// 
			this->заданиеToolStripMenuItem->Name = L"заданиеToolStripMenuItem";
			this->заданиеToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->заданиеToolStripMenuItem->Text = L"Задание";
			this->заданиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::заданиеToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(446, 541);
			this->Controls->Add(this->btnMemoryClear);
			this->Controls->Add(this->btnMemoryRead);
			this->Controls->Add(this->btnMemorySave);
			this->Controls->Add(this->btnSquareRoot);
			this->Controls->Add(this->btnSquaring);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnSpace);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*
			ФОРМА
		*/

		//смена иконки при загрузке формы
		private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
			Drawing::Icon^ myIcon = gcnew Drawing::Icon("calc.ico");
			this->Icon = myIcon;
		}

		//вывод сообщения при нажатии на кнопку Задание
		private: System::Void заданиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Вариант 6\n\n"
				"Сложение, вычитание, умножение, деление, возведение в степень, извлечение квадратного корня, функции памяти (занести в память, вывести содержимое памяти, очистить память)"
			);
		}

		//вывод сообщения при нажатии на кнопку О программе
		private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Программа 'Калькулятор'\n"
				"Дисциплина: Языки программирования\n"
				"Вариант 6\n"
				"Учебная группа ИНБс-2301 \n"
				"Версия 1.0\n"
				"Разработчик - Юрлов Константин \n"
				"\n\t\t\t2020 год\n");
		}

		/*
			ВЫЧИСЛЕНИЯ
		*/

		double firstDigit, secondDigit, result;
		String^ operators;
		
		//ввод числа с использованием кнопки
		private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

			Button^ Numbers = safe_cast<Button^>(sender);

			if (txtDisplay->Text == "0") {
				txtDisplay->Text = Numbers->Text;
			}
			else {
				txtDisplay->Text = txtDisplay->Text + Numbers->Text;
			}

		}

		private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
			
			Button^ NumbersOperators = safe_cast<Button^>(sender);

			firstDigit = Double::Parse(txtDisplay->Text);
			txtDisplay->Text = "";
			operators = NumbersOperators->Text;
		}

		//действие при нажатии на кнопку точка
		private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {

			if (!txtDisplay->Text->Contains (".")) {
				txtDisplay->Text = txtDisplay->Text + ".";
			}

		}

		//действие при нажатии на кнопку равно
		private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		
			secondDigit = Double::Parse(txtDisplay->Text);

			if (operators == "+") {
				result = firstDigit + secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);
			} else if (operators == "-") {
				result = firstDigit - secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);
			} else if (operators == "/") {
				result = firstDigit / secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);
			} else if (operators == "*") {
				result = firstDigit * secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);
			}

		}

		//действие при нажатии на кнопку Clear
		private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
			txtDisplay->Text = "0";
		}

		//действие при нажатии на кнопку ClearEntry
		private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
			txtDisplay->Text = "0";
		}

		//действие при нажатии на кнопку смены знака
		private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {

			if (txtDisplay->Text->Contains("-")) {
				txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
			} else {
				txtDisplay->Text = "-" + txtDisplay->Text;
			}

		}

		//действие при нажатии на кнопку Backspace
		private: System::Void btnSpace_Click(System::Object^ sender, System::EventArgs^ e) {
		
			//стирание по 1 символу
			if (txtDisplay->Text->Length > 0) {
				txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
			}
			//оставить 0, если нечего стирать
			if (txtDisplay->Text == "") {
				txtDisplay->Text = "0";
			}

		}

		//возведение в квадрат
		private: System::Void btnSquaring_Click(System::Object^ sender, System::EventArgs^ e) {

			firstDigit = Double::Parse(txtDisplay->Text);

			result = firstDigit * firstDigit;
			txtDisplay->Text = System::Convert::ToString(result);

		}

		//извлечение корня
		private: System::Void btnSquareRoot_Click(System::Object^ sender, System::EventArgs^ e) {
		
			firstDigit = Double::Parse(txtDisplay->Text);

			result = sqrt(firstDigit);
			txtDisplay->Text = System::Convert::ToString(result);

		}

};
}
