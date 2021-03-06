/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _ATXMotion;

@interface _ATXCachedMotion : NSObject {

	NSDate* lastUpdated;
	_ATXMotion* _currentMotion;

}

@property (nonatomic,copy,readonly) _ATXMotion * currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
-(_ATXMotion *)currentMotion;
-(id)initWithATXMotion:(id)arg1 ;
-(BOOL)isExpired;
-(void)update:(id)arg1 ;
@end

