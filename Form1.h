#pragma once
typedef unsigned char uint8_t;
typedef unsigned short	uint16_t;
typedef struct
{
	uint8_t Reserve[5]					;
	uint8_t 							: 6;
	uint8_t LIN_Response_Error			: 1;
	uint8_t L_Drv_NotNormd				: 1;
	uint8_t L_Drv_HiEftCndA				: 1;
	uint8_t L_Drv_Revsng				: 1;
	uint8_t L_Drv_SnsngSysFltDetc		: 1;
	uint8_t L_Drv_ThrmlProtnA			: 1;
	uint8_t L_Drv_RelayFltDetc			: 1;
	uint8_t L_Drv_WndLclSwSts			: 3;
	uint8_t L_Drv_WndDclnSpc			: 8;

} APWLFrameType;

typedef struct
{
	uint8_t								: 3;
	uint8_t L_DrvrWndShrtMvReq			: 2;
	uint8_t L_FrtPsngPWLOpEnb			: 1;
	uint8_t								: 2;
	uint8_t Reserve1[4]					   ;
	uint8_t L_FrtPsngWndOpReq			: 3;
	uint8_t L_FrtPsngWndLclSwDsbld		: 1;
	uint8_t L_DrvrWndLclSwDsbld			: 1;
	uint8_t								: 1;
	uint8_t L_FrtPsngWndShrtMvReq		: 2;
	uint8_t L_DrvrPWLOpEnb				: 1;
	uint8_t L_DrvrWndOpReq				: 3;
	uint8_t								: 4;
	uint8_t								: 5;
	uint8_t L1_BCMSysPwrMd				: 2;
	uint8_t								: 1;
} BCM01FrameType;

