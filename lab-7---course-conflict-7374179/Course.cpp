#include "Course.hpp"

using namespace std;

Course::Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time) : title (title), day (day), start_time (start_time), finish_time (finish_time)
{
}
Course::Course (const Course & m) : title (m.title), day (m.day), start_time (m.start_time), finish_time (m.finish_time)
{
}

Course & Course::operator =(Course m) {
    //TODO implement the operator
    std::swap(title, m.title);
    std::swap(day, m.day);
    std::swap(start_time, m.start_time);
    std::swap(finish_time, m.finish_time);
    return *this;
}

bool Course::operator == (const Course & m) const {
    //TODO implement the operator
        if(day == m.day){
            if(start_time == m.start_time || finish_time == m.finish_time
                    || (start_time < m.start_time && finish_time > m.finish_time)
                    || (start_time > m.start_time && finish_time < m.finish_time)
                    || (start_time > m.start_time && start_time < m.finish_time)
                    || (finish_time > m.start_time && finish_time < m.finish_time)){
                    return true;
            }
    }
    return false;
}

bool Course::operator < (const Course & m) const
{
    //TODO implement the operator
    if(day < m.day){
        return true;
    }
    else if(day == m.day){
        if(start_time < m.start_time){
            return true;
        }
        else if(start_time == m.start_time){
            if(finish_time < m.finish_time){
                return true;
            }
            else if(finish_time == m.finish_time){
                if(title < m.title){
                    return true;
                }
            }
        }
    }
    return false;
}

ostream & operator << (ostream &os, const Course & m)
{
    //TODO implement the operator
    char dayChar;
    switch (m.day) {
        case Course::MON: dayChar = 'M'; break;
        case Course::TUE: dayChar = 'T'; break;
        case Course::WED: dayChar = 'W'; break;
        case Course::THUR: dayChar = 'R'; break;
        case Course::FRI: dayChar = 'F'; break;
        default: throw std::invalid_argument("Invalid day of the week");
    }
    os << m.title << " " << dayChar << " " << m.start_time << " " << m.finish_time;
    return os;
}

/**
 * Converts a single character representing a day of the week into the corresponding
 * enum value of the Course::dayOfWeek type.
 *
 * @param c The character representing the day of the week ('M', 'T', 'W', 'R', 'F').
 * @return The corresponding dayOfWeek enum value.
 * @throws std::invalid_argument If the character does not correspond to a valid day.
 */
Course::dayOfWeek charToDayOfWeek(char c) {
    switch (c) {
        case 'M': return Course::MON;
        case 'T': return Course::TUE;
        case 'W': return Course::WED;
        case 'R': return Course::THUR;
        case 'F': return Course::FRI;
        default:
            // If the character is not one of the cases above, it's an invalid day character.
            throw std::invalid_argument("Invalid day of the week character");
    }
}
