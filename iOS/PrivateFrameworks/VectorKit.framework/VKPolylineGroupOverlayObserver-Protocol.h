//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKPolylineGroupOverlay, VKPolylineOverlay;

@protocol VKPolylineGroupOverlayObserver <NSObject>
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didSelectPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didRemovePolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didAddPolyline:(VKPolylineOverlay *)arg2;
@end

