/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionSwipeExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding> {

	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
+(id)swipeActionWithLocation:(CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
@end

