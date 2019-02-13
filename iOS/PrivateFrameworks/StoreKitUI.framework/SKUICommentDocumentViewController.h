//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICommentDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, SKUICommentPostBarView, SKUICommentTemplateViewElement, SKUILayoutCache, SKUIMediaSocialAuthor, SKUIStackDocumentViewController, SKUIStackTemplateElement, SKUIViewElementLayoutContext;

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController>
{
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    _Bool _didShowKeyboard;
    _Bool _keyboardVisible;
    struct CGRect _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    _Bool _scrollNewCommentToView;
    long long _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

- (void).cxx_destruct;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)_reloadContentSize:(double)arg1;
- (void)_preloadCommenterImages;
- (_Bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_layoutKeyboard;
- (void)_layoutScrollView:(double)arg1;
- (id)_layoutContext;
- (id)_getSelectedCommenter;
- (void)_checkAdminStatus;
- (void)_changeCommenter;
- (id)_backgroundColor;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(_Bool)arg2 applyKeyboardOffset:(_Bool)arg3;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

