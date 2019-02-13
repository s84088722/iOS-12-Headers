//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFeedGroup, FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, NSArray, NSString;

@interface FCFeedGroupEmittingOperation : FCOperation
{
    _Bool _resultFinished;
    CDUnknownBlockType _groupEmittingCompletionHandler;
    FCFeedGroupEmittingContext *_context;
    FCFeedGroupEmittingCursor *_fromCursor;
    FCFeedGroupEmittingCursor *_toCursor;
    NSString *_groupEmitterIdentifier;
    FCFeedGroup *_resultGroup;
    NSArray *_resultGroups;
    FCFeedGroupEmittingCursor *_resultCursor;
}

@property(nonatomic) _Bool resultFinished; // @synthesize resultFinished=_resultFinished;
@property(retain, nonatomic) FCFeedGroupEmittingCursor *resultCursor; // @synthesize resultCursor=_resultCursor;
@property(retain, nonatomic) NSArray *resultGroups; // @synthesize resultGroups=_resultGroups;
@property(retain, nonatomic) FCFeedGroup *resultGroup; // @synthesize resultGroup=_resultGroup;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier; // @synthesize groupEmitterIdentifier=_groupEmitterIdentifier;
@property(readonly, nonatomic) FCFeedGroupEmittingCursor *toCursor; // @synthesize toCursor=_toCursor;
@property(readonly, nonatomic) FCFeedGroupEmittingCursor *fromCursor; // @synthesize fromCursor=_fromCursor;
@property(readonly, nonatomic) FCFeedGroupEmittingContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType groupEmittingCompletionHandler; // @synthesize groupEmittingCompletionHandler=_groupEmittingCompletionHandler;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;

@end

