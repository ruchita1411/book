#ifndef BOOK_H
#define BOOK_H

class book
{
	
	private : 
	     int bookId;
	     string bookName;
	     double bookPrice;
	     
	public:
		book();
		
		book(int bookId, string bookName, double bookPrice){
			this.bookId=bookId;
			this.bookName=bookName;
			this.bookPrice=bookPrice;
		}
		
		//getters setters
		
		void getId (int Id){
			return Id;
		}
		
		void getName (string name){
			return name;
		}
		
		void getPrice (double price){
			return price;
		}
		
		int setId (){
			this.bookId=Id;
			
		}
		
		string setName() {
			this.bookName=name;
		}
		
		double setPrice(){
			this.bookPrice=price;
		}
		
		~book();
		
		int totalPrice(int qty){
			return qty*price;
		}
		
		
	protected:
};

#endif
