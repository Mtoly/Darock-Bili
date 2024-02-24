//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SSUXPCUtils_h
#define SSUXPCUtils_h
@import Foundation;

@interface SSUXPCUtils : NSObject
/* class methods */
+ (BOOL)isShortcutsChange:(id)change;
+ (BOOL)isPlaceholder:(id)placeholder;
+ (id)extractSingleBundleId:(id)id;
+ (void)dispatchAsyncWithTransaction:(id)transaction block:(id /* block */)block;
+ (id)extractUserInfo:(id)info;
+ (BOOL)isCoreDataObjectArrayShortcutsChange:(id)change;
+ (BOOL)isCoreDataObjectShortcutsChange:(id)change;
@end

#endif /* SSUXPCUtils_h */