//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VenueClusterCardItem-Protocol.h"

@class NSString, VKLabelMarker;

__attribute__((visibility("hidden")))
@interface LabelMarkerVenueCardItem : NSObject <VenueClusterCardItem>
{
    VKLabelMarker *_labelMarker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) VKLabelMarker *venueLabelMarker;
- (id)initWithLabelMarker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
