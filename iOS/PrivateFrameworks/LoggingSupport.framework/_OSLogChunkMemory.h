//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupport/_OSLogChunkStore.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkMemory : _OSLogChunkStore
{
    CDUnknownBlockType _deallocator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;

@end

