//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSUUID;
@protocol ICTableUndoHelping;

@protocol ICTableCellMergeableStringObserving <NSObject>
@property(readonly, nonatomic) id <ICTableUndoHelping> undoHelper;
- (void)tableCellWasEditedAtColumnID:(NSUUID *)arg1 rowID:(NSUUID *)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange)arg4 changeInLength:(long long)arg5;
@end

