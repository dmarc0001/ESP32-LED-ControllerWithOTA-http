#pragma once
#include <Preferences.h>
#include "LedContol.hpp"
#include "ProjectDefaults.hpp"

namespace LedControl
{
  // Forward deklaration für die Klasse
  class LedStatusClass;
}  // namespace LedControl

namespace LEDSrv
{
  // TODO: set String values begrenzen
  class LEDPrefs : public Preferences
  {
    private:
    static const char *serialStr;
    bool apIsRunning{ false };

    public:
    LEDPrefs();
    ~LEDPrefs();

    bool begin( bool readOnly = false );
    bool isApRunning();
    void setApIsRunning( bool );
    bool isWlanSet();
    String getSSID();
    void setSSID( String );
    void clearSSID();
    String getPassword();
    void setPassword( String );
    String getSerialStr();
    String getHostname();
    void setHostname( String );
    String getApiUser();
    void setApiUser( String );
    String getApiPassword();
    void setApiPassword( String );
    String getUpdateUser();
    void setUpdateUser( String );
    String getUpdatePassword();
    void setUpdatePassword( String );
    bool getIsLEDInvers();
    void setIsLEDInvers( bool is_invers );
    uint8_t getPwmResolution();
    void setPwmResolution( uint8_t res );
    double getPwmFreq();
    void setPwmFreq( double newFreq );
    void getLedStats( LedControl::LedStatusClass & );
    void setLedStats( LedControl::LedStatusClass & );
    //
    bool makeDefaults();
  };
}  // namespace LEDSrv