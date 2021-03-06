/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BKSAssertionClientMultiplexerListening <NSObject>
@property (nonatomic,readonly) NSString * supportedAssertionType; 
@required
-(NSString *)supportedAssertionType;
-(void)assertionQueue_handleMessage:(id)arg1;
-(void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
-(void)assertionQueue_handleDestroyEvent:(id)arg1;
-(void)connectionWasDestroyed;

@end

