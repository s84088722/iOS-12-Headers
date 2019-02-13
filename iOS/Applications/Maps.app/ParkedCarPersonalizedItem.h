//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PersonalizedItem-Protocol.h"

@class AddressBookAddress, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchResult, VKLabelMarker;

__attribute__((visibility("hidden")))
@interface ParkedCarPersonalizedItem : NSObject <PersonalizedItem>
{
    NSString *_title;
    MKMapItem *_mapItem;
    PersonalizedItemSource *_source;
    ParkedCar *_parkedCar;
    struct CLLocationCoordinate2D _coordinate;
}

@property(readonly, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) _Bool shouldBeHiddenFromMap;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) NSSet *keys;
@property(readonly, nonatomic) unsigned long long priority;
- (id)initWithParkedCar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) _Bool needsToPreserveSelection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;

@end

