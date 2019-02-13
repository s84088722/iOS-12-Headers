//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSFetchedResultsController.h>

@class NSArray, NSFetchRequest, NSPredicate, NSString;
@protocol NSFetchedResultsControllerDelegate;

@interface RCSavedRecordingsController : NSFetchedResultsController
{
    NSFetchRequest *_fetchRequest;
    NSPredicate *_fetchPredicate;
    NSString *_searchString;
    id <NSFetchedResultsControllerDelegate> _defaultDelegate;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *fetchedRecordings;
- (void)setDelegate:(id)arg1;
- (void)setDefaultDelegate:(id)arg1;
- (void)invalidate;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;

@end

