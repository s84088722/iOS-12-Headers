//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SortMapEntry : NSObject
{
    long long _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
    _Bool _dirty;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(_Bool)arg5;

@end