typedef struct  
{
	uint8_t								: 3;
	uint8_t L_RLWndShrtMvReq			: 2;
	uint8_t L_RRPWLOpEnb				: 1;
	uint8_t								: 2;
	uint8_t Reserve2[4]					   ;
	uint8_t	L_RRWndOpReq				: 3;
	uint8_t L_RRWndLclSwDsbld			: 1;
	uint8_t L_RLWndLclSwDsbld			: 1;
	uint8_t								: 1;
	uint8_t	L_RRWndShrtMvReq			: 2;
	uint8_t L_RLPWLOpEnb				: 1;
	uint8_t L_RLWndOpReq				: 3;
	uint8_t								: 4;
	uint8_t								: 5;
	uint8_t L2_BCMSysPwrMd				: 2;
	uint8_t								: 1;
}BCM02FrameType;
namespace Kvaser_Lin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace linlibCLSNET;
	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  B_Connect;
	protected: 
	private: System::Windows::Forms::Button^  B_Disconnect;
	private: System::Windows::Forms::TextBox^  O_MessageOut;
	private: System::Windows::Forms::ComboBox^  S_APWL;
	private: System::Windows::Forms::Label^  l01;


	private: System::Windows::Forms::TextBox^  O_KeySatus;
	private: System::Windows::Forms::Label^  l03;
	private: System::Windows::Forms::TextBox^  O_WindowsPos;
	private: System::Windows::Forms::Label^  l4;
	private: System::Windows::Forms::Label^  l5;
	private: System::Windows::Forms::ProgressBar^  Bar_OpenVal;
	private: System::Windows::Forms::Label^  l_Percent;




	private: System::Windows::Forms::CheckBox^  C_Enable;
	private: System::Windows::Forms::Button^  B_ShortMoveDown;
	private: System::Windows::Forms::Button^  B_ShortMoveStop;


	private: System::Windows::Forms::Timer^  ISR10MS;
	private: System::Windows::Forms::Button^  LED_HALL;
	private: System::Windows::Forms::Label^  l6;
	private: System::Windows::Forms::Label^  l7;
	private: System::Windows::Forms::Button^  Led_Relay;




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  LED_ANTIPINCH;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  LED_OANTIPINCH;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  LED_INIT;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  LED_OVERHEAT;
	private: System::Windows::Forms::CheckBox^  C_CHILDLOCK;
	private: System::Windows::Forms::Button^  B_MUP;
	private: System::Windows::Forms::Button^  B_MDOWN;
	private: System::Windows::Forms::Button^  B_AUP;
	private: System::Windows::Forms::Button^  B_ADOWN;
	private: System::Windows::Forms::Button^  B_IDLE;
	private: System::Windows::Forms::Panel^  P_BUTTON;





	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  B_SaveLog;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  O_LogSavePath;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::ComboBox^  S_PowerMode;

	private: System::Windows::Forms::Timer^  RefreshTimer;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  B_ShortMoveUp;






	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->B_Connect = (gcnew System::Windows::Forms::Button());
			this->B_Disconnect = (gcnew System::Windows::Forms::Button());
			this->O_MessageOut = (gcnew System::Windows::Forms::TextBox());
			this->S_APWL = (gcnew System::Windows::Forms::ComboBox());
			this->l01 = (gcnew System::Windows::Forms::Label());
			this->O_KeySatus = (gcnew System::Windows::Forms::TextBox());
			this->l03 = (gcnew System::Windows::Forms::Label());
			this->O_WindowsPos = (gcnew System::Windows::Forms::TextBox());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->Bar_OpenVal = (gcnew System::Windows::Forms::ProgressBar());
			this->l_Percent = (gcnew System::Windows::Forms::Label());
			this->C_Enable = (gcnew System::Windows::Forms::CheckBox());
			this->B_ShortMoveDown = (gcnew System::Windows::Forms::Button());
			this->B_ShortMoveStop = (gcnew System::Windows::Forms::Button());
			this->ISR10MS = (gcnew System::Windows::Forms::Timer(this->components));
			this->LED_HALL = (gcnew System::Windows::Forms::Button());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->Led_Relay = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LED_ANTIPINCH = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LED_OANTIPINCH = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LED_INIT = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LED_OVERHEAT = (gcnew System::Windows::Forms::Button());
			this->C_CHILDLOCK = (gcnew System::Windows::Forms::CheckBox());
			this->B_MUP = (gcnew System::Windows::Forms::Button());
			this->B_MDOWN = (gcnew System::Windows::Forms::Button());
			this->B_AUP = (gcnew System::Windows::Forms::Button());
			this->B_ADOWN = (gcnew System::Windows::Forms::Button());
			this->B_IDLE = (gcnew System::Windows::Forms::Button());
			this->P_BUTTON = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->B_SaveLog = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->O_LogSavePath = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->S_PowerMode = (gcnew System::Windows::Forms::ComboBox());
			this->RefreshTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->B_ShortMoveUp = (gcnew System::Windows::Forms::Button());
			this->P_BUTTON->SuspendLayout();
			this->SuspendLayout();
			// 
			// B_Connect
			// 
			this->B_Connect->Location = System::Drawing::Point(53, 32);
			this->B_Connect->Name = L"B_Connect";
			this->B_Connect->Size = System::Drawing::Size(98, 25);
			this->B_Connect->TabIndex = 0;
			this->B_Connect->Text = L"连接 &C";
			this->B_Connect->UseVisualStyleBackColor = true;
			this->B_Connect->Click += gcnew System::EventHandler(this, &Form1::B_Connect_Click);
			// 
			// B_Disconnect
			// 
			this->B_Disconnect->Location = System::Drawing::Point(186, 32);
			this->B_Disconnect->Name = L"B_Disconnect";
			this->B_Disconnect->Size = System::Drawing::Size(98, 25);
			this->B_Disconnect->TabIndex = 1;
			this->B_Disconnect->Text = L"断开 &D";
			this->B_Disconnect->UseVisualStyleBackColor = true;
			this->B_Disconnect->Click += gcnew System::EventHandler(this, &Form1::B_Disconnect_Click);
			// 
			// O_MessageOut
			// 
			this->O_MessageOut->Location = System::Drawing::Point(14, 120);
			this->O_MessageOut->Multiline = true;
			this->O_MessageOut->Name = L"O_MessageOut";
			this->O_MessageOut->Size = System::Drawing::Size(706, 410);
			this->O_MessageOut->TabIndex = 2;
			// 
			// S_APWL
			// 
			this->S_APWL->FormattingEnabled = true;
			this->S_APWL->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"驾驶侧", L"乘客侧", L"驾驶侧后侧", L"乘客侧后侧"});
			this->S_APWL->Location = System::Drawing::Point(894, 69);
			this->S_APWL->Name = L"S_APWL";
			this->S_APWL->Size = System::Drawing::Size(121, 23);
			this->S_APWL->TabIndex = 3;
			this->S_APWL->Text = L"APWL位置";
			this->S_APWL->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::S_APWL_SelectedIndexChanged);
			// 
			// l01
			// 
			this->l01->AutoSize = true;
			this->l01->Location = System::Drawing::Point(819, 74);
			this->l01->Name = L"l01";
			this->l01->Size = System::Drawing::Size(69, 15);
			this->l01->TabIndex = 4;
			this->l01->Text = L"APWL位置";
			// 
			// O_KeySatus
			// 
			this->O_KeySatus->Location = System::Drawing::Point(894, 110);
			this->O_KeySatus->Name = L"O_KeySatus";
			this->O_KeySatus->ReadOnly = true;
			this->O_KeySatus->Size = System::Drawing::Size(121, 25);
			this->O_KeySatus->TabIndex = 8;
			// 
			// l03
			// 
			this->l03->AutoSize = true;
			this->l03->Location = System::Drawing::Point(819, 120);
			this->l03->Name = L"l03";
			this->l03->Size = System::Drawing::Size(67, 15);
			this->l03->TabIndex = 7;
			this->l03->Text = L"按键状态";
			// 
			// O_WindowsPos
			// 
			this->O_WindowsPos->Location = System::Drawing::Point(894, 146);
			this->O_WindowsPos->Name = L"O_WindowsPos";
			this->O_WindowsPos->ReadOnly = true;
			this->O_WindowsPos->Size = System::Drawing::Size(121, 25);
			this->O_WindowsPos->TabIndex = 10;
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->Location = System::Drawing::Point(819, 156);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(67, 15);
			this->l4->TabIndex = 9;
			this->l4->Text = L"车窗位置";
			// 
			// l5
			// 
			this->l5->AutoSize = true;
			this->l5->Location = System::Drawing::Point(819, 191);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(67, 15);
			this->l5->TabIndex = 11;
			this->l5->Text = L"车窗开度";
			// 
			// Bar_OpenVal
			// 
			this->Bar_OpenVal->Location = System::Drawing::Point(824, 210);
			this->Bar_OpenVal->Name = L"Bar_OpenVal";
			this->Bar_OpenVal->Size = System::Drawing::Size(191, 23);
			this->Bar_OpenVal->TabIndex = 12;
			// 
			// l_Percent
			// 
			this->l_Percent->AutoSize = true;
			this->l_Percent->Location = System::Drawing::Point(894, 189);
			this->l_Percent->Name = L"l_Percent";
			this->l_Percent->Size = System::Drawing::Size(23, 15);
			this->l_Percent->TabIndex = 13;
			this->l_Percent->Text = L"NA";
			// 
			// C_Enable
			// 
			this->C_Enable->AutoSize = true;
			this->C_Enable->Location = System::Drawing::Point(824, 262);
			this->C_Enable->Name = L"C_Enable";
			this->C_Enable->Size = System::Drawing::Size(77, 19);
			this->C_Enable->TabIndex = 15;
			this->C_Enable->Text = L"Enable";
			this->C_Enable->UseVisualStyleBackColor = true;
			this->C_Enable->CheckedChanged += gcnew System::EventHandler(this, &Form1::C_Enable_CheckedChanged);
			// 
			// B_ShortMoveDown
			// 
			this->B_ShortMoveDown->Location = System::Drawing::Point(820, 335);
			this->B_ShortMoveDown->Name = L"B_ShortMoveDown";
			this->B_ShortMoveDown->Size = System::Drawing::Size(135, 23);
			this->B_ShortMoveDown->TabIndex = 16;
			this->B_ShortMoveDown->Text = L"ShortMoveDown";
			this->B_ShortMoveDown->UseVisualStyleBackColor = true;
			this->B_ShortMoveDown->Click += gcnew System::EventHandler(this, &Form1::B_ShortMoveDown_Click);
			// 
			// B_ShortMoveStop
			// 
			this->B_ShortMoveStop->Location = System::Drawing::Point(820, 373);
			this->B_ShortMoveStop->Name = L"B_ShortMoveStop";
			this->B_ShortMoveStop->Size = System::Drawing::Size(135, 23);
			this->B_ShortMoveStop->TabIndex = 17;
			this->B_ShortMoveStop->Text = L"ShortMoveStop";
			this->B_ShortMoveStop->UseVisualStyleBackColor = true;
			this->B_ShortMoveStop->Click += gcnew System::EventHandler(this, &Form1::B_ShortMoveStop_Click);
			// 
			// ISR10MS
			// 
			this->ISR10MS->Interval = 10;
			this->ISR10MS->Tick += gcnew System::EventHandler(this, &Form1::ISR10MS_Tick);
			// 
			// LED_HALL
			// 
			this->LED_HALL->BackColor = System::Drawing::Color::Black;
			this->LED_HALL->Enabled = false;
			this->LED_HALL->Location = System::Drawing::Point(1114, 64);
			this->LED_HALL->Name = L"LED_HALL";
			this->LED_HALL->Size = System::Drawing::Size(25, 25);
			this->LED_HALL->TabIndex = 18;
			this->LED_HALL->UseVisualStyleBackColor = false;
			// 
			// l6
			// 
			this->l6->AutoSize = true;
			this->l6->Location = System::Drawing::Point(1026, 69);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(69, 15);
			this->l6->TabIndex = 19;
			this->l6->Text = L"Hall故障";
			// 
			// l7
			// 
			this->l7->AutoSize = true;
			this->l7->Location = System::Drawing::Point(1026, 103);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(82, 15);
			this->l7->TabIndex = 21;
			this->l7->Text = L"继电器故障";
			this->l7->Click += gcnew System::EventHandler(this, &Form1::l7_Click);
			// 
			// Led_Relay
			// 
			this->Led_Relay->BackColor = System::Drawing::Color::Black;
			this->Led_Relay->Enabled = false;
			this->Led_Relay->Location = System::Drawing::Point(1114, 95);
			this->Led_Relay->Name = L"Led_Relay";
			this->Led_Relay->Size = System::Drawing::Size(25, 25);
			this->Led_Relay->TabIndex = 20;
			this->Led_Relay->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1028, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 15);
			this->label3->TabIndex = 27;
			this->label3->Text = L"防夹反转";
			// 
			// LED_ANTIPINCH
			// 
			this->LED_ANTIPINCH->BackColor = System::Drawing::Color::Black;
			this->LED_ANTIPINCH->Enabled = false;
			this->LED_ANTIPINCH->Location = System::Drawing::Point(1116, 159);
			this->LED_ANTIPINCH->Name = L"LED_ANTIPINCH";
			this->LED_ANTIPINCH->Size = System::Drawing::Size(25, 25);
			this->LED_ANTIPINCH->TabIndex = 26;
			this->LED_ANTIPINCH->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1028, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 15);
			this->label4->TabIndex = 29;
			this->label4->Text = L"防夹抑制";
			// 
			// LED_OANTIPINCH
			// 
			this->LED_OANTIPINCH->BackColor = System::Drawing::Color::Black;
			this->LED_OANTIPINCH->Enabled = false;
			this->LED_OANTIPINCH->Location = System::Drawing::Point(1116, 192);
			this->LED_OANTIPINCH->Name = L"LED_OANTIPINCH";
			this->LED_OANTIPINCH->Size = System::Drawing::Size(25, 25);
			this->LED_OANTIPINCH->TabIndex = 28;
			this->LED_OANTIPINCH->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1184, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 15);
			this->label5->TabIndex = 30;
			this->label5->Text = L"初始化状态";
			// 
			// LED_INIT
			// 
			this->LED_INIT->BackColor = System::Drawing::Color::Black;
			this->LED_INIT->Enabled = false;
			this->LED_INIT->Location = System::Drawing::Point(1202, 95);
			this->LED_INIT->Name = L"LED_INIT";
			this->LED_INIT->Size = System::Drawing::Size(50, 50);
			this->LED_INIT->TabIndex = 31;
			this->LED_INIT->UseVisualStyleBackColor = false;
			this->LED_INIT->Click += gcnew System::EventHandler(this, &Form1::LED_INIT_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1028, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 15);
			this->label6->TabIndex = 33;
			this->label6->Text = L"热保护";
			// 
			// LED_OVERHEAT
			// 
			this->LED_OVERHEAT->BackColor = System::Drawing::Color::Black;
			this->LED_OVERHEAT->Enabled = false;
			this->LED_OVERHEAT->Location = System::Drawing::Point(1116, 223);
			this->LED_OVERHEAT->Name = L"LED_OVERHEAT";
			this->LED_OVERHEAT->Size = System::Drawing::Size(25, 25);
			this->LED_OVERHEAT->TabIndex = 32;
			this->LED_OVERHEAT->UseVisualStyleBackColor = false;
			// 
			// C_CHILDLOCK
			// 
			this->C_CHILDLOCK->AutoSize = true;
			this->C_CHILDLOCK->Location = System::Drawing::Point(970, 262);
			this->C_CHILDLOCK->Name = L"C_CHILDLOCK";
			this->C_CHILDLOCK->Size = System::Drawing::Size(59, 19);
			this->C_CHILDLOCK->TabIndex = 34;
			this->C_CHILDLOCK->Text = L"童锁";
			this->C_CHILDLOCK->UseVisualStyleBackColor = true;
			this->C_CHILDLOCK->CheckedChanged += gcnew System::EventHandler(this, &Form1::C_CHILDLOCK_CheckedChanged);
			// 
			// B_MUP
			// 
			this->B_MUP->Location = System::Drawing::Point(7, 49);
			this->B_MUP->Name = L"B_MUP";
			this->B_MUP->Size = System::Drawing::Size(75, 23);
			this->B_MUP->TabIndex = 35;
			this->B_MUP->Text = L"手动上升";
			this->B_MUP->UseVisualStyleBackColor = true;
			this->B_MUP->Click += gcnew System::EventHandler(this, &Form1::B_MUP_Click);
			// 
			// B_MDOWN
			// 
			this->B_MDOWN->Location = System::Drawing::Point(7, 126);
			this->B_MDOWN->Name = L"B_MDOWN";
			this->B_MDOWN->Size = System::Drawing::Size(75, 23);
			this->B_MDOWN->TabIndex = 36;
			this->B_MDOWN->Text = L"手动下降";
			this->B_MDOWN->UseVisualStyleBackColor = true;
			this->B_MDOWN->Click += gcnew System::EventHandler(this, &Form1::B_MDOWN_Click);
			// 
			// B_AUP
			// 
			this->B_AUP->Location = System::Drawing::Point(7, 9);
			this->B_AUP->Name = L"B_AUP";
			this->B_AUP->Size = System::Drawing::Size(75, 23);
			this->B_AUP->TabIndex = 37;
			this->B_AUP->Text = L"自动上升";
			this->B_AUP->UseVisualStyleBackColor = true;
			this->B_AUP->Click += gcnew System::EventHandler(this, &Form1::B_AUP_Click);
			// 
			// B_ADOWN
			// 
			this->B_ADOWN->Location = System::Drawing::Point(7, 166);
			this->B_ADOWN->Name = L"B_ADOWN";
			this->B_ADOWN->Size = System::Drawing::Size(75, 23);
			this->B_ADOWN->TabIndex = 38;
			this->B_ADOWN->Text = L"自动下降";
			this->B_ADOWN->UseVisualStyleBackColor = true;
			this->B_ADOWN->Click += gcnew System::EventHandler(this, &Form1::B_ADOWN_Click);
			// 
			// B_IDLE
			// 
			this->B_IDLE->Location = System::Drawing::Point(7, 87);
			this->B_IDLE->Name = L"B_IDLE";
			this->B_IDLE->Size = System::Drawing::Size(75, 23);
			this->B_IDLE->TabIndex = 39;
			this->B_IDLE->Text = L"空挡";
			this->B_IDLE->UseVisualStyleBackColor = true;
			this->B_IDLE->Click += gcnew System::EventHandler(this, &Form1::B_IDLE_Click);
			// 
			// P_BUTTON
			// 
			this->P_BUTTON->Controls->Add(this->B_AUP);
			this->P_BUTTON->Controls->Add(this->B_ADOWN);
			this->P_BUTTON->Controls->Add(this->B_IDLE);
			this->P_BUTTON->Controls->Add(this->B_MDOWN);
			this->P_BUTTON->Controls->Add(this->B_MUP);
			this->P_BUTTON->Location = System::Drawing::Point(961, 286);
			this->P_BUTTON->Name = L"P_BUTTON";
			this->P_BUTTON->Size = System::Drawing::Size(99, 202);
			this->P_BUTTON->TabIndex = 40;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 98);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 15);
			this->label8->TabIndex = 45;
			this->label8->Text = L"实时数据";
			// 
			// B_SaveLog
			// 
			this->B_SaveLog->Location = System::Drawing::Point(532, 90);
			this->B_SaveLog->Name = L"B_SaveLog";
			this->B_SaveLog->Size = System::Drawing::Size(98, 23);
			this->B_SaveLog->TabIndex = 46;
			this->B_SaveLog->Text = L"保存日志";
			this->B_SaveLog->UseVisualStyleBackColor = true;
			this->B_SaveLog->Click += gcnew System::EventHandler(this, &Form1::B_SaveLog_Click);
			// 
			// O_LogSavePath
			// 
			this->O_LogSavePath->Location = System::Drawing::Point(12, 562);
			this->O_LogSavePath->Name = L"O_LogSavePath";
			this->O_LogSavePath->ReadOnly = true;
			this->O_LogSavePath->Size = System::Drawing::Size(381, 25);
			this->O_LogSavePath->TabIndex = 47;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 532);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 15);
			this->label9->TabIndex = 48;
			this->label9->Text = L"日志保存路径";
			// 
			// S_PowerMode
			// 
			this->S_PowerMode->FormattingEnabled = true;
			this->S_PowerMode->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"OFF", L"ACC", L"ON", L"START"});
			this->S_PowerMode->Location = System::Drawing::Point(820, 465);
			this->S_PowerMode->Name = L"S_PowerMode";
			this->S_PowerMode->Size = System::Drawing::Size(121, 23);
			this->S_PowerMode->TabIndex = 50;
			this->S_PowerMode->Text = L"电源模式";
			this->S_PowerMode->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::S_PowerMode_SelectedIndexChanged);
			// 
			// RefreshTimer
			// 
			this->RefreshTimer->Interval = 200;
			this->RefreshTimer->Tick += gcnew System::EventHandler(this, &Form1::RefreshTimer_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1126, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 40;
			this->button1->Text = L"休眠";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1126, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 52;
			this->button2->Text = L"唤醒";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// B_ShortMoveUp
			// 
			this->B_ShortMoveUp->Location = System::Drawing::Point(820, 295);
			this->B_ShortMoveUp->Name = L"B_ShortMoveUp";
			this->B_ShortMoveUp->Size = System::Drawing::Size(135, 23);
			this->B_ShortMoveUp->TabIndex = 53;
			this->B_ShortMoveUp->Text = L"ShortMoveUp";
			this->B_ShortMoveUp->UseVisualStyleBackColor = true;
			this->B_ShortMoveUp->Click += gcnew System::EventHandler(this, &Form1::B_ShortMoveUp_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 599);
			this->Controls->Add(this->B_ShortMoveUp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->S_PowerMode);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->O_LogSavePath);
			this->Controls->Add(this->B_SaveLog);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->P_BUTTON);
			this->Controls->Add(this->C_CHILDLOCK);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LED_OVERHEAT);
			this->Controls->Add(this->LED_INIT);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->LED_OANTIPINCH);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LED_ANTIPINCH);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->Led_Relay);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->LED_HALL);
			this->Controls->Add(this->B_ShortMoveStop);
			this->Controls->Add(this->B_ShortMoveDown);
			this->Controls->Add(this->C_Enable);
			this->Controls->Add(this->l_Percent);
			this->Controls->Add(this->Bar_OpenVal);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->O_WindowsPos);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->O_KeySatus);
			this->Controls->Add(this->l03);
			this->Controls->Add(this->l01);
			this->Controls->Add(this->S_APWL);
			this->Controls->Add(this->O_MessageOut);
			this->Controls->Add(this->B_Disconnect);
			this->Controls->Add(this->B_Connect);
			this->Name = L"Form1";
			this->Text = L"IP31";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->P_BUTTON->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Int32 linHandle;
	public: array<UInt32> ^ApwlIdArray;
	public: UInt32 ApwlIndex;
	public: array<String^> ^ RunStatusArray;
	public: array<String^>^ KeyStatusArray;
	public:	array<String^>^ WindowsPosArray;
	public: array<System::Drawing::Color >^ LedColorArray;
	public: String^ filepath;
	public:bool SaveLogFlag,RefreshFlag;
	public:	array< System::String ^ >^ OutBuffer;

	public:UInt32 BCM_WdwEnable,BCM_ChildLock,Wdw_CenterSwitch,PowerMode,ShortMove;

	public: void SysInit(void)
			{
				linHandle = -1;
				ApwlIdArray = gcnew array<UInt32>(4);
				ApwlIdArray[0] = 0x08;
				ApwlIdArray[1] = 0x09;
				ApwlIdArray[2] = 0x17;
				ApwlIdArray[3] = 0x18;
				ApwlIndex = 0;

				RunStatusArray = gcnew array<String^>(5);
				
				RunStatusArray[0] = "停止";
				RunStatusArray[1] = "手动上升";
				RunStatusArray[2] = "手动下降";
				RunStatusArray[3] = "自动上升";
				RunStatusArray[4] = "自动下降";

				array<String^>^ KeyStatusArray1 = {"空挡","手动上升","手动下降","自动上升","自动下降","RES","RES","按键粘连"};
				KeyStatusArray = KeyStatusArray1;

				array<String^>^ WindowsPosArray1 = {"中间位置","完全打开","完全关闭","无效"};
				WindowsPosArray = WindowsPosArray1;
				 array<System::Drawing::Color >^ LedColorArray1 = {System::Drawing::Color::Black,System::Drawing::Color::Red};
				 LedColorArray = LedColorArray1;

				 BCM_WdwEnable = 0;
				 BCM_ChildLock = 0;
				 Wdw_CenterSwitch = 0;
				 ShortMove = 0;
				 SaveLogFlag = false;
				 OutBuffer = gcnew array< System::String ^ >(26);
				 PowerMode = 0;
				 RefreshFlag = false;
			}
	public: void UIInit(void)
			{
				B_Connect->Enabled = false;
				B_Disconnect->Enabled = false;
			}
	public: void DisableSys(void)
			{
				Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;
				LinRet = Linlib::linClose(linHandle);
				if (LinRet == Linlib::LinStatus::linOK)
				{
					B_Disconnect->Enabled = false;
					B_Connect->Enabled = true;
					ISR10MS->Enabled = false;
					RefreshTimer->Enabled = false;
					//O_MessageOut->Text = "Kvaser断开成功";
				} 
				else
				{
					O_MessageOut->Text = "Kvaser断开失败";
				}
			}
	public: void MessageDisplay(String ^ LineBuffer)
			{
				UInt32 index = 0;
				String ^ Out2TexBox = "";
				for(index = 2;index < OutBuffer->Length;index++)
				{
					OutBuffer[index - 1] = OutBuffer[index];
				}
				OutBuffer[0] = "时间	ID	DLC	D0	D1	D2	D3	D4	D5	D6	D7	\r\n";
				OutBuffer[OutBuffer->Length - 1] = LineBuffer + "\r\n";
				for (index = 0;index < OutBuffer->Length;index++)
				{
					Out2TexBox += OutBuffer[index];
				}
				if (RefreshFlag == true)
				{
					RefreshFlag = false;
					O_MessageOut->Text = Out2TexBox;
				}
				
			}
	public: void ScheduledLoader(void)
			{
				using namespace System::IO::Ports;
				using namespace System::IO;
				static UInt32 LoaderStep = 0;
				String ^ LineBuffer = "";
				switch(LoaderStep)
				{
				case 0 :
					{
						
						Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;
						array<Byte> ^ SendArray = gcnew array<Byte>(8);
						Byte temp[8] = {0};
						Byte tempindex = 0;
						BCM01FrameType * BCM01_CTR = nullptr;
						BCM01_CTR = (BCM01FrameType *)temp;
						BCM01_CTR->L_FrtPsngPWLOpEnb = BCM_WdwEnable;
						BCM01_CTR->L_DrvrPWLOpEnb = BCM_WdwEnable;
						BCM01_CTR->L_FrtPsngWndLclSwDsbld = BCM_ChildLock;
						BCM01_CTR->L_DrvrWndLclSwDsbld = BCM_ChildLock;
						BCM01_CTR->L1_BCMSysPwrMd = PowerMode;

						switch(ApwlIndex)
						{
						case 0 :
							{
								BCM01_CTR->L_DrvrWndOpReq = Wdw_CenterSwitch;
								BCM01_CTR->L_DrvrWndShrtMvReq = ShortMove;
							}
							break;
						case 1 :
							{
								BCM01_CTR->L_FrtPsngWndOpReq = Wdw_CenterSwitch;
								BCM01_CTR->L_FrtPsngWndShrtMvReq = ShortMove;
							}
							break;
						default:
							{
								;
							}
							break;

						}

						for (tempindex = 0;tempindex < 8;tempindex++)
						{
							SendArray[tempindex] = temp[tempindex];
						}

						LinRet = Linlib::linWriteMessage(linHandle,0x35,SendArray,8);

						if (LinRet == Linlib::LinStatus::linOK)
						{
							UInt32 ReadId = 0;
							UInt64 TimeSample = 0;
							
							UInt32 index = 0;
							array<Byte> ^ ReadArray = gcnew array<Byte>(8);
							Linlib::LinMessageInfo ^ msginfo = gcnew Linlib::LinMessageInfo();
							UInt32 ReadLength = 0;
							UInt32 ReadFlag = 0;
							LinRet =Linlib::linReadMessageWait(linHandle,ReadId,ReadArray,ReadLength,ReadFlag,msginfo,50);

							TimeSample = Linlib::linReadTimer(linHandle);
							LineBuffer = TimeSample.ToString() + "	";
							LineBuffer += ReadId.ToString("X") + "	";
							LineBuffer += ReadLength.ToString("X") + "	";
							for (index = 0;index < ReadLength;index ++)
							{
								LineBuffer += ReadArray[index].ToString("X") + "	";
							}
						}
						else
						{
							LoaderStep = 0;
						}
						if (LinRet == Linlib::LinStatus::linOK)
						{
							LoaderStep = 1;
						} 
						else
						{
							LineBuffer = "";
							LoaderStep = 0;
						}
					} break;
				case 1:
					{
						Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;
						array<Byte> ^ SendArray = gcnew array<Byte>(8);
						Byte temp[8] = {0};
						Byte tempindex = 0;
						BCM02FrameType * BCM02_CTR = nullptr;
						BCM02_CTR = (BCM02FrameType *)temp;
						BCM02_CTR->L_RRPWLOpEnb = BCM_WdwEnable;
						BCM02_CTR->L_RLPWLOpEnb = BCM_WdwEnable;
						BCM02_CTR->L_RRWndLclSwDsbld = BCM_ChildLock;
						BCM02_CTR->L_RLWndLclSwDsbld = BCM_ChildLock;
						BCM02_CTR->L2_BCMSysPwrMd = PowerMode;
						switch(ApwlIndex)
						{
						case 2 :
							{
								BCM02_CTR->L_RLWndOpReq = Wdw_CenterSwitch;
								BCM02_CTR->L_RLWndShrtMvReq = ShortMove;
							}
							break;
						case 3:
							{
								BCM02_CTR->L_RRWndOpReq = Wdw_CenterSwitch;
								BCM02_CTR->L_RRWndShrtMvReq = ShortMove;
							}
							break;
						default:
							{
								;
							}
							break;
						}

						for (tempindex = 0;tempindex < 8;tempindex++)
						{
							SendArray[tempindex] = temp[tempindex];
						}
						LinRet = Linlib::linWriteMessage(linHandle,0x16,SendArray,8);

						if (LinRet == Linlib::LinStatus::linOK)
						{
							UInt64 TimeSample = 0;
							UInt32 index = 0;
							UInt32 ReadId = 0;
							array<Byte> ^ ReadArray = gcnew array<Byte>(8);
							Linlib::LinMessageInfo ^ msginfo = gcnew Linlib::LinMessageInfo();
							UInt32 ReadLength = 0;
							UInt32 ReadFlag = 0;
							LinRet =Linlib::linReadMessageWait(linHandle,ReadId,ReadArray,ReadLength,ReadFlag,msginfo,50);
							TimeSample = Linlib::linReadTimer(linHandle);
							LineBuffer = TimeSample.ToString() + "	";
							LineBuffer += ReadId.ToString("X") + "	";
							LineBuffer += ReadLength.ToString("X") + "	";
							for (index = 0;index < ReadLength;index ++)
							{
								LineBuffer += ReadArray[index].ToString("X") + "	";
							}
						}
						else
						{
							LoaderStep = 1;
						}
						if (LinRet == Linlib::LinStatus::linOK)
						{
							LoaderStep = 2;
						} 
						else
						{
							LineBuffer = "";
							LoaderStep = 1;
						}
					}break;
				case 2:
					{
						APWLFrameType * ApwlInfo = nullptr;
						Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;
						UInt32 ReadId = 0;
						array<Byte> ^ ReadArray = gcnew array<Byte>(8);
						Linlib::LinMessageInfo ^ msginfo = gcnew Linlib::LinMessageInfo();
						UInt32 ReadLength = 0;
						UInt32 ReadFlag = 0;
						Byte temp[8] = {0};
						Byte tempindex = 0;
						LinRet = Linlib::linRequestMessage(linHandle,ApwlIdArray[ApwlIndex]);
						if (LinRet == Linlib::LinStatus::linOK)
						{
							LinRet =Linlib::linReadMessageWait(linHandle,ReadId,ReadArray,ReadLength,ReadFlag,msginfo,50);
						}
						else
						{
							LoaderStep = 2;
						}
						if (LinRet == Linlib::LinStatus::linOK)
						{
							UInt64 TimeSample = 0;
							UInt32 index = 0;
							UInt32 OutTemp = 0;
							for (tempindex = 0;(tempindex < ReadLength)&&(tempindex < 8);tempindex++)
							{
								temp[tempindex] = ReadArray[tempindex];
							}
							ApwlInfo = (APWLFrameType *)temp;
							
							O_KeySatus->Text = KeyStatusArray[ApwlInfo->L_Drv_WndLclSwSts];
							
							if (ApwlInfo->L_Drv_WndDclnSpc < 201)
							{
								Bar_OpenVal->Value = ApwlInfo->L_Drv_WndDclnSpc / 2;
								OutTemp = ApwlInfo->L_Drv_WndDclnSpc / 2;
								l_Percent->Text = OutTemp.ToString() + "%";
							} 
							else
							{
								Bar_OpenVal->Value = 0;
								l_Percent->Text = "NA";
							}

							LED_HALL->BackColor = LedColorArray[ApwlInfo->L_Drv_SnsngSysFltDetc];
							Led_Relay->BackColor = LedColorArray[ApwlInfo->L_Drv_RelayFltDetc];
							
							LED_ANTIPINCH->BackColor = LedColorArray[ApwlInfo->L_Drv_Revsng];
							LED_OANTIPINCH->BackColor = LedColorArray[ApwlInfo->L_Drv_HiEftCndA];
							LED_OVERHEAT->BackColor = LedColorArray[ApwlInfo->L_Drv_ThrmlProtnA];
							LED_INIT->BackColor = LedColorArray[(~ApwlInfo->L_Drv_NotNormd) & 0x01];

							TimeSample = Linlib::linReadTimer(linHandle);
							LineBuffer = TimeSample.ToString() + "	";
							LineBuffer += ReadId.ToString("X") + "	";
							LineBuffer += ReadLength.ToString("X") + "	";
							for (index = 0;index < ReadLength;index ++)
							{
								LineBuffer += ReadArray[index].ToString("X") + "	";
							}

							LoaderStep = 0;
						} 
						else
						{
							LineBuffer = "";
							LoaderStep = 2;
						}
						
					}break;
				default:
					{
						;
					}break;
				}
				MessageDisplay(LineBuffer);
				if (SaveLogFlag == true)
				{
					LineBuffer += "\r\n";
					File::AppendAllText(filepath,LineBuffer);
					
				}
			}
	private: System::Void C_Enable_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				if (C_Enable->Checked == true)
				{
					BCM_WdwEnable = 1;
				} 
				else
				{
					BCM_WdwEnable = 0;
				}
				 
			 }
