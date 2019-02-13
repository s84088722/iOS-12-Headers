//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuPopoverDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SKUIDividerView, SKUIMenuPopoverController, UIControl;

@interface SKUIFilterBarView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIMenuPopoverDelegate, SKUIViewElementView>
{
    SKUIDividerView *_bottomDividerView;
    NSMutableArray *_centerElementViews;
    struct UIEdgeInsets _contentInset;
    NSMutableArray *_elementControllers;
    UIControl *_focusedMenuButton;
    NSMutableArray *_leftElementViews;
    SKUIMenuPopoverController *_popoverController;
    NSMutableArray *_rightElementViews;
    NSMapTable *_viewElementViews;
}

+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_destroyMenuPopover;
- (void)_showConfirmationAction:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

