//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentPreviewImage.h>

@class UIImage;

@interface ICAttachmentPreviewImage (UI)
+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
+ (id)imageCache;
- (void)writeOrientedPreviewToDisk;
@property(readonly, nonatomic) UIImage *image;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1 asyncDataLoading:(_Bool)arg2;
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1;
- (struct UIImage *)orientedImageWithBackground:(int)arg1;
- (struct UIImage *)imageWithBackground:(int)arg1;
- (long long)previewImageOrientation;
@property(readonly, nonatomic) UIImage *orientedImage;
- (struct CGAffineTransform)orientedImageTransform;
- (void)clearCachedOrientedImage;
- (void)setCachedOrientedImage:(struct UIImage *)arg1;
- (struct UIImage *)cachedOrientedImage;
- (id)orientedImageID;
- (void)clearCachedImage;
- (_Bool)hasCachedImage;
- (void)setCachedImage:(struct UIImage *)arg1;
- (struct UIImage *)cachedImage;
@end

