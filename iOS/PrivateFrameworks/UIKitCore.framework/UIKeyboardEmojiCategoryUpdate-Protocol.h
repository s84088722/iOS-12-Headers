//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardEmojiKeyDisplayController;

@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property(nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
- (void)updateToCategory:(long long)arg1;

@optional
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
@end

