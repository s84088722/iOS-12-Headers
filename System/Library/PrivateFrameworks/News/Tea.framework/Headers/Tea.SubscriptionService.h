/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface Tea.SubscriptionService : NSObject <FCSubscriptionObserving> {

	 delegate;
	 tagService;
	 notificationService;
	 subscriptionController;
	 purchaseController;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)handlePurchaseAddedNotificationWithNotification:(id)arg1 ;
-(void)handlePurchaseRemovedNotificationWithNotification:(id)arg1 ;
-(id)init;
@end

