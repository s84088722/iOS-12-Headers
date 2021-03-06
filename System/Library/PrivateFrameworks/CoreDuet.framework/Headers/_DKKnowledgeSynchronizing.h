/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeSynchronizing
@required
-(BOOL)synchronizeWithError:(id*)arg1;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)deleteRemoteState:(id*)arg1;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
-(id)sourceDeviceIdentityWithError:(id*)arg1;

@end