private: System::Void B_Connect_Click(System::Object^  sender, System::EventArgs^  e) {
			 Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;

			linHandle = Linlib::linOpenChannel(0,Linlib::LIN_MASTER);
			if (linHandle >= 0)
			{
				LinRet = Linlib::LinStatus::linOK;
			}
			else
			{
				LinRet = Linlib::LinStatus::linERR_DRIVER;
			}
			if (LinRet == Linlib::LinStatus::linOK)
			{
				LinRet = Linlib::linSetBitrate(linHandle,19200);
			}
			else
			{
				;
			}
			if (LinRet == Linlib::LinStatus::linOK)
			{
				LinRet = Linlib::linBusOn(linHandle);
			} 
			else
			{
				;
			}
			if (LinRet == Linlib::LinStatus::linOK)
			{
				LinRet = Linlib::linSetupLIN(linHandle,Linlib::LIN_ENHANCED_CHECKSUM|Linlib::LIN_VARIABLE_DLC,19200);
			} 
			else
			{
			}
			if (LinRet == Linlib::LinStatus::linOK)
			{
				O_MessageOut->Text = "Kvaser连接成功";
				B_Connect->Enabled = false;
				B_Disconnect->Enabled = true;
				ISR10MS->Enabled = true;
				RefreshTimer->Enabled = true;
			} 
			else
			{
				O_MessageOut->Text = "Kvaser连接失败";
				ISR10MS->Enabled = false;
			}
			
			
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 SysInit();
			 UIInit();
		 }
