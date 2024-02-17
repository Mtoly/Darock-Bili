//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSReaderFont_h
#define WBSReaderFont_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface WBSReaderFont : NSObject<NSCopying> {
  /* instance variables */
  NSString *_localizedName;
  BOOL _hasCalculatedLocalizedName;
}

@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *familyNameForWebContent;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL installed;
@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)systemFont;
+ (id)systemFontWithDisplayName:(id)name;
+ (id)fontWithFamilyName:(id)name displayName:(id)name;

/* instance methods */
- (id)_initWithFamilyName:(id)name displayName:(id)name type:(long long)type;
- (BOOL)isInstalled;
- (id)_localizedName;
- (struct __CTFontDescriptor *)_createFontDescriptorRefForFontFamilyName:(id)name restrictToEnabled:(BOOL)enabled;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WBSReaderFont_h */