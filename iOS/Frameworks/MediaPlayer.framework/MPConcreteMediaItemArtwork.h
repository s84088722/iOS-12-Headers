//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork
{
    MPArtworkCatalog *_catalog;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
- (struct CGRect)bounds;
- (id)initWithArtworkCatalog:(id)arg1;
- (id)initWithArtworkCatalog:(id)arg1 allowsNetworking:(_Bool)arg2;

@end

