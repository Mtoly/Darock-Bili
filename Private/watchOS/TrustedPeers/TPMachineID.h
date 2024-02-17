//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef TPMachineID_h
#define TPMachineID_h
@import Foundation;

@class NSDate, NSString;

@interface TPMachineID : NSObject

@property (readonly) NSString *machineID;
@property (readonly) unsigned long long status;
@property (readonly) NSDate *modified;

/* instance methods */
- (id)initWithMachineID:(id)id status:(unsigned long long)status modified:(id)modified;
- (id)description;
@end

#endif /* TPMachineID_h */