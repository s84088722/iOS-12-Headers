//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BrowseItemViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol BrowseViewDelegate, BrowseViewMapsDelegate;

__attribute__((visibility("hidden")))
@interface BrowseView : UIView <BrowseItemViewDelegate>
{
    unsigned long long _nb_rows;
    _Bool _interactionsDisabled;
    _Bool _accessibilityMode;
    NSMutableDictionary *_heightCache;
    double _lastHeight;
    _Bool _adaptativeWidthGrid;
    _Bool _adaptativeHeightGrid;
    id <BrowseViewDelegate> _delegate;
    id <BrowseViewMapsDelegate> _mapsDelegate;
    NSArray *_categories;
    NSMutableArray *_parentArrayItemViews;
    NSMutableArray *_parentArrayViews;
    NSArray *_views;
    unsigned long long _maxNumberItems;
    NSMutableArray *_itemViewReuseQueue;
}

@property(retain, nonatomic) NSMutableArray *itemViewReuseQueue; // @synthesize itemViewReuseQueue=_itemViewReuseQueue;
@property(nonatomic) unsigned long long maxNumberItems; // @synthesize maxNumberItems=_maxNumberItems;
@property(nonatomic) _Bool adaptativeHeightGrid; // @synthesize adaptativeHeightGrid=_adaptativeHeightGrid;
@property(nonatomic) _Bool adaptativeWidthGrid; // @synthesize adaptativeWidthGrid=_adaptativeWidthGrid;
@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;
@property(retain, nonatomic) NSMutableArray *parentArrayViews; // @synthesize parentArrayViews=_parentArrayViews;
@property(retain, nonatomic) NSMutableArray *parentArrayItemViews; // @synthesize parentArrayItemViews=_parentArrayItemViews;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) __weak id <BrowseViewMapsDelegate> mapsDelegate; // @synthesize mapsDelegate=_mapsDelegate;
@property(nonatomic) __weak id <BrowseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectCategoryWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)captureUserAction:(int)arg1 target:(int)arg2 categoriesDisplayed:(id)arg3 categorySelected:(id)arg4;
- (void)browseItemViewTouched:(id)arg1;
- (void)browseItemViewAnimationCompleted:(id)arg1 pushed:(_Bool)arg2;
- (void)updateConstraintsWithAnimation:(_Bool)arg1 revert:(_Bool)arg2;
- (void)updateConstraintsWithAnimation:(_Bool)arg1;
- (void)setDeltaPositionX:(unsigned long long)arg1 andY:(unsigned long long)arg2;
- (void)createConstraintsForView:(id)arg1;
- (id)createViewsForCategories:(id)arg1;
- (void)getWidth:(double *)arg1 andLeftMargin:(double *)arg2;
- (double)getRowHeight:(unsigned long long)arg1;
- (void)popViews;
- (void)push:(id)arg1 above:(id)arg2 fromView:(id)arg3 animated:(_Bool)arg4;
- (void)push:(id)arg1 above:(id)arg2 fromView:(id)arg3;
- (void)selectItem:(id)arg1 withAnimation:(_Bool)arg2;
- (void)fillArrayWithNull:(id)arg1;
@property(readonly, nonatomic) _Bool isCurrentCategorySelected;
- (void)setCurrentCategory:(id)arg1;
- (id)validCategoriesArray:(id)arg1;
- (id)itemViewForItem:(id)arg1;
- (void)addInQueue:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)layoutSubviews;
- (void)_contentSizeDidChange;
- (void)customInit;
- (id)init;
- (unsigned long long)numberOfRowsForItems:(id)arg1;
- (double)currentHeight;
- (unsigned long long)numberItemsPerRow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

