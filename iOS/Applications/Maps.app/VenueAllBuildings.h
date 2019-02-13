//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOVenueFilterItem-Protocol.h"

@protocol GEOVenueIdentifier, GEOVenueLabel;

__attribute__((visibility("hidden")))
@interface VenueAllBuildings : NSObject <GEOVenueFilterItem>
{
    _Bool _describesParentVenue;
    id <GEOVenueIdentifier> _filterID;
    id <GEOVenueLabel> _label;
}

@property(readonly, nonatomic) _Bool describesParentVenue; // @synthesize describesParentVenue=_describesParentVenue;
@property(readonly, nonatomic) id <GEOVenueLabel> label; // @synthesize label=_label;
@property(readonly, nonatomic) id <GEOVenueIdentifier> filterID; // @synthesize filterID=_filterID;
- (void).cxx_destruct;
- (id)initWithVenueIdentifier:(id)arg1;
- (id)init;

@end
