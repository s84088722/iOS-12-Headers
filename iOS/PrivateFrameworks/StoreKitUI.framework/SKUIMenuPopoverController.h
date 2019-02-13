//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSString, SKUIMenuViewController, UIPopoverController;
@protocol SKUIMenuPopoverDelegate;

@interface SKUIMenuPopoverController : NSObject <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>
{
    id <SKUIMenuPopoverDelegate> _delegate;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

@property(nonatomic) __weak id <SKUIMenuPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_destroyPopoverController;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) NSArray *menuTitles;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;
- (id)initWithMenuTitles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

