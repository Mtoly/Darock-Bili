//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMDataRegressionModel_h
#define AXMDataRegressionModel_h
@import Foundation;

@class NSArray, NSString;

@interface AXMDataRegressionModel : NSObject

@property (readonly, nonatomic) BOOL dataSatisfiesInitialConditions;
@property (readonly, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) double error;
@property (readonly, nonatomic) double score;
@property (nonatomic) BOOL isDisqualified;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double * bestFitParameters;
@property (readonly, nonatomic) int modelParameterCount;
@property (readonly, nonatomic) id /* block */ modelFunction;
@property (readonly, nonatomic) NSArray *partialDerivatives;
@property (readonly, nonatomic) int iterations;
@property (readonly, nonatomic) double * x;
@property (readonly, nonatomic) double * y;
@property (readonly, nonatomic) int n;

/* class methods */
+ (id)getModelForX:(double *)x y:(double *)y n:(int)n;

/* instance methods */
- (id)initWithXValues:(double *)xvalues yValues:(double *)values count:(int)count;
- (void)dealloc;
- (double)fitDataWithModelParams:(double *)params finalParams:(double *)params;
- (void)printMatrix:(double *)matrix rows:(int)rows cols:(int)cols;
- (double)magnitude:(double *)magnitude size:(int)size;
- (void)getIdentityMatrixWithSize:(int)size scalar:(double)scalar result:(double *)result;
- (void)getResidualsVector:(double *)vector result:(double *)result;
- (void)getGradientForX:(double)x parameterValues:(double *)values result:(double *)result;
- (void)getJacobianForParameters:(double *)parameters gradient:(double *)gradient result:(double *)result;
- (int)getMatrixInverse:(double *)inverse size:(int)size pivot:(int *)pivot tmp:(double *)tmp result:(double *)result;
- (void)getDiagonal:(double *)diagonal size:(int)size result:(double *)result;
- (void)computeScore;
- (void)getInitialParams:(double *)params;
- (void)disqualifyModelIfNecessary;
- (id)modelFunctionStringForParameters:(double *)parameters significantFigures:(int)figures;
- (void)sortDataPoints;
- (void)getSMA:(double *)sma lookback:(int)lookback;
- (double)roundNumber:(double)number withSignificantFigures:(unsigned long long)figures;
@end

#endif /* AXMDataRegressionModel_h */