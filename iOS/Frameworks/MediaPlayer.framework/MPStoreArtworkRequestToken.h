//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSourceVisualIdenticality-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality>
{
    _Bool _shouldIgnoreImage;
    NSURL *_artworkURL;
    NSArray *_lookupItemArtworks;
    NSString *_cropStyle;
    NSString *_sourceEditorialArtworkKind;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sourceEditorialArtworkKind; // @synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind;
@property(nonatomic) _Bool shouldIgnoreImage; // @synthesize shouldIgnoreImage=_shouldIgnoreImage;
@property(copy, nonatomic) NSString *cropStyle; // @synthesize cropStyle=_cropStyle;
@property(copy, nonatomic) NSArray *lookupItemArtworks; // @synthesize lookupItemArtworks=_lookupItemArtworks;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

