//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSThreadPerformInfo : NSObject
{
    id target;
    SEL selector;
    id argument;
    NSMutableArray *modes;
    NSCondition *waiter;
    char *signalled;
}

- (void)dealloc;

@end

