//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryResultEnumerator-Protocol.h"

@class NSError;

@interface LibraryErrorResultEnumerator : NSObject <LibraryResultEnumerator>
{
    NSError *_error;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) long long resultComplexity;
- (id)initWithError:(id)arg1;

@end

