//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem
{
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

- (void).cxx_destruct;
- (id)sortPath;
- (id)modificationDate;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(_Bool *)arg3;
- (id)url;
- (id)subtitle;
- (void)_modelChanged;
- (id)title;
- (long long)type;
@property(readonly, nonatomic) BRContainer *container;
- (id)initWithContainer:(id)arg1;

@end

