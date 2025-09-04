// Add documentation for each function

#include <iostream>
    
class MyTime
{   
	public:

		// CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
		// DEFAULT ARGUMENTS
		MyTime();
		MyTime(int h, int m);   

		// Member functions
		void Reset(int h, int m);

		/**IOS Functions
		 * Formating the input and output for the iostream functions so its:
		 * 		HOUR : MINUTES
		 * 		(10:30, 11:46, 23:20, etc)
		*/

		void input(std::istream& ins);            

		void output(std::ostream& outs) const;
		/**Return Functions
		 * The return functions to be able to see the hours and
		 * minutes individually 
		*/
		int get_hours() const{return hours;}

		int get_minutes() const{return minutes;}

		/**Operator overloading
		 * 
		 * Changed all the operators so only one MyTime is called by the code:
		 * 
		 * +: add the left hours & minutes to the right hour and minutes
		 * -: sub the left hours & minutes to the right hour and minutes
		 * /: divides the left hours & minutes to the right hour and minutes
		 * *: mult the left hours & minutes to the right hour and minutes
		 * ==: compares the left hours & minutes to the right hour and minutes to see if they're equal
		 * <: compares the left hours & minutes to the right hour and minutes to see if the left is less than
		 * >: compares the left hours & minutes to the right hour and minutes to see if the right is greater than 
		*/
		MyTime operator + (const MyTime& other) const;
	
		MyTime operator - (const MyTime& other) const;
	
		MyTime operator * (int num) const;

		MyTime operator / (int num) const;

		bool operator == (const MyTime& other) const;

		bool operator < (const MyTime& other) const;

		bool operator <= (const MyTime& other) const;
   
  	private:
		void simplify();  // simplifies the time to be formatted properly
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };		

/**IOS operator overloading
 * using the IOS functions, the i and o operators can display and input time
*/
std::istream& operator >>(std::istream& ins, MyTime& t1);		
std::ostream& operator <<(std::ostream& outs, const MyTime& t1);