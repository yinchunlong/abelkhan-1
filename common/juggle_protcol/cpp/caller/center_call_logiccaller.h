/*this caller file is codegen by juggle for c++*/
#ifndef _center_call_logic_caller_h
#define _center_call_logic_caller_h
#include <sstream>
#include <tuple>
#include <string>
#include <Icaller.h>
#include <Ichannel.h>
#include <boost/any.hpp>
#include <memory>

namespace caller
{
class center_call_logic : public juggle::Icaller {
public:
    center_call_logic(std::shared_ptr<juggle::Ichannel> _ch) : Icaller(_ch) {
        module_name = "center_call_logic";
    }

    ~center_call_logic(){
    }

    void distribute_server_address(std::string argv0,std::string argv1,int64_t argv2,std::string argv3){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("center_call_logic");
        v->push_back("distribute_server_address");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv1);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv2);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv3);
        ch->push(v);
    }

    void ack_get_server_address(bool argv0,std::string argv1,std::string argv2,int64_t argv3,std::string argv4,std::string argv5){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("center_call_logic");
        v->push_back("ack_get_server_address");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv1);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv2);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv3);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv4);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv5);
        ch->push(v);
    }

};

}

#endif
