//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface EKEventDetailTwoValueCell : EKEventDetailCell
{
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)_layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (int)twoValueCellStyle;
- (id)value2View;
- (id)valueView;
- (id)titleView;
- (_Bool)update;
@property(readonly, nonatomic) unsigned int visibleItems;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 platformStyle:(int)arg3;

@end

