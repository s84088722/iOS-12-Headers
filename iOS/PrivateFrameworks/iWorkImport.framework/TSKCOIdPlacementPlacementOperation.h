//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation
{
}

- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformRemoveOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)transformAddOperation:(id)arg1 isHigherPriority:(_Bool)arg2 history:(id)arg3;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;

@end

