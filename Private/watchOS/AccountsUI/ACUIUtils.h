//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUIUtils_h
#define ACUIUtils_h
@import Foundation;

@interface ACUIUtils : NSObject
/* class methods */
+ (void)filterAccounts:(id)accounts toTopLevel:(id)level grouped:(id)grouped ignoringGroups:(id)groups;
+ (id)_accountGroupIdentifier:(id)identifier ignoringGroups:(id)groups;
+ (id)sortedAccountsFromAccounts:(id)accounts;
+ (id)sortedDataclassesFrom:(id)from;
@end

#endif /* ACUIUtils_h */