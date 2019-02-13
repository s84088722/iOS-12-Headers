//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTTableHeaderInfo;

@protocol TSTTableHeaderStorage <NSObject>
- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (long long)count;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)enumerateHeadersWithBlock:(void (^)(TSTTableHeaderInfo *, unsigned int, _Bool *))arg1;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned int)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (TSTTableHeaderInfo *)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2;
@end

