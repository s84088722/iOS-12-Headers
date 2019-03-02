/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUAdProvider <NSObject>
@required
-(void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4;
-(void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4;
-(void)prerollForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)bannerViewDidLoad:(id)arg1;
-(void)bannerViewDidUnload:(id)arg1;

@end
