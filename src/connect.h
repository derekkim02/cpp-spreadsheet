#ifndef CONNECT_H
#define CONNECT_H

namespace connect {
	class manager {
	 public:
		virtual auto accept_new_connection() -> void = 0;
	};
} // namespace connect

#endif // "CONNECT_H"