//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNLabeledBadge, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNGeminiBadge : UIView
{
    CNLabeledBadge *_labeledBadge;
}

+ (id)geminiBadgeWithText:(id)arg1;
@property(retain, nonatomic) CNLabeledBadge *labeledBadge; // @synthesize labeledBadge=_labeledBadge;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
@property(copy, nonatomic) NSDictionary *viewAttributes;

@end

