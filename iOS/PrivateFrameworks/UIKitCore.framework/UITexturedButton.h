//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton
{
}

- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (long long)buttonType;
- (id)initWithFrame:(struct CGRect)arg1;

@end

