/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKClampNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;

}
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
-(double)valueAt:;
-(id)init;
@end
