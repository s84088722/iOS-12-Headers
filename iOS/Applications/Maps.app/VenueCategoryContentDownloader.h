//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MKMapItem;
@protocol VenueCategoryContentDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface VenueCategoryContentDownloader : NSObject
{
    _Bool _currentSearchShouldFrameMapViewport;
    id <VenueCategoryContentDownloaderDelegate> _delegate;
    MKMapItem *_mapItem;
    GEOSearchCategory *_searchCategory;
}

@property(nonatomic) _Bool currentSearchShouldFrameMapViewport; // @synthesize currentSearchShouldFrameMapViewport=_currentSearchShouldFrameMapViewport;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <VenueCategoryContentDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchDidReceiveAutoCompleteSubcategories:(id)arg1;
- (void)searchDidReceiveResults:(id)arg1;
- (void)searchDidCancel;
- (void)searchDidFail;
- (void)searchWillStart;
- (void)performSearchWithVenueCategoryItem:(id)arg1 actionCoordination:(id)arg2;
- (void)performSearchWithSearchCategory:(id)arg1 subcategoriesType:(int)arg2 filter:(id)arg3 shouldFrameMapViewport:(_Bool)arg4 actionCoordination:(id)arg5;
- (void)fetchVenueMapItemWithBusinessID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 venueAutoCompleteCategoryCardItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 venueCategoryCardItem:(id)arg2;

@end

