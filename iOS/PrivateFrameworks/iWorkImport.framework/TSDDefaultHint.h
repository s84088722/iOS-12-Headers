//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDHint-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDDefaultHint : NSObject <TSDHint>
{
    struct CGRect mBounds;
    unsigned long long mEdges;
}

+ (Class)archivedHintClass;
@property(readonly, nonatomic) unsigned long long edges; // @synthesize edges=mEdges;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelectionPath:(id)arg1;
- (_Bool)isLastPartitionHorizontally:(_Bool)arg1;
- (id)copyForArchiving;
- (id)initWithBounds:(struct CGRect)arg1 edges:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

