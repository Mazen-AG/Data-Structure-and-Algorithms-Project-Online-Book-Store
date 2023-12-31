#pragma once

namespace OnlineBookStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for UserDashboard
	/// </summary>
	public ref class UserDashboard : public System::Windows::Forms::Form
	{
	public:

		UserDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UserDashboard(String^ username, String^ password) {
			userdata = username;
			passdata = password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String^ userdata;
		String^ passdata;
	private: System::Windows::Forms::Button^ userdashboard_Nav_button;
	private: System::Windows::Forms::Splitter^ userDashbaord_splitter;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;

	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserDashboard::typeid));
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Browse The Catalog"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Shopping Cart"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Orders"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Wish List"));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"ISBN Search"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Normal Search"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Search", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode5,
					treeNode6
			}));
			this->userdashboard_Nav_button = (gcnew System::Windows::Forms::Button());
			this->userDashbaord_splitter = (gcnew System::Windows::Forms::Splitter());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// userdashboard_Nav_button
			// 
			this->userdashboard_Nav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userdashboard_Nav_button.BackgroundImage")));
			this->userdashboard_Nav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->userdashboard_Nav_button->Location = System::Drawing::Point(310, 10);
			this->userdashboard_Nav_button->Name = L"userdashboard_Nav_button";
			this->userdashboard_Nav_button->Size = System::Drawing::Size(35, 35);
			this->userdashboard_Nav_button->TabIndex = 0;
			this->userdashboard_Nav_button->Text = L".";
			this->userdashboard_Nav_button->UseVisualStyleBackColor = true;
			this->userdashboard_Nav_button->Click += gcnew System::EventHandler(this, &UserDashboard::userdashboard_Nav_button_Click);
			// 
			// userDashbaord_splitter
			// 
			this->userDashbaord_splitter->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->userDashbaord_splitter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->userDashbaord_splitter->Location = System::Drawing::Point(0, 0);
			this->userDashbaord_splitter->MaximumSize = System::Drawing::Size(300, 0);
			this->userDashbaord_splitter->Name = L"userDashbaord_splitter";
			this->userDashbaord_splitter->Size = System::Drawing::Size(300, 1024);
			this->userDashbaord_splitter->TabIndex = 1;
			this->userDashbaord_splitter->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &UserDashboard::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &UserDashboard::timer2_Tick);
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(12, 12);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"Browse The Catalog";
			treeNode2->Name = L"Node1";
			treeNode2->Text = L"Shopping Cart";
			treeNode3->Name = L"Node2";
			treeNode3->Text = L"Orders";
			treeNode4->Name = L"Node3";
			treeNode4->Text = L"Wish List";
			treeNode5->Name = L"Node5";
			treeNode5->Text = L"ISBN Search";
			treeNode6->Name = L"Node8";
			treeNode6->Text = L"Normal Search";
			treeNode7->Name = L"Node4";
			treeNode7->Text = L"Search";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode1, treeNode2, treeNode3,
					treeNode4, treeNode7
			});
			this->treeView1->Size = System::Drawing::Size(277, 1000);
			this->treeView1->TabIndex = 3;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &UserDashboard::treeView1_AfterSelect);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(306, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1580, 1000);
			this->panel1->TabIndex = 4;
			// 
			// UserDashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->userdashboard_Nav_button);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->userDashbaord_splitter);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"UserDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserDashboard";
			this->ResumeLayout(false);

		}
#pragma endregion
		int count = 0;

	private: System::Void userdashboard_Nav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userdashboard_Nav_button->Text == ".") {
			timer1->Start();
			userdashboard_Nav_button->Text = "_";
		}
		else {
			timer2->Start();
			userdashboard_Nav_button->Text = ".";
		}
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count < 10) {
			userDashbaord_splitter->Width -= 30;
			userdashboard_Nav_button->Left -= 30;
			treeView1->Left -= 30;
			count++;
		}
		else {
			timer1->Stop();
		}

	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count > 0) {
			userDashbaord_splitter->Width += 30;
			userdashboard_Nav_button->Left += 30;
			treeView1->Left += 30;
			count--;
		}
		else {
			timer2->Stop();
		}
	}
};
}
