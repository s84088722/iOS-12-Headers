//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject>
{
    struct NSString *_name;
    NSObject<OS_dispatch_queue> *_innerQueue;
}

+ (id)serialQueueWithName:(struct NSString *)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *innerQueue; // @synthesize innerQueue=_innerQueue;
- (void).cxx_destruct;
- (void)asyncBlock:(CDUnknownBlockType)arg1;
- (_Bool)syncBOOLReturningBlock:(CDUnknownBlockType)arg1;
- (id)syncReturningBlock:(CDUnknownBlockType)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initSerialQueueWithName:(struct NSString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
