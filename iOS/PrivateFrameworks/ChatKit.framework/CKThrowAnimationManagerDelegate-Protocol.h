//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMessageEntryView, CKThrowAnimationManager, NSArray;
@protocol CKSendAnimationContext;

@protocol CKThrowAnimationManagerDelegate <NSObject>
- (struct CGRect)throwAnimationWindowFrame:(CKThrowAnimationManager *)arg1;
- (struct CGRect)throwAnimationKeyboardFrame:(CKThrowAnimationManager *)arg1;
- (double)throwAnimationManagerTopHeaderHeight:(CKThrowAnimationManager *)arg1;
- (double)throwAnimationManagerAccessoryViewHeight:(CKThrowAnimationManager *)arg1;
- (CKMessageEntryView *)throwAnimationManagerEntryView:(CKThrowAnimationManager *)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(CKThrowAnimationManager *)arg1 context:(id <CKSendAnimationContext>)arg2;
- (void)throwAnimationManager:(CKThrowAnimationManager *)arg1 canNowSendMessages:(NSArray *)arg2;
@end

