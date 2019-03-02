/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMAskForTimeInterface <NSObject>
@required
-(void)sendAskForTimeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)approveExceptionForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
