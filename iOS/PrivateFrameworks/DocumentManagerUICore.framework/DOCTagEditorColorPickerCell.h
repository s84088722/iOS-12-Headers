//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell
{
    DOCTagColorPicker *_colorPickerView;
}

@property(retain, nonatomic) DOCTagColorPicker *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property(readonly, nonatomic) long long selectedColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

