//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSStyleObject-Protocol.h>

@class NSMutableArray, TSSStyle;

__attribute__((visibility("hidden")))
@interface TSSStylePromise : NSObject <TSSStyleObject>
{
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}

+ (id)promiseForStyle:(id)arg1;
- (void).cxx_destruct;
- (void)fulfillWithStyle:(id)arg1;
- (void)addPromisee:(id)arg1;
- (id)initWithStyle:(id)arg1;

@end

