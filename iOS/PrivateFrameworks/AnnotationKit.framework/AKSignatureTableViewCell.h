//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AKSignature, UIImageView;

@interface AKSignatureTableViewCell : UITableViewCell
{
    AKSignature *_signature;
    UIImageView *_signatureImageView;
}

@property(retain, nonatomic) UIImageView *signatureImageView; // @synthesize signatureImageView=_signatureImageView;
@property(retain, nonatomic) AKSignature *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (void)_setImageFromSignature;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

