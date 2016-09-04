#ifndef UTIL_BOUNDEDBLOCKINGQUEUE_H_
#define UTIL_BOUNDEDBLOCKINGQUEUE_H_

#include <nc/util/Condition.h>
#include <nc/util/Mutex.h>

#include <nc/util/Noncopyable.hpp>

#include <assert.h>

namespace nc
{
	template<typename T>
	class BoundedBlockingQueue : util::Noncopyable
	{
	public:

		using namespace util;

	private:

		mutable MutexLock mutex_;

		Condition notEmpty_;

		Condition notFull_;


	};
}

#endif