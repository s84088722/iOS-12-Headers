//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface HistoryTableViewDataSourceChange : NSObject
{
    _Bool _sectionChange;
    long long _changeType;
    NSIndexPath *_changeIndexPath;
}

+ (id)changeWithType:(long long)arg1 indexPath:(id)arg2 isSectionChange:(_Bool)arg3;
@property(retain, nonatomic) NSIndexPath *changeIndexPath; // @synthesize changeIndexPath=_changeIndexPath;
@property(nonatomic, getter=isSectionChange) _Bool sectionChange; // @synthesize sectionChange=_sectionChange;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;

@end

