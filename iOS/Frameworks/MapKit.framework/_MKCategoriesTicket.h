//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceCategoriesTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceCategoriesTicket;

__attribute__((visibility("hidden")))
@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket>
{
    id <GEOMapServiceCategoriesTicket> _ticket;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

