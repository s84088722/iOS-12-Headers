//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RouteMarkerFormatterInfo : NSObject
{
    unsigned char _etaComparison;
    unsigned char _tollCurrency;
    NSString *_routeDescription;
}

@property(readonly, nonatomic) unsigned char tollCurrency; // @synthesize tollCurrency=_tollCurrency;
@property(readonly, nonatomic) unsigned char etaComparison; // @synthesize etaComparison=_etaComparison;
@property(readonly, copy, nonatomic) NSString *routeDescription; // @synthesize routeDescription=_routeDescription;
- (void).cxx_destruct;
- (id)initWithRouteDescription:(id)arg1 etaComparison:(unsigned char)arg2 tollCurrency:(unsigned char)arg3;

@end

