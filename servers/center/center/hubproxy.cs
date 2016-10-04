using System;

namespace center
{
	class hubproxy
	{
		public hubproxy (juggle.Ichannel _ch)
		{
			_caller = new caller.center_call_hub(_ch);
		}

		public void distribute_dbproxy_address(String type, String ip, Int64 port, String uuid)
		{
			_caller.distribute_dbproxy_address(type, ip, port, uuid);
		}

		private caller.center_call_hub _caller;
	}
}
