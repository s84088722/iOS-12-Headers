//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

__attribute__((visibility("hidden")))
@interface TSKAccessControllerWriterQueueItem : NSObject
{
    struct NSThread *_threadIdentifier;
}

+ (id)priorityMainThreadWriterQueueItem;
+ (id)writerQueueItemWithThreadIdentifier:(struct NSThread *)arg1;
@property(readonly, nonatomic) NSThread *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool didTakePriority;
- (id)initWithThreadIdentifier:(struct NSThread *)arg1;

@end

