/*this module file is codegen by juggle for c++*/
#ifndef _logic_call_center_module_h
#define _logic_call_center_module_h
#include <Imodule.h>
#include <memory>
#include <boost/signals2.hpp>
#include <string>

namespace module
{
class logic_call_center : public juggle::Imodule {
public:
    logic_call_center(){
        module_name = "logic_call_center";
        protcolcall_set.insert(std::make_pair("req_get_server_address", std::bind(&logic_call_center::req_get_server_address, this, std::placeholders::_1)));
    }

    ~logic_call_center(){
    }

    boost::signals2::signal<void(std::string, std::string) > sigreq_get_server_addresshandle;
    void req_get_server_address(std::shared_ptr<std::vector<boost::any> > _event){
        sigreq_get_server_addresshandle(
            boost::any_cast<std::string>((*_event)[0]), 
            boost::any_cast<std::string>((*_event)[1]));
    }

};

}

#endif
