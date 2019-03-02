/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _maximumIntermediateSideLength;
	unsigned long long _blurDeterminationMethod;

}

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength;              //@synthesize maximumIntermediateSideLength=_maximumIntermediateSideLength - In the implementation block
@property (assign,nonatomic) unsigned long long blurDeterminationMethod;                    //@synthesize blurDeterminationMethod=_blurDeterminationMethod - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(unsigned long long)blurDeterminationMethod;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
