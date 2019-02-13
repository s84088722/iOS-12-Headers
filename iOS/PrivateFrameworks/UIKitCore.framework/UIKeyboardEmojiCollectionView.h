//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionView.h>

@class UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UIResponder *_hitTestResponder;
}

@property(nonatomic) UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)closestCellForPoint:(struct CGPoint)arg1;
- (double)_currentScreenScale;
- (_Bool)_shouldReverseLayoutDirection;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;

@end

