/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFXRemoteCommandServerDelegate;
@class NSDistributedNotificationCenter;

@interface CFXRemoteCommandServer : NSObject {

	id<CFXRemoteCommandServerDelegate> _delegate;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (assign,nonatomic,__weak) id<CFXRemoteCommandServerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
-(void)onAddShapeNotification:(id)arg1 ;
-(void)onAddStickerNotification:(id)arg1 ;
-(void)onAddTextNotification:(id)arg1 ;
-(void)onRemoveEffectsNotification:(id)arg1 ;
-(void)onSetAnimojiNotification:(id)arg1 ;
-(void)onSetFilterNotification:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(void)setDelegate:(id<CFXRemoteCommandServerDelegate>)arg1 ;
-(id<CFXRemoteCommandServerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

