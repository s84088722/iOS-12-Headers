//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCMessageObject.h"

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface IPCLoadDirectionsMessage : IPCMessageObject
{
    _Bool _originIsWatch;
    NSURL *_url;
    NSData *_routeContext;
}

@property(copy, nonatomic) NSData *routeContext; // @synthesize routeContext=_routeContext;
@property(nonatomic) _Bool originIsWatch; // @synthesize originIsWatch=_originIsWatch;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

