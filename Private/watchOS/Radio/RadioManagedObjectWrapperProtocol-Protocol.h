//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef RadioManagedObjectWrapperProtocol_Protocol_h
#define RadioManagedObjectWrapperProtocol_Protocol_h
@import Foundation;

@protocol RadioManagedObjectWrapperProtocol <NSObject>

@property (readonly, nonatomic) BOOL databaseBacked;
@property (readonly, nonatomic) NSManagedObject *managedObject;
@property (readonly, nonatomic) RadioModel *model;

/* instance methods */
- (id)initWithModel:(id)model managedObject:(id)object;
- (BOOL)isDatabaseBacked;
@end

#endif /* RadioManagedObjectWrapperProtocol_Protocol_h */