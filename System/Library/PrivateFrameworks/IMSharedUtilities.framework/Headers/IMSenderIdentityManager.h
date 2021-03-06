/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject {

	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;              //@synthesize geminiManager=_geminiManager - In the implementation block
+(BOOL)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2 ;
+(id)sharedInstance;
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(id)init;
@end

