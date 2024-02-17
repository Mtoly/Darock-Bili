//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef NSUUID_CRDT_Additions_h
#define NSUUID_CRDT_Additions_h
@import Foundation;

@interface NSUUID (CRDT_Additions) <CRDataType, CREquatable, CRCoding>
/* class methods */
+ (id)TTZero;
+ (id)CR_UUIDFromStdString:(const void *)string;
+ (id)CR_repeatedCharUUID:(unsigned char)uuid;
+ (id)CR_zero;

/* instance methods */
- (long long)TTCompare:(id)ttcompare;
- (id)TTShortDescription;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })CR_toStdString;
- (void)mergeWith:(id)with;
- (id)deltaSince:(id)since in:(id)in;
- (void)walkGraph:(id /* block */)graph;
- (void)setDocument:(id)document;
- (void)realizeLocalChangesIn:(id)in;
- (id)tombstone;
- (long long)CR_compare:(id)cr_compare;
- (id)CR_shortDescription;
- (id)initWithCRCoder:(id)crcoder;
- (void)encodeWithCRCoder:(id)crcoder;
@end

#endif /* NSUUID_CRDT_Additions_h */