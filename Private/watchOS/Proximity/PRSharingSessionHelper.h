//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRSharingSessionHelper_h
#define PRSharingSessionHelper_h
@import Foundation;

@interface PRSharingSessionHelper : NSObject
/* class methods */
+ (id)NSDataMacToUUID:(id)uuid;
+ (id)UUIDToNSDataMac:(id)mac len:(unsigned long long)len;
+ (id)UUIDStringToNSDataMac:(const void *)mac len:(unsigned long long)len;
+ (id)HexStringToNSDataMac:(const void *)mac;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })UIntToHexString:(unsigned long long)string len:(unsigned long long)len;
+ (unsigned long long)NSDataToUInt64:(id)uint64;
+ (id)convertMacStringToNSData:(const void *)nsdata;
+ (id)reverseNSData:(id)nsdata;
+ (int)ProxToCoarseRange:(long long)range;
+ (id)ProxToString:(long long)string;
+ (long long)CoarseRangeToProx:(int)prox;
@end

#endif /* PRSharingSessionHelper_h */