// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/permission_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK permission_handler_on_before_script_extension_load(
    struct _cef_permission_handler_t* self, cef_browser_t* browser,
    cef_frame_t* frame, const cef_string_t* extensionName) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return 0;
  // Verify param: extensionName; type: string_byref_const
  DCHECK(extensionName);
  if (!extensionName)
    return 0;

  // Execute
  bool _retval = CefPermissionHandlerCppToC::Get(
      self)->OnBeforeScriptExtensionLoad(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      CefString(extensionName));

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefPermissionHandlerCppToC::CefPermissionHandlerCppToC(
    CefPermissionHandler* cls)
    : CefCppToC<CefPermissionHandlerCppToC, CefPermissionHandler,
        cef_permission_handler_t>(cls) {
  struct_.struct_.on_before_script_extension_load =
      permission_handler_on_before_script_extension_load;
}

#ifndef NDEBUG
template<> long CefCppToC<CefPermissionHandlerCppToC, CefPermissionHandler,
    cef_permission_handler_t>::DebugObjCt = 0;
#endif

