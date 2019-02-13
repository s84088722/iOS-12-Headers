//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/NSCopying-Protocol.h>

@interface EKDayViewItemPath : NSObject <NSCopying>
{
    int _section;
    unsigned long long _index;
}

+ (id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) int section; // @synthesize section=_section;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2;

@end

