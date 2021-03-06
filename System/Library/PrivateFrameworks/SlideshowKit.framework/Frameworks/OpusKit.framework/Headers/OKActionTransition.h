/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionTransitionExports.h>

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports> {

	float _progress;
	float _velocity;
	unsigned long long _target;

}

@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) float progress;                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float velocity;                         //@synthesize velocity=_velocity - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
+(id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5 ;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)target;
-(float)velocity;
-(float)progress;
@end

