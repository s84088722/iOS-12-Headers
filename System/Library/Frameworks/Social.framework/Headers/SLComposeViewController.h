/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SLRemoteComposeViewControllerDelegateProtocol.h>

@class NSExtension, NSString, NSArray, NSLayoutConstraint, UIView, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol> {

	NSExtension* _extension;
	NSString* _initialText;
	NSArray* _itemProviders;
	NSArray* _extensionItems;
	NSLayoutConstraint* _keyboardTopConstraint;
	UIView* _keyboardTrackingView;
	long long _savedStatusBarStyle;
	BOOL _wasPresented;
	BOOL _hasInstantiatedExtensionUI;
	/*^block*/id _completionHandler;
	BOOL _didFailLoadingRemoteViewController;
	BOOL _didCompleteSheet;
	long long _maximumImageCount;
	long long _maximumURLCount;
	long long _maximumVideoCount;
	long long _numVideosAdded;
	long long _numImagesAdded;
	long long _numURLsAdded;
	NSString* _serviceType;
	UIViewController* _remoteViewController;

}

@property (retain) UIViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                   //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)isAvailableForServiceType:(id)arg1 ;
+(id)_serviceTypeToExtensionIdentifierMap;
+(BOOL)_isMultiUserDevice;
+(id)_unsupportedServiceTypes;
+(BOOL)_isAvailableForServiceType:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
+(id)_serviceTypeForExtensionIdentifier:(id)arg1 ;
+(BOOL)_legacyBuiltInAvailabilityForService:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
+(BOOL)_isAvailableForMediaShareExtension:(id)arg1 ;
+(BOOL)_isServiceType:(id)arg1 ;
+(id)_extensionIdentifierForServiceType:(id)arg1 ;
+(id)_shareExtensionWithIdentifier:(id)arg1 ;
+(id)composeViewControllerForServiceType:(id)arg1 ;
+(BOOL)isAvailableForExtension:(id)arg1 ;
+(BOOL)isAvailableForExtensionIdentifier:(id)arg1 ;
+(id)composeViewControllerForExtensionIdentifier:(id)arg1 ;
+(id)extensionIdentifierForActivityType:(id)arg1 ;
+(id)composeViewControllerForExtension:(id)arg1 ;
+(BOOL)isAvailableForExtension:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
-(NSString *)serviceType;
-(id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2 ;
-(BOOL)canAddContent;
-(id)_urlForUntypedAsset:(id)arg1 ;
-(BOOL)_addImageAsset:(id)arg1 preview:(id)arg2 ;
-(BOOL)supportsImageAsset:(id)arg1 ;
-(BOOL)_addImageJPEGData:(id)arg1 preview:(id)arg2 ;
-(BOOL)supportsVideoAsset:(id)arg1 ;
-(BOOL)_addURL:(id)arg1 type:(long long)arg2 preview:(id)arg3 ;
-(BOOL)_addVideoData:(id)arg1 preview:(id)arg2 ;
-(BOOL)_addVideoAsset:(id)arg1 preview:(id)arg2 ;
-(void)_handleRemoteViewFailure;
-(void)didLoadSheetViewController;
-(void)remoteController:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(BOOL)addImageAsset:(id)arg1 ;
-(BOOL)addURL:(id)arg1 ;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(void)remoteViewControllerLoadDidTimeout;
-(BOOL)removeAllImages;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)addAttachment:(id)arg1 ;
-(void)userDidPost;
-(void)completeWithResult:(long long)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)removeAllURLs;
-(BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)completionHandler;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(BOOL)_useCustomDimmingView;
-(UIViewController *)remoteViewController;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_instantiateAndBeginExtensionIfNeeded;
-(BOOL)addItemProvider:(id)arg1 ;
-(BOOL)addExtensionItem:(id)arg1 ;
-(void)userDidCancel;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
@end
