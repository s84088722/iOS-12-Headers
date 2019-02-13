//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppMenuBarDocumentDelegate-Protocol.h>

@class IKAppMenuBarDocument, NSArray, NSString, SKUIMenuItemViewElement;
@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate>
{
    IKAppMenuBarDocument *_menuBarDocument;
    long long _menuBarStyle;
    NSArray *_menuItemViewElements;
    _Bool _scrollEnabled;
    SKUIMenuItemViewElement *_selectedMenuItemViewElement;
    _Bool _needsReload;
    id <SKUIMenuBarViewElementConfigurationDelegate> _delegate;
    id <_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;
}

@property(nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) __weak id <_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate; // @synthesize reloadDelegate=_reloadDelegate;
@property(nonatomic, getter=_needsReload, setter=_setNeedsReload:) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(readonly, nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <SKUIMenuBarViewElementConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(_Bool)arg3;
- (void)_ensureDataLoaded;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;
- (unsigned long long)indexOfMenuItemViewElement:(id)arg1;
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentForMenuItemAtIndex:(unsigned long long)arg1;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) SKUIMenuItemViewElement *selectedMenuItemViewElement; // @synthesize selectedMenuItemViewElement=_selectedMenuItemViewElement;
@property(readonly, nonatomic) unsigned long long numberOfMenuItems;
@property(readonly, nonatomic) long long menuBarStyle;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(_Bool)arg3;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;
- (id)_initWithMenuBarDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

