//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSString;
@protocol CRKTableEntries, CRKTableEntry;

@interface CRKTableEntriesWithColumnSpacer : NSObject <CRKTableEntries>
{
    id <CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    id <CRKTableEntry> mSpacerEntry;
}

- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 spacerEntry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

