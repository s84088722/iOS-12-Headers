//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface QLAppearance : NSObject <NSSecureCoding>
{
    double _topInset;
    double _bottomInset;
    unsigned long long _presentationMode;
    struct UIEdgeInsets _peripheryInsets;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) struct UIEdgeInsets peripheryInsets; // @synthesize peripheryInsets=_peripheryInsets;
@property(readonly) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(readonly) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly) double topInset; // @synthesize topInset=_topInset;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 presentationMode:(unsigned long long)arg3 peripheryInsets:(struct UIEdgeInsets)arg4;

@end

