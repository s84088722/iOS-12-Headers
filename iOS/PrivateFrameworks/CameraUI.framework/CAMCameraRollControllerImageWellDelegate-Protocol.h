//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCameraRollController, NSString, UIImage;

@protocol CAMCameraRollControllerImageWellDelegate <NSObject>

@optional
- (void)cameraRollController:(CAMCameraRollController *)arg1 didChangeImageWellImage:(UIImage *)arg2 withUUID:(NSString *)arg3 animated:(_Bool)arg4;
@end

