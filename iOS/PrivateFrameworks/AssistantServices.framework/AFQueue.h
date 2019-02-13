//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSFastEnumeration-Protocol.h>

@class NSMutableArray;
@protocol AFQueueDelegate;

@interface AFQueue : NSObject <NSFastEnumeration>
{
    id <AFQueueDelegate> _delegate;
    NSMutableArray *_objects;
}

@property(readonly, nonatomic, getter=_objects) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) __weak id <AFQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (void)enqueueObjects:(id)arg1;
- (void)enqueueObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) id frontObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

