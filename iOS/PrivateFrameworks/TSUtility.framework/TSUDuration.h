//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@interface TSUDuration : NSObject <NSCopying>
{
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)arg1;

@end

