//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKPictureItemContainerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class GEOMapItemAttribution, NSString, UIView;
@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotatedItemListViewController : UIViewController <MKPictureItemContainerAnalyticsDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    UIViewController *_annotatedItemListViewController;
    GEOMapItemAttribution *_attribution;
    NSString *_headerTitle;
    UIView *_topHairlineSeparator;
    UIView *_bottomHairlineSeparator;
    double _viewControllerTopPadding;
    double _viewControllerBottomPadding;
    double _headerTopPadding;
}

@property(readonly, nonatomic) double headerTopPadding; // @synthesize headerTopPadding=_headerTopPadding;
@property(readonly, nonatomic) double viewControllerBottomPadding; // @synthesize viewControllerBottomPadding=_viewControllerBottomPadding;
@property(readonly, nonatomic) double viewControllerTopPadding; // @synthesize viewControllerTopPadding=_viewControllerTopPadding;
@property(readonly, nonatomic) UIView *bottomHairlineSeparator; // @synthesize bottomHairlineSeparator=_bottomHairlineSeparator;
@property(readonly, nonatomic) UIView *topHairlineSeparator; // @synthesize topHairlineSeparator=_topHairlineSeparator;
@property(readonly, copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) UIViewController *annotatedItemListViewController; // @synthesize annotatedItemListViewController=_annotatedItemListViewController;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void).cxx_destruct;
- (void)captureUserAction:(int)arg1;
- (id)infoCardChildPossibleActions;
- (void)updateUIForTheme:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
@property(nonatomic, getter=isBottomSeparatorHidden) _Bool bottomSeparatorHidden;
@property(nonatomic, getter=isTopSeparatorHidden) _Bool topSeparatorHidden;
- (void)openAttribution;
- (void)viewDidLoad;
- (id)initWithTextItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (id)initWithPictureItemContainer:(id)arg1 title:(id)arg2 attribution:(id)arg3;
- (id)initWithChildViewController:(id)arg1 title:(id)arg2 attribution:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

