//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOMapItemIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket
{
    NSDictionary *_components;
    GEOMapItemIdentifier *_identifier;
    int _resultProviderID;
    NSString *_contentProvider;
}

- (void).cxx_destruct;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;

@end

