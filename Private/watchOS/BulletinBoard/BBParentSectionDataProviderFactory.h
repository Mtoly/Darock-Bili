//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBParentSectionDataProviderFactory_h
#define BBParentSectionDataProviderFactory_h
@import Foundation;

#include "BBSectionIdentity-Protocol.h"
#include "BBSectionInfo.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BBParentSectionDataProviderFactory : NSObject<BBSectionIdentity, NSSecureCoding>

@property (copy, nonatomic) BBSectionInfo *sectionInfo;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)factoryFromSectionInfo:(id)info;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSectionInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)dataProviders;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (id)sectionIcon;
@end

#endif /* BBParentSectionDataProviderFactory_h */