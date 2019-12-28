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
 * File:   vpi_user.cpp
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */
#include <string>
#include <vector>
#include <iostream>
#include "include/sv_vpi_user.h"
#include "include/vhpi_user.h"
#include "include/vpi_uhdm.h"
#include "headers/containers.h"
#include "headers/uhdm.h"
#include <string.h>

#include "headers/process.h"
#include "headers/scope.h"
#include "headers/modport.h"
#include "headers/interface_tf_decl.h"
#include "headers/interface.h"
#include "headers/interface_array.h"
#include "headers/cont_assign.h"
#include "headers/port.h"
#include "headers/module_array.h"
#include "headers/primitive.h"
#include "headers/primitive_array.h"
#include "headers/mod_path.h"
#include "headers/tchk.h"
#include "headers/def_param.h"
#include "headers/io_decl.h"
#include "headers/alias_stmt.h"
#include "headers/clocking_block.h"
#include "headers/instance_array.h"
#include "headers/module.h"
#include "headers/design.h"


using namespace UHDM;

vpiHandle vpi_handle_by_name (PLI_BYTE8    *name,
                              vpiHandle    scope) {
  return 0;
}

vpiHandle vpi_handle_by_index (vpiHandle object,
                                PLI_INT32    indx) {
  return 0;
}

/* for traversing relationships */

