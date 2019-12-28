/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   module_array.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef MODULE_ARRAY_H
#define MODULE_ARRAY_H

namespace UHDM {

  class module_array : public BaseClass {
  public:
    module_array(){}
    ~module_array() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    unsigned int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(unsigned int data) { uhdmParentType_ = data; }

    std::string get_vpiFile() const { return SymbolFactory::getSymbol(vpiFile_); }

    void set_vpiFile(std::string data) { vpiFile_ = SymbolFactory::make(data); }

    unsigned int get_vpiLineNo() const { return vpiLineNo_; }

    void set_vpiLineNo(unsigned int data) { vpiLineNo_ = data; }

  private:
    
    BaseClass* vpiParent_;

    unsigned int uhdmParentType_;

    unsigned int vpiFile_;

    unsigned int vpiLineNo_;

  };

  class module_arrayFactory {
  friend Serializer;
  public:
  static module_array* make() {
    module_array* obj = new module_array();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<module_array*> objects_;
  };
 	      
  class VectorOfmodule_arrayFactory {
  friend Serializer;
  public:
  static std::vector<module_array*>* make() {
    std::vector<module_array*>* obj = new std::vector<module_array*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<module_array*>*> objects_;
  };

};

#endif

