/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <UIKitCore/_UIIVCResponseDelegate.h>

@protocol _UIIVCResponseDelegate;
@class NSString;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {

	id<_UIIVCResponseDelegate> _responseDelegate;

}

@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

