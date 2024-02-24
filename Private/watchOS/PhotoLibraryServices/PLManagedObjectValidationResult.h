//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLManagedObjectValidationResult_h
#define PLManagedObjectValidationResult_h
@import Foundation;

@class NSArray;
@protocol NSManagedObject<PLValidatedManagedObject;

@interface PLManagedObjectValidationResult : NSObject

@property (nonatomic) BOOL status;
@property (retain, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject;
@property (retain, nonatomic) NSArray *errorMessages;
@property (retain, nonatomic) NSArray *infoMessages;

/* instance methods */
@end

#endif /* PLManagedObjectValidationResult_h */