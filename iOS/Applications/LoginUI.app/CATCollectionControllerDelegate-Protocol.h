//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CATCollectionController;

@protocol CATCollectionControllerDelegate <NSObject>

@optional
- (void)controllerDidChangeSelectionIndexes:(CATCollectionController *)arg1;
- (void)controllerDidChangeContent:(CATCollectionController *)arg1;
- (void)controllerWillChangeContent:(CATCollectionController *)arg1;
- (void)controller:(CATCollectionController *)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controller:(CATCollectionController *)arg1 willChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
@end

