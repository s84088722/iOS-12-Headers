//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface WaypointsLoaderTicket : NSObject
{
    id <GEOMapServiceTicket> _mapServiceTicket;
    _Bool _isCancelled;
}

@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) id <GEOMapServiceTicket> mapServiceTicket; // @synthesize mapServiceTicket=_mapServiceTicket;
- (void).cxx_destruct;
- (void)cancel;

@end

