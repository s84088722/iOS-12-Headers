//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MLNeuralNetworkSpecification : NSObject
{
    _Bool _isBiasPreprocessingShared;
    int _precision;
    int _engine;
    int _qos;
    NSString *_modelFilePath;
    NSArray *_inputLayerNames;
    NSArray *_outputLayerNames;
    NSString *_name;
    NSDictionary *_inputDescription;
    NSDictionary *_outputDescription;
    map_2ee3570a _orderedBgr;
    map_2ee3570a _isGrayScale;
    map_135a4f40 _blueBias;
    map_135a4f40 _greenBias;
    map_135a4f40 _redBias;
    map_135a4f40 _grayBias;
    map_135a4f40 _scale;
    set_0cfa92bf _configurationNames;
}

+ (id)specFromFeatureDescriptions:(id)arg1 inputDesc:(id)arg2 outputDesc:(id)arg3 outputLayerNames:(id)arg4 parameters:(id)arg5;
+ (id)specFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
@property set_0cfa92bf configurationNames; // @synthesize configurationNames=_configurationNames;
@property(nonatomic) _Bool isBiasPreprocessingShared; // @synthesize isBiasPreprocessingShared=_isBiasPreprocessingShared;
@property(nonatomic) map_135a4f40 scale; // @synthesize scale=_scale;
@property(nonatomic) map_135a4f40 grayBias; // @synthesize grayBias=_grayBias;
@property(nonatomic) map_135a4f40 redBias; // @synthesize redBias=_redBias;
@property(nonatomic) map_135a4f40 greenBias; // @synthesize greenBias=_greenBias;
@property(nonatomic) map_135a4f40 blueBias; // @synthesize blueBias=_blueBias;
@property(nonatomic) map_2ee3570a isGrayScale; // @synthesize isGrayScale=_isGrayScale;
@property(nonatomic, getter=isOrderedBgr) map_2ee3570a orderedBgr; // @synthesize orderedBgr=_orderedBgr;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(nonatomic) int engine; // @synthesize engine=_engine;
@property(nonatomic) int precision; // @synthesize precision=_precision;
@property(retain, nonatomic) NSDictionary *outputDescription; // @synthesize outputDescription=_outputDescription;
@property(retain, nonatomic) NSDictionary *inputDescription; // @synthesize inputDescription=_inputDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *outputLayerNames; // @synthesize outputLayerNames=_outputLayerNames;
@property(readonly, nonatomic) NSArray *inputLayerNames; // @synthesize inputLayerNames=_inputLayerNames;
@property(retain, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFeatureDescriptions:(id)arg1 inputDesc:(id)arg2 outputDesc:(id)arg3 outputLayerNames:(id)arg4 parameters:(id)arg5 configurations:(vector_ebb6ef3e)arg6;
- (id)initWithFeatureDescriptions:(id)arg1 inputDesc:(id)arg2 outputDesc:(id)arg3 outputLayerNames:(id)arg4 parameters:(id)arg5;
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;

@end
