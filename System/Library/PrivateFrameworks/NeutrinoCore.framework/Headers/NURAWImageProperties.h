/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NURAWImageProperties <NSObject>
@property (readonly) NSString * decoderVersion; 
@property (readonly) NSArray * availableDecoderVersions; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) id<NURAWNoiseReductionProperties> noiseReductionProperties; 
@required
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;
-(NSArray *)availableDecoderVersions;
-(double)temperature;
-(double)tint;

@end
