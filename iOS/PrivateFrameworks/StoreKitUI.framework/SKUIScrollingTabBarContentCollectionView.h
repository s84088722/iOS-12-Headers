//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingTabBarContentCollectionViewDelegate;

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)_reuseCell:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingTabBarContentCollectionViewDelegate> delegate; // @dynamic delegate;

@end

