//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSMetadataQueryResultGroup : NSObject
{
    id _private[9];
    unsigned long long _private2[1];
    void *_reserved;
}

@property(readonly, copy) NSArray *results;
- (void)_zapResultArray;
- (id)resultAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long resultCount;
@property(readonly, copy) NSArray *subgroups;
@property(readonly, retain) id value;
@property(readonly, copy) NSString *attribute;
- (void)_addResult:(unsigned long long)arg1;
- (void)dealloc;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;

@end

