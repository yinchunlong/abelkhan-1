/*
 * logicsvrmanager.h
 *
 *  Created on: 2016-7-9
 *      Author: qianqians
 */
#ifndef _logicsvrmanager_h
#define _logicsvrmanager_h

#include <list>
#include <memory>

namespace center {

class logicsvrmanager {
public:
	logicsvrmanager() {
	}

	~logicsvrmanager() {
	}

	void reg_channel(std::shared_ptr<juggle::Ichannel> ch) {
		logic_svr_channel_list.push_back(ch);
	}

	void unreg_channel(std::shared_ptr<juggle::Ichannel> ch) {
		for (auto it = logic_svr_channel_list.begin(); it != logic_svr_channel_list.end(); it++) {
			if (*it == ch) {
				logic_svr_channel_list.erase(it);
				break;
			}
		}
	}

	bool is_logic(std::shared_ptr<juggle::Ichannel> ch) {
		for (auto it = logic_svr_channel_list.begin(); it != logic_svr_channel_list.end(); it++) {
			if (*it == ch) {
				return true;
			}
		}

		return false;
	}

	void for_each_logic(std::function<void(std::shared_ptr<juggle::Ichannel> ch)> fn) {
		for (auto ch : logic_svr_channel_list) {
			fn(ch);
		}
	}

private:
	std::list<std::shared_ptr<juggle::Ichannel> > logic_svr_channel_list;

};

}

#endif //_logicsvrmanager_h
