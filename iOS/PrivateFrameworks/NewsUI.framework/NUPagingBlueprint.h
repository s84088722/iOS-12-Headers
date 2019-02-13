//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPaging-Protocol.h>

@class NSArray, NSOrderedSet, NSString;
@protocol NUPage;

@interface NUPagingBlueprint : NSObject <NUPaging>
{
    NSOrderedSet *_blueprintItems;
}

@property(retain, nonatomic) NSOrderedSet *blueprintItems; // @synthesize blueprintItems=_blueprintItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) id <NUPage> lastPage;
@property(readonly, nonatomic) id <NUPage> firstPage;
- (void)forEachPage:(CDUnknownBlockType)arg1;
- (id)pageAfterIdentifier:(id)arg1;
- (id)pageForIdentifier:(id)arg1;
- (id)pageBeforeForIdentifier:(id)arg1;
- (id)initWithPages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
