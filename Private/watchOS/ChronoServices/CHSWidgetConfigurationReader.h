//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetConfigurationReader_h
#define CHSWidgetConfigurationReader_h
@import Foundation;

#include "CHSChronoServicesConnection.h"

@interface CHSWidgetConfigurationReader : NSObject {
  /* instance variables */
  CHSChronoServicesConnection *_connection;
}

/* instance methods */
- (id)init;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)completion;
- (id)_transformResults:(id)results;
@end

#endif /* CHSWidgetConfigurationReader_h */