// Copyright (c) 2014 GitHub, Inc. All rights reserved.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_API_ATOM_API_TRAY_H_
#define ATOM_BROWSER_API_ATOM_API_TRAY_H_

#include "atom/browser/api/event_emitter.h"
#include "base/memory/scoped_ptr.h"

namespace gfx {
class ImageSkia;
}

namespace atom {

class TrayIcon;

namespace api {

class Menu;

class Tray : public mate::EventEmitter {
 public:
  static mate::Wrappable* New(const gfx::ImageSkia& image);

  static void BuildPrototype(v8::Isolate* isolate,
                             v8::Handle<v8::ObjectTemplate> prototype);

 protected:
  Tray(const gfx::ImageSkia& image);
  virtual ~Tray();

  void SetImage(const gfx::ImageSkia& image);
  void SetPressedImage(const gfx::ImageSkia& image);
  void SetToolTip(const std::string& tool_tip);
  void SetContextMenu(Menu* menu);

 private:
  scoped_ptr<TrayIcon> tray_icon_;

  DISALLOW_COPY_AND_ASSIGN(Tray);
};

}  // namespace api

}  // namespace atom

#endif  // ATOM_BROWSER_API_ATOM_API_TRAY_H_
