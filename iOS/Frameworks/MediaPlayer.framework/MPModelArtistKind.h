//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelArtistKind : MPModelKind
{
    MPModelAlbumKind *_albumKind;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithAlbumKind:(id)arg1;
@property(readonly, copy, nonatomic) MPModelAlbumKind *albumKind; // @synthesize albumKind=_albumKind;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end

