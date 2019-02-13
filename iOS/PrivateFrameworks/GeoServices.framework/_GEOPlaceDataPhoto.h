//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemPhoto-Protocol.h>

@class GEOPDCaptionedPhoto, GEOPDPhoto, NSArray, NSString, NSURL;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto>
{
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    NSArray *_sortedPhotoInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double sizeRatio;
- (id)bestPhotoForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (id)largestPhoto;
@property(readonly, nonatomic) NSString *uid;
@property(readonly, nonatomic) _Bool useGallery;
@property(readonly, nonatomic) _Bool displayFullPhotoInline;
@property(readonly, nonatomic) NSURL *licenseURL;
@property(readonly, nonatomic) NSString *licenseDescription;
@property(readonly, nonatomic) NSString *caption;
@property(readonly, nonatomic) NSString *author;
- (id)initWithPhoto:(id)arg1;
- (id)initWithCaptionedPhoto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

