//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutDataSourceChangeDetails-Protocol.h>

@class NSIndexSet, PXArrayChangeDetails;

@protocol PXSectionedLayoutDataSourceChangeDetails <PXLayoutDataSourceChangeDetails>
@property(readonly, nonatomic) NSIndexSet *sectionsWithItemChanges;
@property(readonly, nonatomic) PXArrayChangeDetails *sectionChanges;
- (PXArrayChangeDetails *)itemChangesInSection:(long long)arg1;
@end

