//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIPRLikenessResolver_Protocol_h
#define CNUIPRLikenessResolver_Protocol_h
@import Foundation;

#include "CNUIPRLikenessResolver-Protocol.h"
#include "CNUIPlaceholderProviderFactory-Protocol.h"
#include "_CNUILikenessCache.h"

@class CNContactStore, CNSchedulerProvider, NSString;
@protocol CNSchedulerProvider;

@protocol CNUIPRLikenessResolver <NSObject>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (nonatomic) unsigned long long lookupOptions;

/* class methods */
+ (id)descriptorForRequiredKeys;
/* instance methods */
- (id)resolveLikenessesForContacts:(id)contacts workScheduler:(id)scheduler withContentHandler:(id /* block */)handler;
- (id)likenessesForContact:(id)contact workScheduler:(id)scheduler;
- (id)likenessesForContact:(id)contact options:(id)options workScheduler:(id)scheduler;
- (id)basicMonogramObservableFromString:(id)string color:(id)color;
- (id)badgeObservableWithLikenessBadge:(id)badge workScheduler:(id)scheduler;
- (id)placeholderProviderFactory;
@end

#endif /* CNUIPRLikenessResolver_Protocol_h */