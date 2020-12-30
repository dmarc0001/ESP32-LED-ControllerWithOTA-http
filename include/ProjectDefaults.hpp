#pragma once

namespace OTASrv
{
  /****************************************************************************
   * Konstanten für das Programm +
   ***************************************************************************/
  //
  // Seriennummer des Programmes
  //
  constexpr char serialStr[] = "20201230-0001";

  //
  // Version des Speichers bei Versionen, wenn änderungen an speicher
  // muss die Version erhöhr werden und im code reagiert werden
  //
  constexpr int prefsVersion = 1;
  //
  // Konfigurierbare Parameter
  //
  constexpr char defaultSSID[] = "cryptoWLANGallileo";  //! SSID für WLAN
  constexpr char defaultPassword[] = "sommerSonne92";   //! Passwort für WLAN
  // constexpr char defaultSSID[] = "Controller";                 //! SSID für WLAN
  // constexpr char defaultPassword[] = "serverSaturnRinge2610";  //! Passwort für WLAN
  constexpr char hostname[] = "OTA-Server";   //! Eigener Hostname für MDNS
  constexpr char apiUser[] = "admin";         //! Name des Users API Schnittstelle
  constexpr char apiPassword[] = "admin";     //! Passwort Users API Schnittstelle
  constexpr char updateUser[] = "admin";      //! name des OTA Berechtigten
  constexpr char updatePassword[] = "admin";  //! Passwort des OTA Berechtigten
  //
  // die Schlüsselnamen für den Speicher
  //
  constexpr char wasInitKey[] = "wasInit";                // wurde schon initialisiert?
  constexpr char prefsVersionKey[] = "prefsVersion";      // welche Version der Einstellungen?
  constexpr char SSIDKey[] = "SSID";                      // an welchem WLAN anmelden?
  constexpr char passwordKey[] = "password";              // welches PW im WLAN
  constexpr char hostnameKey[] = "hostname";              // welcher Hostname für das nDNS
  constexpr char serialKey[] = "serial";                  // Seriennummer / version
  constexpr char apiUserKey[] = "apiUser";                // api user name
  constexpr char apiPasswordKey[] = "apiPassword";        // api passwort
  constexpr char updateUserKey[] = "updateUser";          // update user
  constexpr char updatePasswordKey[] = "updatePassword";  // update password
  //
  // PWM/LED Ausgänge GPIO, nicht konfigurierbar
  //
  constexpr double PWM_LED_FREQ = 10000.0;      //! PWM Frequenz
  constexpr uint8_t PWM_RESOLUTION = 12;        //! PWM Resolution 8, 10, 12, 15 BITS
  constexpr uint8_t PWM_LED_RED = 27;           //! GPIO Rote LED
  constexpr uint8_t PWM_LED_CHANNEL_RED = 0;    //! channel für rot
  constexpr uint8_t PWM_LED_GREEN = 26;         //! GPIO Grüne LED
  constexpr uint8_t PWM_LED_CHANNEL_GREEN = 1;  //! Channel für grün
  constexpr uint8_t PWM_LED_BLUE = 25;          //! GPIO blaue LED
  constexpr uint8_t PWM_LED_CHANNEL_BLUE = 3;   //! Channel blaue LED
  constexpr uint8_t PWM_LED_WHITE = 33;         //! Weiße LED
  constexpr uint8_t PWM_LED_CHANNEL_WHITE = 4;  //! Channel weiße LED
  //
  // LED Ausgang GPIO für WLAN CONNECT
  //
  constexpr uint8_t LED_WLANOK = 2;  // "WLAN OK" LED

}  // namespace OTASrv