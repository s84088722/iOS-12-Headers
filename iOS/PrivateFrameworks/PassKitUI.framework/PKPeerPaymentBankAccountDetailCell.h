//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell
{
    _Bool _shouldDrawSeperator;
    _Bool _shouldDrawFullWidthSeperator;
    double _minimumTextLabelWidth;
}

@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property(nonatomic) _Bool shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property(nonatomic) _Bool shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
- (struct CGRect)_separatorFrame;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
