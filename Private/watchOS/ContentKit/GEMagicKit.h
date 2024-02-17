//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef GEMagicKit_h
#define GEMagicKit_h
@import Foundation;

@interface GEMagicKit : NSObject
/* class methods */
+ (struct magic_set *)sharedMagicCookie;
+ (id)magicForObject:(id)object decompress:(BOOL)decompress;
+ (id)rawMagicOutputForObject:(id)object cookie:(struct magic_set *)cookie flags:(int)flags;
+ (id)typeHierarchyForType:(id)type;
+ (id)magicForFileAtPath:(id)path;
+ (id)magicForFileAtURL:(id)url;
+ (id)magicForData:(id)data;
+ (id)magicForFileAtPath:(id)path decompress:(BOOL)decompress;
+ (id)magicForFileAtURL:(id)url decompress:(BOOL)decompress;
+ (id)magicForData:(id)data decompress:(BOOL)decompress;
@end

#endif /* GEMagicKit_h */