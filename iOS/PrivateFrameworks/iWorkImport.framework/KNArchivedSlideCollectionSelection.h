//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class KNSlideCollectionSelection, NSString, TSKSelection;

__attribute__((visibility("hidden")))
@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection>
{
    KNSlideCollectionSelection *_selection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) KNSlideCollectionSelection *slideCollectionSelection;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

