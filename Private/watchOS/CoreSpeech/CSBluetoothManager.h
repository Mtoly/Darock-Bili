//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSBluetoothManager_h
#define CSBluetoothManager_h
@import Foundation;

@class NSArray, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSBluetoothManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct BTSessionImpl * bluetoothSession;
@property (nonatomic) BOOL isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl * localDevice;
@property (retain, nonatomic) NSArray *pairedDeviceAddresses;
@property (retain, nonatomic) NSArray *connectedDeviceAddresses;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;
@property (nonatomic) struct BTAccessoryManagerImpl * accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *deviceAddressToDeviceInfoMap;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)completion;
- (void)getBTDeviceInfoWithBTAddressString:(id)string withCompletion:(id /* block */)completion;
- (void)getWirelessSplitterInfoWithCompletion:(id /* block */)completion;
- (void)getConnectedBluetoothDeviceAddressesWithCompletion:(id /* block */)completion;
- (id)_getConnectedBluetoothDeviceAddressesFromLocalDevice:(struct BTLocalDeviceImpl *)device;
- (id)_getAddressWithBTDevice:(struct BTDeviceImpl *)btdevice;
- (id)getBluetoothDeviceInfoForDeviceWithId:(id)id;
- (id)_getBluetoothDeviceInfoForDeviceWithBTAddressString:(id)string;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl *)device;
- (void)_detachBluetoothSession;
- (void)_attachBluetoothSession;
- (void)device:(struct BTDeviceImpl *)device serviceMask:(unsigned int)mask serviceEventType:(int)type serviceSpecificEvent:(unsigned int)event result:(int)result;
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)manager accessoryEvent:(int)event device:(struct BTDeviceImpl *)device accessoryState:(int)state;
- (void)_sessionAttached:(struct BTSessionImpl *)attached result:(int)result;
- (void)_sessionDetached:(struct BTSessionImpl *)detached;
- (void)_sessionTerminated:(struct BTSessionImpl *)terminated;
- (void)_setUpLocalDevice;
- (void)_tearDownLocalDevice;
- (void)_setUpAccessoryManager;
- (void)_tearDownAccessoryManager;
- (void)localDevice:(struct BTLocalDeviceImpl *)device event:(int)event result:(int)result;
- (void)_fetchAllConnectedDevices;
- (id)_setBluetoothDeviceInfoForDevice:(struct BTDeviceImpl *)device;
- (void)_loadAACPCapabilityForDevice:(struct BTDeviceImpl *)device deviceAddress:(id)address;
- (void)_clearBluetoothDeviceInfoForDevice:(struct BTDeviceImpl *)device;
@end

#endif /* CSBluetoothManager_h */