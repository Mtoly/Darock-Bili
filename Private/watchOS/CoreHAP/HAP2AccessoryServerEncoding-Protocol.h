//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerEncoding_Protocol_h
#define HAP2AccessoryServerEncoding_Protocol_h
@import Foundation;

@protocol HAP2AccessoryServerEncoding <NSObject>

@property (readonly, nonatomic) unsigned long long encodingFeatures;

/* instance methods */
- (id)encodeBodyValue:(id)value format:(unsigned long long)format error:(id *)error;
- (id)decodeBodyData:(id)data format:(unsigned long long)format error:(id *)error;
- (id)readRequestForAttributeDatabaseWithEncryption:(BOOL)encryption error:(id *)error;
- (id)groupingsForReadRequestsForCharacteristics:(id)characteristics;
- (id)readRequestForCharacteristics:(id)characteristics shouldEncrypt:(BOOL)encrypt error:(id *)error;
- (id)unpairedIdentifyRequestWithError:(id *)error;
- (id)requestToRemovePairing:(id)pairing characteristic:(id)characteristic error:(id *)error;
- (id)requestToAddPairing:(id)pairing characteristic:(id)characteristic error:(id *)error;
- (id)requestToListPairingsWithCharacteristic:(id)characteristic error:(id *)error;
- (id)groupingsForWriteRequestsForCharacteristics:(id)characteristics;
- (id)writeRequestForCharacteristics:(id)characteristics shouldEncrypt:(BOOL)encrypt error:(id *)error;
- (id)prepareWriteRequestForCharacteristics:(id)characteristics ttl:(double)ttl error:(id *)error;
- (id)executeWriteRequestForCharacteristics:(id)characteristics error:(id *)error;
- (id)notificationRequestsForCharacteristics:(id)characteristics type:(unsigned long long)type error:(id *)error;
- (id)responseForRequest:(id)request bodyData:(id)data error:(id *)error;
- (id)eventsForData:(id)data error:(id *)error;
@end

#endif /* HAP2AccessoryServerEncoding_Protocol_h */