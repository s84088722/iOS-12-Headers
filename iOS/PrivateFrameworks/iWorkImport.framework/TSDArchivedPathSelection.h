//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDPathSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedPathSelection : TSPObject <TSKArchivedSelection>
{
    TSDPathSelection *mPathSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mPathSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

