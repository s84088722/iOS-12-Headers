//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface TSDInfoHyperlinkSelection : TSKSelection
{
    NSSet *_infos;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithInfos:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long infoCount;
- (id)initWithInfos:(id)arg1;

@end

