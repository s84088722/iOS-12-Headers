//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EKExpandingTextView, UITextView;

@interface _RemindersTextEditCell : UITableViewCell
{
    UITextView *_sizingTextView;
    EKExpandingTextView *_expandingTextView;
    double _verticalPadding;
    double _minimumHeight;
}

@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(readonly, nonatomic) EKExpandingTextView *expandingTextView; // @synthesize expandingTextView=_expandingTextView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeight;
- (double)_heightNeededForContentWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

