//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EMKEmojiTokenList;

@interface EMKOverlayView : UIView
{
    unsigned long long _numEmojiToShow;
    EMKEmojiTokenList *_emojiTokenList;
    struct CGRect _overlayRect;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _selectionHandler;
}

- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)selectWithEvent:(id)arg1;
- (void)dismiss;
- (void)dismissWithSelectedEmojiToken:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawForeground:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)setView:(id)arg1 anchorRect:(struct CGRect)arg2;
- (id)initWithView:(id)arg1 anchorRect:(struct CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(CDUnknownBlockType)arg4;

@end

