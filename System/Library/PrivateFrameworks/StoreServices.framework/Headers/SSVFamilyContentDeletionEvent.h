/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject {

	NSArray* _deletedAccounts;

}

@property (nonatomic,readonly) NSArray * deletedAccounts;              //@synthesize deletedAccounts=_deletedAccounts - In the implementation block
+(id)notificationPayloadWithAccountPairs:(id)arg1 ;
+(void)postDistributedNotificationWithAccountPairs:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)initWithXPCEventStreamEvent:(id)arg1 ;
-(NSArray *)deletedAccounts;
@end

