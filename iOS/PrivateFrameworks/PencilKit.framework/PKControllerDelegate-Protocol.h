//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawing;

@protocol PKControllerDelegate <NSObject>
- (void)drawingChanged:(PKDrawing *)arg1;
- (void)setNeedsDrawingDisplay;
- (void)setAllowLiveInteraction:(_Bool)arg1;
@end
