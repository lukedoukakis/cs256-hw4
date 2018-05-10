 // Specification file for the Die class   2  #ifndef DIE_H
#define DIE_H   4
class Die
{
	private:
		int sides;   // Number of sides
		int value;   // The die's value

	public:
		Die(int = 6);    // Constructor
		void roll();     // Rolls the die
		int getSides();  // Returns the number of sides
		int getValue();  // Returns the die's value
};

#endif /* SRC_DIE_H_ */
