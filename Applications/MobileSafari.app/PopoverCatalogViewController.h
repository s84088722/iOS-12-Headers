//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractCatalogViewController.h"

@class CatalogViewController;

@interface PopoverCatalogViewController : AbstractCatalogViewController
{
    CatalogViewController *_primaryCatalogViewController;
}

@property(nonatomic) __weak CatalogViewController *primaryCatalogViewController; // @synthesize primaryCatalogViewController=_primaryCatalogViewController;
- (void).cxx_destruct;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)didGainOwnershipOfFavoritesNavigationController;
- (id)favoritesNavigationController;
- (void)didGainOwnershipOfCompletionsViewController;
- (id)completionsViewControllerIfLoaded;
- (id)completionsViewController;
- (double)requiredContentWidth;
- (void)viewWillLayoutSubviews;

@end
