//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKBarcodeItem_h
#define NPKBarcodeItem_h
@import Foundation;

#include "NPKListItem.h"

@class NSArray, PKImage;

@interface NPKBarcodeItem : NPKListItem

@property (readonly, nonatomic) NSArray *barcodes;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL forPayment;
@property (readonly, nonatomic) PKImage *barcodeLogoImage;
@property (readonly, nonatomic) BOOL denseBarcode;

/* instance methods */
- (id)initWithIdentifier:(id)identifier barcodes:(id)barcodes state:(long long)state forPayment:(BOOL)payment withBarcodeLogo:(id)logo denseBarcode:(BOOL)barcode;
- (id)description;
- (BOOL)isDenseBarcode;
@end

#endif /* NPKBarcodeItem_h */