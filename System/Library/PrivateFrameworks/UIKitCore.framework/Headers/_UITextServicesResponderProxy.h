/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>

@protocol _UITextServicesResponderProxyDelegate;
@class UIResponder;

@interface _UITextServicesResponderProxy : UIResponder {

	UIResponder* _responder;
	id<_UITextServicesResponderProxyDelegate> _delegate;

}

@property (nonatomic,readonly) UIResponder * responder;                                              //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextServicesResponderProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_proxyWithResponder:(id)arg1 ;
-(void)setDelegate:(id<_UITextServicesResponderProxyDelegate>)arg1 ;
-(id<_UITextServicesResponderProxyDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)nextResponder;
-(UIResponder *)responder;
-(void)_lookup:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_share:(id)arg1 ;
@end

