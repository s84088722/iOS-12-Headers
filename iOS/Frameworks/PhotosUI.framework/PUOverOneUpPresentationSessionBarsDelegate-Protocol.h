//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSDictionary, NSString, PUOverOneUpPresentationSession, UIBarButtonItem;

@protocol PUOverOneUpPresentationSessionBarsDelegate <NSObject>

@optional
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didAppendReviewScreenAction:(unsigned long long)arg2;
- (UIBarButtonItem *)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 barButtonItemForActivityType:(NSString *)arg2;
- (void)overOneUpPresentationSession:(PUOverOneUpPresentationSession *)arg1 didCompleteWithActivityType:(NSString *)arg2 assetsByAssetCollection:(NSDictionary *)arg3 success:(_Bool)arg4;
@end
