//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface ArraySlice : NSArray
{
    NSArray *_array;
    unsigned long long _offset;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithArray:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3;

@end

