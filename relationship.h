#pragma once
#include "initGame.h"
#include "ending/Venti_ending.h"

class relationship
{
public:
	relationship();
	~relationship();

private:
	int relationshipPoints;
	//set relationshipPoints = 0  per 1 character
	void updateAffectionRelationship(char answer);
	void checkGameEnd();
	void goodEnding();
	void badEnding();
	void chaseEnding();
};

relationship::relationship()
{

}

relationship::~relationship()
{
}

inline void relationship::updateAffectionRelationship(char answer)
{
	if (answer == 'A')//if the answer is positive, increase the relationship
	{
		relationshipPoints += rand() % 5 + 5;
	}
	if (answer == 'B')//If the answer is negative, increase the relationship 
	{
		relationshipPoints -= rand() % 5 + 5;
	}
}

inline void relationship::checkGameEnd()
{
	if (relationshipPoints <= 0) {
		badEnding();
		//นี้เขียนคราวๆ จริงๆใช้ EndingScene endingScene(window, relationshipPoints);
		//endingScene.displayGoodEnding(); เอาไวดึงclassฉากจบ
	}
	else if (relationshipPoints >= 50 && relationshipPoints < 100) {
		chaseEnding();
	}
	else if (relationshipPoints >= 100) {
		goodEnding();
	}
}

inline void relationship::goodEnding()
{
}

inline void relationship::badEnding()
{
}

inline void relationship::chaseEnding()
{
}
