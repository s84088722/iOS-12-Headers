//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class PHLivePhotoView;

@protocol PHLivePhotoViewDelegate <NSObject>

@optional
- (void)livePhotoView:(PHLivePhotoView *)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(PHLivePhotoView *)arg1 willBeginPlaybackWithStyle:(long long)arg2;
@end

