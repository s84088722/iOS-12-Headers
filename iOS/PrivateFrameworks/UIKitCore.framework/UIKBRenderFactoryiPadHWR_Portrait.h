//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory10Key_Round.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key_Round
{
}

- (void)setupLayoutSegments;
- (double)controlColumnWidthFactor;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (_Bool)_displaysAsControlKeyStyle:(id)arg1;
- (_Bool)shouldUseRoundCornerForKey:(id)arg1;
- (struct CGPoint)_controlKeyOffset;
- (_Bool)_anchorControlKeys;
- (struct UIEdgeInsets)symbolFrameInsets;
- (id)messagesWriteboardKeyImageName;
- (struct CGPoint)spaceReturnKeyTextOffset;
- (struct CGPoint)dismissKeyOffset;
- (double)dismissKeyFontSize;
- (double)spaceKeyFontSize;
- (double)dictationKeyFontSize;
- (double)internationalKeyFontSize;
- (double)moreKeyFontSize;
- (double)deleteKeyFontSize;
- (double)keyCornerRadius;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;

@end

