/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(double)average;
-(void)dealloc;
-(unsigned long long)window;
-(void)reset;
-(id)initWithWindow:(unsigned long long)arg1 ;
-(void)update:(double)arg1 ;
@end

