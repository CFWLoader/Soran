#ifndef UTIL_DATE_H_
#define UTIL_DATE_H_

#include <nc/util/copyable.hpp>
#include <nc/util/Types.h>

struct tm;

namespace nc
{

	class Date : public moduo::copyable
	{
	public:

		struct YearMonthDay
		{
			int year;
			int month;
			int day;
		};

		static const int DAYS_PER_WEEK = 7;
		static const int JULIAN_DAY_OF_1970_01_01;

		Date() : julianDayNumber_(0)
		{}

		Date(int year, int month, int day);

		explicit Date(int julianDayNum) : julianDayNumber_(julianDayNum)
		{}

		explicit Date(const struct tm&);

		void swap(Date& that)
		{
			std::swap(julianDayNumber_, that.julianDayNumber_);
		}

		bool valid() const
		{
			return julianDayNumber_ > 0;
		}

		string toIsoString() const;

		struct YearMonthDay yearMonthDay() const;

		int year() const
		{
			return yearMonthDay().year;
		}

		int month() const
		{
			return yearMonthDay().month;
		}

		int day() const
		{
			return yearMonthDay().day;
		}

		int weekDay() const
		{
			return 
		}

	private:

		int julianDayNumber_;

	};
}
#endif