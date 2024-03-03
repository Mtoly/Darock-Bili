//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef HCIndexTable_h
#define HCIndexTable_h
@import Foundation;

@class NSData, NSUUID;
@protocol {vector<unsigned long long, std::allocator<unsigned long long>>="__begin_"^Q"__end_"^Q"__end_cap_"{__compressed_pair<unsigned long long *, std::allocator<unsigned long long>>="__value_"^Q}};

@interface HCIndexTable : NSObject {
  /* instance variables */
  struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _mutableHuffmanCodes;
}

@property (readonly, nonatomic) NSData *huffmanCodesMemoryMappedData;
@property (readonly, nonatomic) const unsigned long long * huffmanCodes;
@property (readonly, nonatomic) const struct HCIndexTableFileHeader { unsigned int x0; unsigned short x1; unsigned char x2[16] } * fileHeader;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) NSUUID *versionUUID;

/* class methods */
+ (id)indexTableFromFile:(id)file;

/* instance methods */
- (id)init;
- (id)initWithHuffmanCodesMemoryMappedData:(id)data;
- (id)codeAtIndex:(unsigned long long)index;
- (BOOL)writeToFile:(id)file;
@end

#endif /* HCIndexTable_h */