//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSource.h>

@class NSArray;

@interface PXMFRecipientSearchDataSource : PXRecipientSearchDataSource
{
    NSArray *_searchResults;
}

@property(readonly, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithSearchResults:(id)arg1;

@end

