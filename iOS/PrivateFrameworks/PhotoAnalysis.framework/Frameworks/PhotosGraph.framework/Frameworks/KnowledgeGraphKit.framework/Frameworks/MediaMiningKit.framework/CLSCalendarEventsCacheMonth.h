//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject
{
    long long _month;
    NSMutableSet *_days;
}

@property(readonly, nonatomic) NSMutableSet *days; // @synthesize days=_days;
@property(nonatomic) long long month; // @synthesize month=_month;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithMonth:(long long)arg1;

@end

