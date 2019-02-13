//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/UISearchResultsUpdating-Protocol.h>

@class IKAppKeyboard, IKTextFieldElement, IKViewElement, NSString, UISearchController, UIView, _TVStackCollectionViewController;

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController <UISearchResultsUpdating, IKAppKeyboardDelegate>
{
    UIView *_nonResultsView;
    _TVStackCollectionViewController *_resultsViewController;
    UISearchController *_searchController;
    IKTextFieldElement *_searchFieldElement;
    IKAppKeyboard *_ikKeyboard;
    IKViewElement *_nonResultsElement;
    IKViewElement *_collectionListElement;
    struct CGRect _keyboardFrame;
    IKViewElement *_viewElement;
}

@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (id)_sanitizedText;
- (_Bool)_isAtWordEnd;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

