//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryResultEnumerator-Protocol.h"

@protocol NSFastEnumeration;

@interface LibraryLazyResultsEnumerator : NSObject <LibraryResultEnumerator>
{
    CDUnknownBlockType _block;
    id <NSFastEnumeration> _enumerator;
    long long _resultComplexity;
}

@property(readonly) long long resultComplexity; // @synthesize resultComplexity=_resultComplexity;
- (void).cxx_destruct;
- (id)_enumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithComplexity:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

