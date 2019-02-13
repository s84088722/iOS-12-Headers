//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCHMediatorProvider-Protocol.h>
#import <iWorkImport/TSCHNotifyOnModify-Protocol.h>

@class NSString, TSCHChartMediator;

__attribute__((visibility("hidden")))
@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>
{
    TSCHChartMediator *mMediator;
}

@property(readonly, retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mMediator;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 andMediator:(id)arg2;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;
- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

