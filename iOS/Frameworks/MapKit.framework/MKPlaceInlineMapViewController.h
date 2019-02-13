//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKMapCamera, MKMapItem, NSArray, NSString, _MKPlaceInlineMapContentView, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol>
{
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    _Bool _bottomHairlineHidden;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_owner;
    MKMapCamera *_mapCamera;
}

+ (id)inlineMapWithMapItem:(id)arg1;
@property(retain, nonatomic) MKMapCamera *mapCamera; // @synthesize mapCamera=_mapCamera;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)_launchMaps;
- (void)_handleTapOnMap;
- (void)_updateSnapshotImage:(id)arg1;
- (void)_updateInlineMapWithRefinedMapItems;
- (struct CGSize)_mapSize;
- (CDStruct_02837cd9)mapRectContainingMapItems;
- (void)updateInlineMapWithRefinedMapItems;
- (void)_updateMap;
- (id)snapshot;
@property(readonly, nonatomic) NSArray *visibleMapItems;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMKMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

