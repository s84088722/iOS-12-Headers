//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTileDecoder-Protocol.h>

@class NSString;

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>
{
}

- (id)decodeTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (_Bool)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

