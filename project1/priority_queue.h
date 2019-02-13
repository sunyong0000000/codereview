#ifndef CODEREVIEW_PROJECT1_PRIORITY_QUEUE_H_
#define CODEREVIEW_PROJECT1_PRIORITY_QUEUE_H_
#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};
#endif  // CODEREVIEW_PROJECT1_PRIORITY_QUEUE_H_
