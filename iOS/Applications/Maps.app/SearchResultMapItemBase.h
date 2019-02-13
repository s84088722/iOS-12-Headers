//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PersonalizedItem-Protocol.h"

@class AddressBookAddress, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, VKLabelMarker;
@protocol PersonalizedItemKey;

__attribute__((visibility("hidden")))
@interface SearchResultMapItemBase : NSObject <PersonalizedItem>
{
    id <PersonalizedItemKey> _key;
    _Bool _shouldBeHiddenFromMap;
    PersonalizedItemSource *source;
    unsigned long long sortOrder;
    SearchResult *_searchResult;
}

@property(nonatomic) _Bool shouldBeHiddenFromMap; // @synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) unsigned long long sortOrder; // @synthesize sortOrder;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) NSSet *keys;
- (id)initWithSearchResult:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) _Bool needsToPreserveSelection;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;

@end
