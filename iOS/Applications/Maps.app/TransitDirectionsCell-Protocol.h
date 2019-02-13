//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TransitDirectionsListItem, UIView;

@protocol TransitDirectionsCell <NSObject>
@property(nonatomic) long long navigationState;
@property(nonatomic) _Bool useLeadingInstructionMarginAsLeadingSeparatorInset;
@property(retain, nonatomic) UIView *trailingView;
@property(nonatomic) double leadingInstructionMargin;
@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
- (void)configureWithItem:(TransitDirectionsListItem *)arg1;
@end

