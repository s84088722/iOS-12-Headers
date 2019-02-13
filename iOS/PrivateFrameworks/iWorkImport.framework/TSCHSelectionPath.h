//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, TSCHSelectionPathType;

__attribute__((visibility("hidden")))
@interface TSCHSelectionPath : NSObject <NSCopying>
{
    TSCHSelectionPathType *mPathType;
    NSArray *mArguments;
    TSCHSelectionPath *mSubSelection;
}

+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2;
+ (id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) TSCHSelectionPath *subSelection; // @synthesize subSelection=mSubSelection;
@property(readonly, nonatomic) TSCHSelectionPathType *pathType; // @synthesize pathType=mPathType;
- (void).cxx_destruct;
- (void)saveToArchive:(struct ChartSelectionPathArchive *)arg1;
- (id)initWithArchive:(const struct ChartSelectionPathArchive *)arg1;
- (id)description;
- (id)debuggingName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)rangeOfPathsToPath:(id)arg1;
- (id)rangeOfReferenceLinePathsToPath:(id)arg1 forModel:(id)arg2;
- (unsigned long long)argumentsCount;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)name;
- (id)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
- (id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;

@end

