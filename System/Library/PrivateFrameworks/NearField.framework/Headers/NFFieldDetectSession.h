/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFFieldDetectSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {

	NFWeakReference* _delegate;
	BOOL _fieldNotificationSent;

}

@property (assign) id<NFFieldDetectSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didEndUnexpectedly;
-(void)dealloc;
-(void)setDelegate:(id<NFFieldDetectSessionDelegate>)arg1 ;
-(id<NFFieldDetectSessionDelegate>)delegate;
@end
