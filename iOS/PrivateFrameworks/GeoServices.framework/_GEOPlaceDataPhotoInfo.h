//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemPhotoInfo-Protocol.h>

@class NSString, NSURL;

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo>
{
    struct CGSize _size;
    NSURL *_url;
}

+ (id)sortedPhotoInfoFromPhotoVersions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithPhotoContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

