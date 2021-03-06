/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem {

	BOOL _hasBeenUsed;
	id<UISplitViewControllerImpl> _impl;

}

@property (assign,setter=_setImpl:,getter=_impl,nonatomic,__weak) id<UISplitViewControllerImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (getter=_hasBeenUsed,nonatomic,readonly) BOOL hasBeenUsed;                                               //@synthesize hasBeenUsed=_hasBeenUsed - In the implementation block
-(id)target;
-(SEL)action;
-(id)_impl;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(void)_wasUsed;
-(void)_setImpl:(id)arg1 ;
-(BOOL)_hasBeenUsed;
@end

