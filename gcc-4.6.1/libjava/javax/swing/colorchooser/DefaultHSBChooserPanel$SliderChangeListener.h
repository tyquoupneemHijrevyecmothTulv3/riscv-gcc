
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultHSBChooserPanel$SliderChangeListener__
#define __javax_swing_colorchooser_DefaultHSBChooserPanel$SliderChangeListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
          class DefaultHSBChooserPanel;
          class DefaultHSBChooserPanel$SliderChangeListener;
      }
      namespace event
      {
          class ChangeEvent;
      }
    }
  }
}

class javax::swing::colorchooser::DefaultHSBChooserPanel$SliderChangeListener : public ::java::lang::Object
{

public: // actually package-private
  DefaultHSBChooserPanel$SliderChangeListener(::javax::swing::colorchooser::DefaultHSBChooserPanel *);
public:
  virtual void stateChanged(::javax::swing::event::ChangeEvent *);
public: // actually package-private
  ::javax::swing::colorchooser::DefaultHSBChooserPanel * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_colorchooser_DefaultHSBChooserPanel$SliderChangeListener__