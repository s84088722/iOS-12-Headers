//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUINavigationBarSectionController.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>

@class NSMapTable, NSString, SKUINavigationBarViewElement;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate>
{
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SKUINavigationBarViewElement *_navigationBarElement;
}

- (void).cxx_destruct;
- (void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_reloadButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (struct UIEdgeInsets)_imageInsetsForImageViewElement:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_itemOfferAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)disconnectAllButtons;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationBarViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

