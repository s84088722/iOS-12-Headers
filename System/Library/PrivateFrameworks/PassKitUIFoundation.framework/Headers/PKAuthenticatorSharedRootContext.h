/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:37 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {

	NSLock* _lock;
	LAContext* _LAContext;
	BOOL _assumeUserIntentAvailable;

}

@property (assign,nonatomic) BOOL assumeUserIntentAvailable;              //@synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable - In the implementation block
+(id)sharedInstance;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)assumeUserIntentAvailable;
-(BOOL)_initialUserIntentAvailabilityAssumption;
-(id)externalizedContext;
-(void)setAssumeUserIntentAvailable:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end
