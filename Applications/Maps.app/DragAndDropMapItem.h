//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapItemResolverDelegate-Protocol.h"

@class AddressBookAddress, CRRecentContact, MKMapItem, MapItemResolver, MapsAnalyticsHelper, NSProgress, NSString, SearchResult, UIView;
@protocol DragAndDropMapItemObserver, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DragAndDropMapItem : NSObject <MapItemResolverDelegate>
{
    MapItemResolver *_resolver;
    MKMapItem *_mapItem;
    AddressBookAddress *_address;
    CRRecentContact *_recentContact;
    SearchResult *_searchResult;
    NSObject<OS_dispatch_group> *_resolveGroup;
    MKMapItem *_resolvedMapItem;
    NSProgress *_resolveProgress;
    NSString *_name;
    id <DragAndDropMapItemObserver> _observer;
    id _presentationObject;
    MKMapItem *_originalMapItem;
    UIView *_sourceView;
    MapsAnalyticsHelper *_analyticsHelper;
    struct CLLocationCoordinate2D _sourceCoordinate;
}

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)dragAndDropItemWithObject:(id)arg1;
@property(readonly, nonatomic) MapsAnalyticsHelper *analyticsHelper; // @synthesize analyticsHelper=_analyticsHelper;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CLLocationCoordinate2D sourceCoordinate; // @synthesize sourceCoordinate=_sourceCoordinate;
@property(readonly, nonatomic) MKMapItem *originalMapItem; // @synthesize originalMapItem=_originalMapItem;
@property(readonly, nonatomic) id presentationObject; // @synthesize presentationObject=_presentationObject;
@property(nonatomic) __weak id <DragAndDropMapItemObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)traitsForMapItemResolver:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)defaultOptions;
- (id)itemProvider;
- (id)itemProviderWriting;
- (void)_resolveMapItem;
- (void)_didResolveMapItem:(id)arg1;
- (id)initWithPersonalizedItem:(id)arg1;
- (id)initWithRecentContact:(id)arg1;
- (id)initWithAddress:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithLabelMarker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

