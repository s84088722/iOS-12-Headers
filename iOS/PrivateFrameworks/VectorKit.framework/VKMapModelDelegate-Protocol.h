//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, VKMapModel;

@protocol VKMapModelDelegate <NSObject>
- (void)mapModelDidUpdateMinMaxZoomLevel:(VKMapModel *)arg1;
- (void)mapModel:(VKMapModel *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelLabelsDidLayout:(VKMapModel *)arg1;
- (void)mapModel:(VKMapModel *)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(VKMapModel *)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModelDidFailLoadingTiles:(VKMapModel *)arg1 withError:(NSError *)arg2;
- (void)mapModelDidFinishLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidStartLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidBecomeFullyDrawn:(VKMapModel *)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapModelWillBecomeFullyDrawn:(VKMapModel *)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(VKMapModel *)arg1;

@optional
- (void)mapModelStylesheetDidChange:(VKMapModel *)arg1;
- (void)mapModelDidReloadStylesheet:(VKMapModel *)arg1;
- (void)mapModel:(VKMapModel *)arg1 didUpdateContainsOverlay:(_Bool)arg2;
@end
