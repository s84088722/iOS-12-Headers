//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@interface MPStoreModelCuratorBuilder : MPStoreModelObjectBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int shortName:1;
        unsigned int hasSocialPosts:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int curatorKind:1;
        unsigned int editorialArtwork:1;
        unsigned int brandLogoArtwork:1;
    } _requestedCuratorProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end