private: System::Void S_APWL_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 B_Connect->Enabled = true;
			 ApwlIndex = S_APWL->SelectedIndex;
			 
		 }
private: System::Void B_Disconnect_Click(System::Object^  sender, System::EventArgs^  e) {
			 DisableSys();
		 }
private: System::Void ISR10MS_Tick(System::Object^  sender, System::EventArgs^  e) {
			 ScheduledLoader();

		 }
private: System::Void l7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void LED_INIT_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void C_CHILDLOCK_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (C_CHILDLOCK->Checked == true)
			 {
				 BCM_ChildLock = 1;
			 } 
			 else
			 {
				 BCM_ChildLock = 0;
			 }
		 }
private: System::Void B_AUP_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wdw_CenterSwitch = 3;
		 }
private: System::Void B_MUP_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wdw_CenterSwitch = 1;
		 }
private: System::Void B_IDLE_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wdw_CenterSwitch = 0;
		 }
private: System::Void B_MDOWN_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wdw_CenterSwitch = 2;
		 }
private: System::Void B_ADOWN_Click(System::Object^  sender, System::EventArgs^  e) {
			 Wdw_CenterSwitch = 4;
		 }

private: System::Void IN_OPENVALUE_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 
			 
		 }

private: System::Void B_SaveLog_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
			 saveFileDialog1->Filter =  "txt files (*.txt)|*.txt";
			 saveFileDialog1->FilterIndex = 2;
			 saveFileDialog1->RestoreDirectory = true;
			 saveFileDialog1->InitialDirectory = AppDomain::CurrentDomain->BaseDirectory;;
			 if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK  )
			 {
				 filepath = saveFileDialog1->FileName;
				 SaveLogFlag = true;
				 O_LogSavePath->Text = filepath;

			 }
			 else
			 {
				 filepath = "";
				 SaveLogFlag = false;
			 }
		 }
private: System::Void S_PowerMode_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 PowerMode = S_PowerMode->SelectedIndex;
		 }

private: System::Void RefreshTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 RefreshFlag = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			ISR10MS->Enabled = false;
			Linlib::LinStatus LinRet = Linlib::LinStatus::linOK;
			array<Byte> ^ SendArray = gcnew array<Byte>(8);
			SendArray[0] = 0;
			SendArray[1] = 0xff;
			SendArray[2] = 0xff;
			SendArray[3] = 0xff;
			SendArray[4] = 0xff;
			SendArray[5] = 0xff;
			SendArray[6] = 0xff;
			SendArray[7] = 0xff;

			LinRet = Linlib::linWriteMessage(linHandle,0x3c,SendArray,8);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Linlib::linWriteWakeup(linHandle,3,50);
			 ISR10MS->Enabled = true;
		 }

private: System::Void B_ShortMoveDown_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShortMove = 1;
		 }
private: System::Void B_ShortMoveUp_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShortMove = 2;
		 }
private: System::Void B_ShortMoveStop_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShortMove = 0;
		 }
};
}

