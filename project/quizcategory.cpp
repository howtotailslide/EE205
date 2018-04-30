#include <quizcategory.hh>

#include <QObject>

// Constructor
QuizCategory::QuizCategory( const QString& cat, const int id )
: mCategory(cat), mIndex(id)
{ }

// Comparison operator.
bool QuizCategory::operator<( const QuizCategory& other ) const
{
    // Random categories are "bigger" than specific categories.

    bool retVal = false;

    if ( mCategory == QObject::tr("Random") )
    {
        // no matter what the other category is (even if it's random too)
        // this one is bigger.
        retVal = false;
    }
    else if ( other.mCategory == QObject::tr("Random") )
    {
        // so the other category is bigger
        retVal = true;
    }
    else
    {
        retVal = true;
    }

    return retVal;
}