//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMICloudIsOffDataView_h
#define REMICloudIsOffDataView_h
@import Foundation;

#include "REMStore.h"

@interface REMICloudIsOffDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

/* instance methods */
- (id)initWithStore:(id)store;
- (id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(id *)error;
@end

#endif /* REMICloudIsOffDataView_h */