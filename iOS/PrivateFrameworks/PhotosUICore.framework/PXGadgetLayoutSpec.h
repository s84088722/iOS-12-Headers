//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGadgetLayoutSpec : NSObject
{
    long long _scrollDirection;
    struct UIEdgeInsets _layoutInsets;
}

@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToGadgetLayoutSpec:(id)arg1;
- (double)sectionHeaderHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 width:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(_Bool)arg5;
- (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(_Bool)arg2;
- (id)initWithTraitCollection:(id)arg1 scrollDirection:(long long)arg2;

@end

