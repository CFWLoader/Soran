#ifndef MUTEXLOCK_H_
#define MUTEXLOCK_H_

#include <pthread.h>

#include "Noncopyable.hpp"

namespace clown
{
	class MutexLock : public utilities::Noncopyable
	{
	public:

		MutexLock();

		~MutexLock();

		void lock();

		void unlock();

	private:
		pthread_mutex_t theMutexLock;
	};
}

#endif