#ifndef NET_ENDIAN_H_
#define NET_ENDIAN_H_

#include <stdint.h>
#include <endian.h>

namespace nc
{
	namespace net
	{
		namespace sockets
		{
#if defined(__clang__) || __GNUC_PREREQ (4, 6)
	#pragma GCC diagnostic push
#endif

#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wold-style-cast"

			inline uint64_t hostToNetWork64(uint64_t host64)
			{
				return htobe64(host64);
			}

			inline uint32_t hostToNetWork32(uint32_t host32)
			{
				return htobe32(host32);
			}

			inline uint16_t hostToNetWork16(uint16_t host16)
			{
				return htobe16(host16);
			}

			inline uint64_t networkToHost64(uint64_t net64)
			{
				return be64toh(net64);
			}

			inline uint32_t networkTohost32(uint32_t net32)
			{
				return be32toh(net32);
			}

			inline uint16_t networkTohost16(uint16_t net16)
			{
				return be16toh(net16);
			}

#if defined(__clang__) || __GNUC_PREREQ(4, 6)
	#pragma GCC diagnostic pop
#else
	#pragma GCC diagnostic warning "-Wconversion"
	#pragma GCC diagnostic warning "-Wold-style-cast"
#endif
		}
	}
}

#endif