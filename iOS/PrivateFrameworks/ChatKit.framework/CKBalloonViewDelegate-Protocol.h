//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBalloonView;

@protocol CKBalloonViewDelegate <NSObject>
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)liveBalloonTouched:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1;

@optional
- (void)tuConversationBalloonJoinButtonTapped:(CKBalloonView *)arg1;
@end