vpiHandle vpi_handle (PLI_INT32 type,
                      vpiHandle   refHandle) {
  uhdm_handle* handle = (uhdm_handle*) refHandle;
  BaseClass*  object = (BaseClass*) handle->object;
  
 if (handle->type == uhdmprocess) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((process*)(object))->get_uhdmParentType(), ((process*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmscope) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((scope*)(object))->get_uhdmParentType(), ((scope*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmmodport) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((modport*)(object))->get_uhdmParentType(), ((modport*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdminterface_tf_decl) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((interface_tf_decl*)(object))->get_uhdmParentType(), ((interface_tf_decl*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdminterface) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((interface*)(object))->get_uhdmParentType(), ((interface*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdminterface) {
     if (type == vpiGlobalClocking) {
       return (vpiHandle) new uhdm_handle(uhdmclocking_block, ((interface*)(object))->get_global_clocking());
 } 
}

 if (handle->type == uhdminterface) {
     if (type == vpiDefaultClocking) {
       return (vpiHandle) new uhdm_handle(uhdmclocking_block, ((interface*)(object))->get_default_clocking());
 } 
}

 if (handle->type == uhdminterface_array) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((interface_array*)(object))->get_uhdmParentType(), ((interface_array*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmcont_assign) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((cont_assign*)(object))->get_uhdmParentType(), ((cont_assign*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmport) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((port*)(object))->get_uhdmParentType(), ((port*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmmodule_array) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((module_array*)(object))->get_uhdmParentType(), ((module_array*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmprimitive) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((primitive*)(object))->get_uhdmParentType(), ((primitive*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmprimitive_array) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((primitive_array*)(object))->get_uhdmParentType(), ((primitive_array*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmmod_path) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((mod_path*)(object))->get_uhdmParentType(), ((mod_path*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmtchk) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((tchk*)(object))->get_uhdmParentType(), ((tchk*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmdef_param) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((def_param*)(object))->get_uhdmParentType(), ((def_param*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmio_decl) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((io_decl*)(object))->get_uhdmParentType(), ((io_decl*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmalias_stmt) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((alias_stmt*)(object))->get_uhdmParentType(), ((alias_stmt*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmclocking_block) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((clocking_block*)(object))->get_uhdmParentType(), ((clocking_block*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdminstance_array) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((instance_array*)(object))->get_uhdmParentType(), ((instance_array*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmmodule) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((module*)(object))->get_uhdmParentType(), ((module*)(object))->get_vpiParent());
 } 
}

 if (handle->type == uhdmmodule) {
     if (type == vpiInstanceArray) {
       return (vpiHandle) new uhdm_handle(uhdminstance_array, ((module*)(object))->get_instance_array());
 } 
}

 if (handle->type == uhdmmodule) {
     if (type == vpiGlobalClocking) {
       return (vpiHandle) new uhdm_handle(uhdmclocking_block, ((module*)(object))->get_global_clocking());
 } 
}

 if (handle->type == uhdmmodule) {
     if (type == vpiDefaultClocking) {
       return (vpiHandle) new uhdm_handle(uhdmclocking_block, ((module*)(object))->get_default_clocking());
 } 
}

 if (handle->type == uhdmdesign) {
     if (type == vpiParent) {
       return (vpiHandle) new uhdm_handle(((design*)(object))->get_uhdmParentType(), ((design*)(object))->get_vpiParent());
 } 
}

  std::cout << "VPI ERROR: Bad usage of vpi_handle" << std::endl;    
  return 0;
}

vpiHandle vpi_handle_multi (PLI_INT32 type,
                            vpiHandle   refHandle1,
                            vpiHandle   refHandle2,
                            ... ) {
  return 0;
}

vpiHandle vpi_iterate (PLI_INT32 type, vpiHandle refHandle) {
  const uhdm_handle* const handle = (uhdm_handle*) refHandle;
  const BaseClass*  object = (BaseClass*) handle->object;
  
    
 if (handle->type == uhdminterface) {
 if (type == vpiInterfaceTfDecl) {
 if (((interface*)(object))->get_interface_tf_decl())
 return (vpiHandle) new uhdm_handle(uhdminterface_tf_decl, ((interface*)(object))->get_interface_tf_decl());
 else return 0;
  }
 }

    
 if (handle->type == uhdminterface) {
 if (type == vpiModport) {
 if (((interface*)(object))->get_modport())
 return (vpiHandle) new uhdm_handle(uhdmmodport, ((interface*)(object))->get_modport());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiInternalScope) {
 if (((module*)(object))->get_scope())
 return (vpiHandle) new uhdm_handle(uhdmscope, ((module*)(object))->get_scope());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiProcess) {
 if (((module*)(object))->get_process())
 return (vpiHandle) new uhdm_handle(uhdmprocess, ((module*)(object))->get_process());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiPrimitive) {
 if (((module*)(object))->get_primitive())
 return (vpiHandle) new uhdm_handle(uhdmprimitive, ((module*)(object))->get_primitive());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiPrimitiveArray) {
 if (((module*)(object))->get_primitive_array())
 return (vpiHandle) new uhdm_handle(uhdmprimitive_array, ((module*)(object))->get_primitive_array());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiPort) {
 if (((module*)(object))->get_ports())
 return (vpiHandle) new uhdm_handle(uhdmports, ((module*)(object))->get_ports());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == uhdminterface) {
 if (((module*)(object))->get_interfaces())
 return (vpiHandle) new uhdm_handle(uhdminterfaces, ((module*)(object))->get_interfaces());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == uhdminterface_array) {
 if (((module*)(object))->get_interface_arrays())
 return (vpiHandle) new uhdm_handle(uhdminterface_arrays, ((module*)(object))->get_interface_arrays());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiContAssign) {
 if (((module*)(object))->get_cont_assigns())
 return (vpiHandle) new uhdm_handle(uhdmcont_assigns, ((module*)(object))->get_cont_assigns());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiModule) {
 if (((module*)(object))->get_modules())
 return (vpiHandle) new uhdm_handle(uhdmmodules, ((module*)(object))->get_modules());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiModuleArray) {
 if (((module*)(object))->get_module_array())
 return (vpiHandle) new uhdm_handle(uhdmmodule_array, ((module*)(object))->get_module_array());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiModPath) {
 if (((module*)(object))->get_mod_path())
 return (vpiHandle) new uhdm_handle(uhdmmod_path, ((module*)(object))->get_mod_path());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiTchk) {
 if (((module*)(object))->get_tchk())
 return (vpiHandle) new uhdm_handle(uhdmtchk, ((module*)(object))->get_tchk());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiDefParam) {
 if (((module*)(object))->get_def_param())
 return (vpiHandle) new uhdm_handle(uhdmdef_param, ((module*)(object))->get_def_param());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == vpiIODecl) {
 if (((module*)(object))->get_io_decl())
 return (vpiHandle) new uhdm_handle(uhdmio_decl, ((module*)(object))->get_io_decl());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == uhdmalias_stmt) {
 if (((module*)(object))->get_alias_stmt())
 return (vpiHandle) new uhdm_handle(uhdmalias_stmt, ((module*)(object))->get_alias_stmt());
 else return 0;
  }
 }

    
 if (handle->type == uhdmmodule) {
 if (type == uhdmclocking_block) {
 if (((module*)(object))->get_clocking_block())
 return (vpiHandle) new uhdm_handle(uhdmclocking_block, ((module*)(object))->get_clocking_block());
 else return 0;
  }
 }

    
 if (handle->type == uhdmdesign) {
 if (type == uhdmallModules) {
 if (((design*)(object))->get_allModules())
 return (vpiHandle) new uhdm_handle(uhdmallModules, ((design*)(object))->get_allModules());
 else return 0;
  }
 }

    
 if (handle->type == uhdmdesign) {
 if (type == uhdmtopModules) {
 if (((design*)(object))->get_topModules())
 return (vpiHandle) new uhdm_handle(uhdmtopModules, ((design*)(object))->get_topModules());
 else return 0;
  }
 }

  std::cout << "VPI ERROR: Bad usage of vpi_iterate" << std::endl;    
  return 0;   
}

vpiHandle vpi_scan (vpiHandle iterator) {
  if (!iterator) return 0;
  uhdm_handle* handle = (uhdm_handle*) iterator;
  const void* vect = handle->object;
  

  if (handle->type == uhdminterface_tf_decl) {
 VectorOfinterface_tf_decl* the_vec = (VectorOfinterface_tf_decl*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdminterface_tf_decl, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmmodport) {
 VectorOfmodport* the_vec = (VectorOfmodport*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmodport, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmscope) {
 VectorOfscope* the_vec = (VectorOfscope*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmscope, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmprocess) {
 VectorOfprocess* the_vec = (VectorOfprocess*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmprocess, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmprimitive) {
 VectorOfprimitive* the_vec = (VectorOfprimitive*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmprimitive, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmprimitive_array) {
 VectorOfprimitive_array* the_vec = (VectorOfprimitive_array*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmprimitive_array, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmports) {
 VectorOfport* the_vec = (VectorOfport*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmport, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdminterfaces) {
 VectorOfinterface* the_vec = (VectorOfinterface*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdminterface, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdminterface_arrays) {
 VectorOfinterface_array* the_vec = (VectorOfinterface_array*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdminterface_array, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmcont_assigns) {
 VectorOfcont_assign* the_vec = (VectorOfcont_assign*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmcont_assign, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmmodules) {
 VectorOfmodule* the_vec = (VectorOfmodule*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmodule, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmmodule_array) {
 VectorOfmodule_array* the_vec = (VectorOfmodule_array*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmodule_array, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmmod_path) {
 VectorOfmod_path* the_vec = (VectorOfmod_path*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmod_path, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmtchk) {
 VectorOftchk* the_vec = (VectorOftchk*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmtchk, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmdef_param) {
 VectorOfdef_param* the_vec = (VectorOfdef_param*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmdef_param, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmio_decl) {
 VectorOfio_decl* the_vec = (VectorOfio_decl*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmio_decl, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmalias_stmt) {
 VectorOfalias_stmt* the_vec = (VectorOfalias_stmt*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmalias_stmt, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmclocking_block) {
 VectorOfclocking_block* the_vec = (VectorOfclocking_block*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmclocking_block, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmallModules) {
 VectorOfmodule* the_vec = (VectorOfmodule*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmodule, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }

  if (handle->type == uhdmtopModules) {
 VectorOfmodule* the_vec = (VectorOfmodule*)vect;
 if (handle->index < the_vec->size()) {
 uhdm_handle* h = new uhdm_handle(uhdmmodule, the_vec->at(handle->index));
 handle->index++;
 return (vpiHandle) h;
 }
 }
  return 0;
}

PLI_INT32 vpi_free_object (vpiHandle object) {
  return vpi_release_handle(object);
}

PLI_INT32 vpi_release_handle (vpiHandle object) {
  delete (uhdm_handle*) object;
  return 0;
}

/* for processing properties */

PLI_INT32 vpi_get (PLI_INT32   property,
                   vpiHandle   object) {
  if (!object) {
      std::cout << "VPI ERROR: Bad usage of vpi_get" << std::endl;    
    return 0;
  }
  uhdm_handle* handle = (uhdm_handle*) object;
  BaseClass*  obj = (BaseClass*) handle->object;
  
 if (handle->type == uhdmprocess) {
     if (property == vpiLineNo) {
       return ((process*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmscope) {
     if (property == vpiLineNo) {
       return ((scope*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodport) {
     if (property == vpiLineNo) {
       return ((modport*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface_tf_decl) {
     if (property == vpiLineNo) {
       return ((interface_tf_decl*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface) {
     if (property == vpiLineNo) {
       return ((interface*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface) {
     if (property == vpiType) {
       return ((interface*)(obj))->get_vpiType();
     } 
}

 if (handle->type == uhdminterface_array) {
     if (property == vpiLineNo) {
       return ((interface_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmcont_assign) {
     if (property == vpiLineNo) {
       return ((cont_assign*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmport) {
     if (property == vpiLineNo) {
       return ((port*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule_array) {
     if (property == vpiLineNo) {
       return ((module_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmprimitive) {
     if (property == vpiLineNo) {
       return ((primitive*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmprimitive_array) {
     if (property == vpiLineNo) {
       return ((primitive_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmod_path) {
     if (property == vpiLineNo) {
       return ((mod_path*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmtchk) {
     if (property == vpiLineNo) {
       return ((tchk*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmdef_param) {
     if (property == vpiLineNo) {
       return ((def_param*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmio_decl) {
     if (property == vpiLineNo) {
       return ((io_decl*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmalias_stmt) {
     if (property == vpiLineNo) {
       return ((alias_stmt*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmclocking_block) {
     if (property == vpiLineNo) {
       return ((clocking_block*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminstance_array) {
     if (property == vpiLineNo) {
       return ((instance_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiLineNo) {
       return ((module*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiType) {
       return ((module*)(obj))->get_vpiType();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiTopModule) {
       return ((module*)(obj))->get_vpiTopModule();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiDefDecayTime) {
       return ((module*)(obj))->get_vpiDefDecayTime();
     } 
}

 if (handle->type == uhdmdesign) {
     if (property == vpiLineNo) {
       return ((design*)(obj))->get_vpiLineNo();
     } 
}

  return 0;
}

PLI_INT64 vpi_get64 (PLI_INT32 property,
                     vpiHandle   object) {
  if (!object) {
      std::cout << "VPI ERROR: Bad usage of vpi_get64" << std::endl;    
    return 0;
  }
  uhdm_handle* handle = (uhdm_handle*) object;
  BaseClass*  obj = (BaseClass*) handle->object;
  
 if (handle->type == uhdmprocess) {
     if (property == vpiLineNo) {
       return ((process*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmscope) {
     if (property == vpiLineNo) {
       return ((scope*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodport) {
     if (property == vpiLineNo) {
       return ((modport*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface_tf_decl) {
     if (property == vpiLineNo) {
       return ((interface_tf_decl*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface) {
     if (property == vpiLineNo) {
       return ((interface*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminterface) {
     if (property == vpiType) {
       return ((interface*)(obj))->get_vpiType();
     } 
}

 if (handle->type == uhdminterface_array) {
     if (property == vpiLineNo) {
       return ((interface_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmcont_assign) {
     if (property == vpiLineNo) {
       return ((cont_assign*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmport) {
     if (property == vpiLineNo) {
       return ((port*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule_array) {
     if (property == vpiLineNo) {
       return ((module_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmprimitive) {
     if (property == vpiLineNo) {
       return ((primitive*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmprimitive_array) {
     if (property == vpiLineNo) {
       return ((primitive_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmod_path) {
     if (property == vpiLineNo) {
       return ((mod_path*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmtchk) {
     if (property == vpiLineNo) {
       return ((tchk*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmdef_param) {
     if (property == vpiLineNo) {
       return ((def_param*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmio_decl) {
     if (property == vpiLineNo) {
       return ((io_decl*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmalias_stmt) {
     if (property == vpiLineNo) {
       return ((alias_stmt*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmclocking_block) {
     if (property == vpiLineNo) {
       return ((clocking_block*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdminstance_array) {
     if (property == vpiLineNo) {
       return ((instance_array*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiLineNo) {
       return ((module*)(obj))->get_vpiLineNo();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiType) {
       return ((module*)(obj))->get_vpiType();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiTopModule) {
       return ((module*)(obj))->get_vpiTopModule();
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiDefDecayTime) {
       return ((module*)(obj))->get_vpiDefDecayTime();
     } 
}

 if (handle->type == uhdmdesign) {
     if (property == vpiLineNo) {
       return ((design*)(obj))->get_vpiLineNo();
     } 
}

  return 0;
}

PLI_BYTE8 *vpi_get_str (PLI_INT32 property,
                        vpiHandle   object) {
  if (!object) {
    std::cout << "VPI ERROR: Bad usage of vpi_get_str" << std::endl;    
    return 0;
  }
  uhdm_handle* handle = (uhdm_handle*) object;
  BaseClass*  obj = (BaseClass*) handle->object;
  
 if (handle->type == uhdmprocess) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((process*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmscope) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((scope*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmmodport) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((modport*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdminterface_tf_decl) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((interface_tf_decl*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdminterface) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((interface*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdminterface_array) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((interface_array*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmcont_assign) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((cont_assign*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmport) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((port*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmmodule_array) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((module_array*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmprimitive) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((primitive*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmprimitive_array) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((primitive_array*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmmod_path) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((mod_path*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmtchk) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((tchk*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmdef_param) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((def_param*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmio_decl) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((io_decl*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmalias_stmt) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((alias_stmt*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmclocking_block) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((clocking_block*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdminstance_array) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((instance_array*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((module*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmmodule) {
     if (property == vpiName) {
       return (PLI_BYTE8*) strdup(((module*)(obj))->get_vpiName().c_str());
     } 
}

 if (handle->type == uhdmdesign) {
     if (property == vpiFile) {
       return (PLI_BYTE8*) strdup(((design*)(obj))->get_vpiFile().c_str());
     } 
}

 if (handle->type == uhdmdesign) {
     if (property == vpiName) {
       return (PLI_BYTE8*) strdup(((design*)(obj))->get_vpiName().c_str());
     } 
}

  return 0;
}


/* delay processing */

void vpi_get_delays (vpiHandle object,
                     p_vpi_delay delay_p) {
}

void vpi_put_delays (vpiHandle object,
                     p_vpi_delay delay_p) {
}

/* value processing */

void vpi_get_value (vpiHandle expr,
                    p_vpi_value value_p) {
}

vpiHandle vpi_put_value (vpiHandle object,
                         p_vpi_value value_p,
                         p_vpi_time time_p,
                         PLI_INT32 flags) {
  return 0;
}

void vpi_get_value_array (vpiHandle object,
                          p_vpi_arrayvalue arrayvalue_p,
                          PLI_INT32 *index_p,
                          PLI_UINT32 num) {
}

void vpi_put_value_array (vpiHandle object,
                          p_vpi_arrayvalue arrayvalue_p,
                          PLI_INT32 *index_p,
                          PLI_UINT32 num) {
}

/* time processing */

void vpi_get_time(vpiHandle object,
                  p_vpi_time time_p) {
}


PLI_INT32 vpi_get_data (PLI_INT32 id,
                        PLI_BYTE8 *dataLoc,
			PLI_INT32 numOfBytes) {
  return 0;
}

PLI_INT32 vpi_put_data (PLI_INT32 id,
                        PLI_BYTE8 *dataLoc,
			PLI_INT32 numOfBytes) {
  return 0;
}

void *vpi_get_userdata (vpiHandle obj) {
  return 0;
}

PLI_INT32 vpi_put_userdata (vpiHandle obj,
                            void *userdata) {
  return 0;
}

vpiHandle vpi_handle_by_multi_index (vpiHandle obj,
                                     PLI_INT32 num_index,
                                     PLI_INT32 *index_array) {
  return 0;
}

