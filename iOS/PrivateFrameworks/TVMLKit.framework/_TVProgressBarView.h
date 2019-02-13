//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView
{
    _Bool _useMaterial;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_completeTintColor;
}

@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

