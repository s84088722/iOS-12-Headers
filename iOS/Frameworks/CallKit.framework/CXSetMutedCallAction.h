//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction
{
    _Bool _muted;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 muted:(_Bool)arg2;

@end

