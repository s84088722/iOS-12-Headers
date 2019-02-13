//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/RTEvent.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSArray;

@interface RTEventMicroLocation : RTEvent <NSSecureCoding>
{
    NSArray *_microLocations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *microLocations; // @synthesize microLocations=_microLocations;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4 microLocations:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4;

@end
