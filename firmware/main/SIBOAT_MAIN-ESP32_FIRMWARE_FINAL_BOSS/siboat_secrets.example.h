#pragma once
// Copy this file to siboat_secrets.h in the SAME sketch folder and fill it in. Never commit the real file.
// GitHub Actions can create it for you: paste the finished file into the repository secret SIBOAT_SECRETS_H.
#define SIBOAT_SSID1 "SIBOAT NETWORK"
#define SIBOAT_PASS1 "siboatdevteam"
#define SIBOAT_SSID2 "Private Wifi"
#define SIBOAT_PASS2 "admin543210"
#define SIBOAT_SSID3 "bleach."
#define SIBOAT_PASS3 "a703bba7d33f"

// Bluetooth control PIN, 4 to 8 digits. While this is not a number, Bluetooth control stays OFF
// (the Main ESP32 does not even advertise). Choose your own PIN; do not reuse a Wi-Fi password.
#define SIBOAT_BLE_PIN "102938"

// Optional: require a password for Wi-Fi (OTA) uploads. Leave commented out if your upload tool cannot enter one.
// #define SIBOAT_OTA_PASSWORD "siboatoat2.0"
