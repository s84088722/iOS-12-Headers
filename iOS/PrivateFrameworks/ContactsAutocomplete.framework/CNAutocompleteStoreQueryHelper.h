//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;
@protocol CNAutocompleteFetchDelegate, CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStoreQueryHelper : NSObject
{
    id <CNAutocompleteSearchProvider> _searchProvider;
    id <CNAutocompleteFetchDelegate> _delegate;
    id <CNScheduler> _scheduler;
    CNAutocompleteStoreQueryContext *_queryContext;
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteUserSession *_userSession;
}

@property(readonly, nonatomic) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(readonly, nonatomic) CNAutocompleteStoreQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) __weak id <CNAutocompleteFetchDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3;
- (id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5;

@end

