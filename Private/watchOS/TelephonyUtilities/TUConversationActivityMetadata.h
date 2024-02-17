//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationActivityMetadata_h
#define TUConversationActivityMetadata_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TUConversationActivityContext.h"
#include "TUConversationActivitySceneAssociationBehavior.h"
#include "TUSandboxExtendedURL.h"
#include "TUSanitizedCopying-Protocol.h"

@class NSData, NSString, NSURL;

@interface TUConversationActivityMetadata : NSObject<TUSanitizedCopying, NSSecureCoding>

@property (retain, nonatomic) TUSandboxExtendedURL *imageFileURL;
@property (readonly, copy, nonatomic) TUConversationActivityContext *context;
@property (copy, nonatomic) NSData *linkMetadatablob;
@property (readonly, copy, nonatomic) NSURL *fallbackURL;
@property (readonly, copy, nonatomic) NSURL *invitationURL;
@property (nonatomic) BOOL supportsContinuationOnTV;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long preferredBroadcastingAttributes;
@property (readonly, copy, nonatomic) TUConversationActivitySceneAssociationBehavior *sceneAssociationBehavior;
@property (readonly, nonatomic) BOOL supportsActivityPreviews;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)activityMetadataWithDataBlob:(id)blob;

/* instance methods */
- (id)initWithContext:(id)context linkMetadata:(id)metadata fallbackURL:(id)url invitationURL:(id)url supportsContinuationOnTV:(BOOL)tv title:(id)title subTitle:(id)title imageData:(id)data preferredBroadcastingAttributes:(long long)attributes sceneAssociationBehavior:(id)behavior supportsActivityPreviews:(BOOL)previews;
- (id)initWithContext:(id)context linkMetadata:(id)metadata fallbackURL:(id)url invitationURL:(id)url supportsContinuationOnTV:(BOOL)tv title:(id)title subTitle:(id)title imageData:(id)data;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)_imagePreviewDirectoryPath;
- (id)_filePathForImage;
- (BOOL)_createImageFolderIfNeeded;
- (void)saveImageToDisk;
- (void)removeImageDiskFile;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEquivalentToActivityMetadata:(id)metadata;
- (BOOL)_isEqualToActivityMetadata:(id)metadata;
- (id)serializedData;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* TUConversationActivityMetadata_h */