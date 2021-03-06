//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CarFocusOrderCollection-Protocol.h"
#import "CarRoutePreviewAlternatesViewDelegate-Protocol.h"
#import "CarRoutePreviewSign-Protocol.h"

@class NSArray, NSString, UIStackView;
@protocol CarRoutePreviewAlternatesOverlayDelegate, CarRoutePreviewOverlayDataSource;

__attribute__((visibility("hidden")))
@interface CarRoutePreviewAlternatesOverlaySign : UIView <CarRoutePreviewAlternatesViewDelegate, CarRoutePreviewSign, CarFocusOrderCollection>
{
    NSArray *_alternateRouteViews;
    NSArray *_keylineHeightConstraints;
    UIStackView *_stackView;
    id <CarRoutePreviewAlternatesOverlayDelegate> _delegate;
    id <CarRoutePreviewOverlayDataSource> _dataSource;
}

@property(nonatomic) __weak id <CarRoutePreviewOverlayDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CarRoutePreviewAlternatesOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)identifierForFocusItem:(id)arg1;
- (id)focusItemForIdentifier:(id)arg1;
- (id)focusOrderSubItems;
- (void)setInitialSelection;
- (void)alternateRouteViewDidBecomeSelected:(id)arg1;
- (void)_clearSelection;
- (void)_selectRouteAtIndex:(unsigned long long)arg1;
- (void)_updateContents;
- (id)preferredFocusEnvironments;
- (void)reloadData;
- (void)didMoveToSuperview;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

