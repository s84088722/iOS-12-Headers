//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (VideosUI)
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 rowAnimation:(long long)arg3 updateDataSourceBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end
