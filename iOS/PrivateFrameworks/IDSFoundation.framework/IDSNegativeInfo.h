//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@interface IDSNegativeInfo : NSObject <NSCopying>
{
    double _time;
    long long _count;
}

@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTime:(double)arg1 count:(long long)arg2;

@end

