//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsDebugTableRow.h"

@class NSProgress;

__attribute__((visibility("hidden")))
@interface MapsDebugActionTableRow : MapsDebugTableRow
{
    NSProgress *_internalProgress;
    NSProgress *_observingProgress;
}

@property(retain, nonatomic) NSProgress *observingProgress; // @synthesize observingProgress=_observingProgress;
- (void).cxx_destruct;
- (void)setSelectionAction:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setProgressViewHidden:(_Bool)arg1;
- (id)_findTableView;
- (void)configureCell:(id)arg1;
- (void)dealloc;
- (id)reuseIdentifier;

@end

