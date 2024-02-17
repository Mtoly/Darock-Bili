//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKScene_h
#define MKFCKScene_h
@import Foundation;

#include "MKFCKHomeObject.h"
#include "MKFCKHome.h"

@class BOOL *, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface MKFCKScene : MKFCKHomeObject

@property (retain, @dynamic, nonatomic) NSArray *actions;
@property (retain, @dynamic, nonatomic) NSDictionary *applicationData;
@property (copy, @dynamic, nonatomic) NSUUID *flags;
@property (copy, @dynamic, nonatomic) NSUUID *homeModelID;
@property (copy, @dynamic, nonatomic) NSUUID *modelID;
@property (copy, @dynamic, nonatomic) NSString *name;
@property (copy, @dynamic, nonatomic) NSString *type;
@property (copy, @dynamic, nonatomic) NSDate *writerTimestamp;
@property (copy, @dynamic, nonatomic) NSString *writerVersion;
@property (retain, @dynamic, nonatomic) NSSet *accessories;
@property (retain, @dynamic, nonatomic) NSSet *automations;
@property (retain, @dynamic, nonatomic) MKFCKHome *home;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (id)decodeActionMediaPlayback:(id)playback localModel:(id)model context:(id)context;
- (id)encodeActionMediaPlayback:(id)playback accessories:(id)accessories context:(id)context;
- (id)decodeActionShortcut:(id)shortcut localModel:(id)model context:(id)context;
- (id)encodeActionShortcut:(id)shortcut context:(id)context;
- (id)decodeActionAppleMediaAccessoryPower:(id)power localModel:(id)model context:(id)context;
- (id)encodeActionAppleMediaAccessoryPower:(id)power accessories:(id)accessories context:(id)context;
- (id)decodeActionCharacteristic:(id)characteristic localModel:(id)model context:(id)context;
- (id)encodeActionCharacteristic:(id)characteristic accessories:(id)accessories context:(id)context;
- (id)decodeActionNaturalLight:(id)light localModel:(id)model context:(id)context;
- (id)encodeActionNaturalLight:(id)light accessories:(id)accessories shouldRemoveAction:(BOOL *)action context:(id)context;
- (BOOL)importIntoLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)exportFromLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
@end

#endif /* MKFCKScene_h */