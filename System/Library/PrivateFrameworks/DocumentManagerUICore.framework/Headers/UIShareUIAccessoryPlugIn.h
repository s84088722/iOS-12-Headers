/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:51:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIShareUIAccessoryPlugIn <NSObject>
@property (nonatomic,__weak,readonly) id<UIShareUIAccessoryHosting> host; 
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) UIViewController*<UIShareUIAccessoryPresenting> inlineAccessoryViewController; 
@required
+(id)shareSheetPlugInWithPresentingHost:(id)arg1 URLs:(id)arg2;
-(void)commitPendingChanges;
-(UIViewController*<UIShareUIAccessoryPresenting>)inlineAccessoryViewController;
-(id<UIShareUIAccessoryHosting>)host;
-(NSArray *)URLs;

@end
