/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:37:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMomentsMessengerDelegate <NSObject>
@required
-(void)streamTokenDidCleanupAllRequests:(long long)arg1;
-(void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 URL:(id)arg3 error:(id)arg4;
-(void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(BOOL)arg3;

@end

