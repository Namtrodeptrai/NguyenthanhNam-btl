	#include<bits/stdc++.h>
	using namespace std;
	class wine{
	private :
	 int ma_ruou;
	 string ten_ruou;
	 float don_gia;
	 string phan_loai;
	 int so_luong;
	 public:
		wine(){};
	 	wine(int mr,string tr,float dg,string pl,int sl )
	 	{
	 		ma_ruou=mr;
	 		ten_ruou=tr;
	 		don_gia=dg;
	 		phan_loai=pl;
	 		so_luong=sl;
		 }
		 int getmaruou()
		 {
		 	return ma_ruou;
		 }
		 string gettenruou()
		 {
		 	return ten_ruou;
		 }
		 float getdongia()
		 {
		 	return don_gia;
		 }
		 string getphanloai()
		 {
		 	return phan_loai;
		 }
		 int getsoluong()
		 {
		 	return so_luong;
	     }
	     friend istream &operator>>(istream &is, wine &q)
	     {
	     	cout <<endl << "Viet ma ruou: ";
	     	is >>q.ma_ruou;
	     	if(q.ma_ruou<=0)
	     	{
	     		cout <<"LOI !!!" << endl;
			 }
			 else
			 {
			 	cout <<"Ten ruou: ";
			 	is.ignore();
			 	getline(is,q.ten_ruou);
			 	cout<<"Gia ruou ";
			 	is >>q.don_gia;
			 	cout <<"ruou loai :  ";
			 	is.ignore();
			 	getline(is,q.phan_loai);
			 	cout <<"Nhap so luong: ";
			 	is >> q.so_luong;
			 	return is;
			 }
		 }
		 friend ostream &operator<<(ostream &os, wine &q )
		 {
		 	if (q.ma_ruou >0)
		 	{
		 		os << "Ma ruou: " << q.ma_ruou << endl;
	            os << "Ten Ruou: " << q.ten_ruou << endl;
	            os << "Gia: " << q.don_gia << endl;
	            os << "Ruou loai: " << q.phan_loai << endl;
	            os << "So Luong: " << q.so_luong << endl;
			 }
		 }
		 bool operator<(wine q)
		 {
		 	return this ->so_luong<q.so_luong;
		 }
	};	
	class qlyruou
	{
		private:
			list<wine> chai;
		public:
			void nhap();
			void xuat();
			void sapxep();
			void them();
			void tim();
			void maxmin();
			void xoa();
	};
	void qlyruou::nhap(){
		int so_luong;
		back:
		cout<<"nhap so luong ruou: ";
		cin >>so_luong;
		if(so_luong<=0){
			cout<< "LOI!! "<< endl;
			return;	
		}
		else{
		for(int i=0; i<so_luong;i++)
		{
			wine q;
			cin>> q;
			chai.push_back(q);
		}
	}
	}
	void qlyruou::xuat()
	{
	    cout << "Danh sach ruou:" << endl;
	    cout << "| Ma ruou  | Ten Ruou         | Gia      | Loai | So luong |" << endl;
	    cout << "--------------------------------------------------------------" << endl;
	    list<wine>::iterator ruou;
	    for (ruou = chai.begin(); ruou != chai.end(); ruou++)
	    {
	        wine tmp = *ruou;
	        cout << "| " << left << setw(9) << tmp.getmaruou() << " ";
	        cout << "| " << left << setw(15 ) << tmp.gettenruou() << " ";
	        cout << "| " << left << setw(8) << tmp.getdongia() << " ";
	        cout << "| " << left << setw(4) << tmp.getphanloai() << " ";
	        cout << "| " << left << setw(9) << tmp.getsoluong() << " |" << endl;
	    	}
	    cout << endl;
	}
	bool Compare(wine a, wine b)
	{
	    return a.getsoluong() < b.getsoluong();
	}
	void qlyruou::sapxep()
	{   
	    list<wine> chai1 = chai; 
		chai1.sort(Compare);
		cout <<"sap xep thanh cong !!"<<endl;
		    cout << "Danh sach ruou da sap xep :" << endl;
	    cout << "| Ma ruou  | Ten Ruou         | Gia      | Loai | So luong |" << endl;
	    cout << "--------------------------------------------------------------" << endl;
	    list<wine>::iterator ruou;
	    for (ruou = chai1.begin(); ruou != chai1.end(); ruou++)
	    {
	        wine tmp = *ruou;
	        cout << "| " << left << setw(9) << tmp.getmaruou() << " ";
	        cout << "| " << left << setw(15 ) << tmp.gettenruou() << " ";
	        cout << "| " << left << setw(8) << tmp.getdongia() << " ";
	        cout << "| " << left << setw(4) << tmp.getphanloai() << " ";
	        cout << "| " << left << setw(9) << tmp.getsoluong() << " |" << endl;
	    	}
	    cout << endl;
	}
