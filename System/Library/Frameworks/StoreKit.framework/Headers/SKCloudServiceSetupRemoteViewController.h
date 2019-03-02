/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKCloudServiceSetupExtensionClientInterface.h>

@protocol SKCloudServiceSetupRemoteViewControllerDelegate;
@class NSString;

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface> {

	id<SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKCloudServiceSetupRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<SKCloudServiceSetupRemoteViewControllerDelegate>)arg1 ;
-(id<SKCloudServiceSetupRemoteViewControllerDelegate>)delegate;
@end
