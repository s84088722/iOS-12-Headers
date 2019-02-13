//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchQuery, NSDictionary, NSPredicate, NSString;
@protocol MDSearchQueryDelegate, OS_dispatch_queue;

@interface MDSearchQuery : NSObject
{
    unsigned long long _status;
    NSPredicate *_predicate;
    id <MDSearchQueryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSSearchQuery *_query;
    NSString *_clientBundleID;
}

@property(retain) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain, nonatomic) CSSearchQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <MDSearchQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReturnItems:(id)arg1;
@property unsigned long long status;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSDictionary *options;
- (id)queryString;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)initWithPredicate:(id)arg1 options:(id)arg2;

@end

