//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKConfigurablePassDetailSectionsControllerDelegate_Protocol_h
#define PKConfigurablePassDetailSectionsControllerDelegate_Protocol_h
@import Foundation;

@protocol PKConfigurablePassDetailSectionsControllerDelegate <NSObject>
/* instance methods */
- (void)presentAuthRequestForPolicy:(long long)policy completion:(id /* block */)completion;
- (void)presentPassDetailDrillInForField:(id)field;
@end

#endif /* PKConfigurablePassDetailSectionsControllerDelegate_Protocol_h */