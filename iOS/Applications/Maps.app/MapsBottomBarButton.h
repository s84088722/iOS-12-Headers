//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface MapsBottomBarButton : UIButton
{
    _Bool _shouldInvertSelectionColor;
    _Bool shouldInvertSelectionColor;
}

@property _Bool shouldInvertSelectionColor; // @synthesize shouldInvertSelectionColor;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (void)setSelected:(_Bool)arg1;
- (void)updateSelectedTintColor;
- (void)tintColorDidChange;

@end

