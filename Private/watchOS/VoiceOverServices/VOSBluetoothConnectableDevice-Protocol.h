//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef VOSBluetoothConnectableDevice_Protocol_h
#define VOSBluetoothConnectableDevice_Protocol_h
@import Foundation;

@protocol VOSBluetoothConnectableDevice <NSObject>
/* instance methods */
- (id)name;
- (id)identifier;
- (id)address;
- (BOOL)paired;
- (BOOL)connected;
- (BOOL)connecting;
- (void)connect;
- (void)disconnect;
- (void)unpair;
@end

#endif /* VOSBluetoothConnectableDevice_Protocol_h */