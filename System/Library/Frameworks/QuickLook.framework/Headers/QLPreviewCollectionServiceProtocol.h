/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
@required
-(void)setAllowInteractiveTransitions:(BOOL)arg1;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)setNotificationCenter:(id)arg1;

@end
