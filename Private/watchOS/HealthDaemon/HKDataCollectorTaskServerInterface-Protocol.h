//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDataCollectorTaskServerInterface_Protocol_h
#define HKDataCollectorTaskServerInterface_Protocol_h
@import Foundation;

@protocol HKDataCollectorTaskServerInterface <HKUnitTestingTaskServerInterface>
/* instance methods */
- (void)remote_insertDatums:(id)datums device:(id)device metadata:(id)metadata batchUUID:(id)uuid registrationUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_registerWithCompletion:(id /* block */)completion;
- (void)remote_synchronizeWithCompletion:(id /* block */)completion;
@end

#endif /* HKDataCollectorTaskServerInterface_Protocol_h */