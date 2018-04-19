/*File: user.hpp
 *
 */
#include "info.hpp"

class user{
    private:
        std::string name;
        int score;
        int standing;
	int answer; //interacts w/Question/Answer class
        info stats; //make class for this

   public:
	//Default Constructor
        user();

	//Overloaded Constructor
	user(std::string n, int sc, int st, int ans, double r, double w, double t);

        //performs deep copy & allocates new memory
        user(const user& other);

        //Takes contents of another user and clears info of other user
        user(user&& other);

        //deallocate memory
        ~user();

        //Get functions
        std::string getName(void);
        int getScore(void);
        int getStanding(void);
	int getAnswer(void);
        info getStats(void);

        //Set functions
        void setName(std::string n);
        void setScore(int s);
        void setStanding(int s);
	void setAnswer(int a);
        void setStats(info s);

	//get  % of player's right answers
	double rightPerc(void);

	//get % of player's wrong answers
	double wrongPerc(void);

};