void qlyruou::them()
{
	wine b;
	cout<<"Them ruou moi: "<<endl;
	cin>>b;
	int c;
	cout<<"chon vi tri ban muon them: ";
	cin>>c;
	list<wine>::iterator ruou=chai.begin();
	for(int i=1;i<c;i++)
	{
		ruou++;
	}
	chai.insert(ruou,b);
	cout<<endl <<"Them thanh cong:! "<<endl;
}
void qlyruou::tim()
{
    int cnt = 0;
    string name;
    cout << endl << "Tim kiem theo phan loai: ";
    cin.ignore();
    getline(cin, name);
    list<wine>::iterator ruou;
    
    for (ruou = chai.begin(); ruou != chai.end(); ruou++)
    {
        wine tmp;
        tmp = *ruou;
        if (name.compare(tmp.getphanloai()) == 0)
        {
            if (cnt == 0)
            {
                cout << setfill('-');
                cout << setw(83) << "-" << endl;
                cout << setfill(' ');
                cout << "|";
                cout << left << setw(11) << "Ma ruou";
                cout << "|";
                cout << left << setw(20) << "Ten ruou";
                cout << "|";
                cout << left << setw(17) << "Gia ";
                cout << "|";
                cout << left << setw(17) << "Phan Loai";
                cout << "|";
                cout << left << setw(12) << "So luong";
                cout << "|" << endl;
            }
            
            cout << "|";
            cout << left << setw(11) << tmp.getmaruou();
            cout << "|";
            cout << left << setw(20) << tmp.gettenruou();
            cout << "|";
            cout << left << setw(17) << tmp.getdongia();
            cout << "|";
            cout << left << setw(17) << tmp.getphanloai();
            cout << "|";
            cout << left << setw(12) << tmp.getsoluong();
            cout << "|" << endl;
            cnt++;
        }
    }
    
    if (cnt > 0)
    {
        cout << setfill('-');
        cout << setw(83) << "-" << endl;
    }
    else
    {
        cout << "KHONG CO RUOU LOAI NAY !!" << endl;
    }
}
void qlyruou::maxmin()
{
    float max = -1e9, min = 1e9;
    string ten1, ten2;
    list<wine>::iterator ruou;
    for (ruou = chai.begin(); ruou != chai.end(); ruou++)
    {
        wine tmp1 = *ruou;
        if (tmp1.getdongia() > max)
        {
            max = tmp1.getdongia();
            ten1 = tmp1.gettenruou();
        }
    }
    for (ruou = chai.begin(); ruou != chai.end(); ruou++)
    {
        wine tmp2 = *ruou;
        if (tmp2.getdongia() < min)
        {
            min = tmp2.getdongia();
            ten2 = tmp2.gettenruou();
        }
    }
    cout << setfill('-');
    cout << setw(36) << "-" << endl;
    cout << setfill(' ');
    cout << right << setw(7) << "|";
    cout << left << setw(17) << "Ten ruou";
    cout << "|";
    cout << left << setw(10) << "Gia" << "|" << endl;
    cout << "|";
    cout << left << setw(5) << "Max";
    cout << "|";
    cout << left << setw(17) << ten1;
    cout << "|";
    cout << left << setw(10) << max << "|" << endl;
    cout << "|";
    cout << left << setw(5) << "Min";
    cout << "|";
    cout << left << setw(17) << ten2;
    cout << "|";
    cout << left << setw(10) << min << "|" << endl;
    cout << setfill('-');
    cout << setw(36) << "-" << endl;
    cout << setfill(' ');
}
void qlyruou::xoa() {
    int k;
    cout << "Chon ma ruou de xoa: ";
    cin >> k;

    int cnt = 0;
    list<wine>::iterator ruou;
    for (ruou = chai.begin(); ruou != chai.end(); ) {
        wine tmp = *ruou;
        if (tmp.getmaruou() == k) {
            ruou = chai.erase(ruou);
            cnt++;
            cout << "Xoa thanh cong!" << endl;
            break;
        } else {
            ++ruou;
        }
    }

    if (cnt == 0) {
        cout << "Khong con ruou nao de xoa!" << endl;
    }
}

