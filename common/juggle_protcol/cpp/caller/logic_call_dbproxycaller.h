/*this caller file is codegen by juggle for c++*/
#ifndef _logic_call_dbproxy_caller_h
#define _logic_call_dbproxy_caller_h
#include <sstream>
#include <tuple>
#include <string>
#include <Icaller.h>
#include <Ichannel.h>
#include <boost/any.hpp>
#include <memory>

namespace caller
{
class logic_call_dbproxy : public juggle::Icaller {
public:
    logic_call_dbproxy(std::shared_ptr<juggle::Ichannel> _ch) : Icaller(_ch) {
        module_name = "logic_call_dbproxy";
    }

    ~logic_call_dbproxy(){
    }

    void reg_logic(std::string argv0){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("logic_call_dbproxy");
        v->push_back("reg_logic");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        ch->push(v);
    }

    void create_persisted_object(std::shared_ptr<std::unordered_map<std::string, boost::any> > argv0,std::string argv1){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("logic_call_dbproxy");
        v->push_back("create_persisted_object");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv1);
        ch->push(v);
    }

    void updata_persisted_object(std::shared_ptr<std::unordered_map<std::string, boost::any> > argv0,std::shared_ptr<std::unordered_map<std::string, boost::any> > argv1,std::string argv2){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("logic_call_dbproxy");
        v->push_back("updata_persisted_object");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv1);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv2);
        ch->push(v);
    }

    void get_object_info(std::shared_ptr<std::unordered_map<std::string, boost::any> > argv0,std::string argv1){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("logic_call_dbproxy");
        v->push_back("get_object_info");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv0);
        (boost::any_cast<std::shared_ptr<std::vector<boost::any> > >((*v)[2]))->push_back(argv1);
        ch->push(v);
    }

    void logic_closed(){
        auto v = std::make_shared<std::vector<boost::any> >();
        v->push_back("logic_call_dbproxy");
        v->push_back("logic_closed");
        v->push_back(std::make_shared<std::vector<boost::any> >());
        ch->push(v);
    }

};

}

#endif
