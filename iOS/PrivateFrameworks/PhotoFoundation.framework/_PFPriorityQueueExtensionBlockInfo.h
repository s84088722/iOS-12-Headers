//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PFPriorityQueueExtensionBlockInfo : NSObject
{
    unsigned int _qos;
    CDUnknownBlockType _block;
    unsigned long long _priority;
}

@property(readonly) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly) unsigned int qos; // @synthesize qos=_qos;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;

@end

