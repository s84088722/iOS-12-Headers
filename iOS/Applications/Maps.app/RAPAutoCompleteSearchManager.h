//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPInitialViewControllerProvider-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RAPAutoCompleteSearchManager : NSObject <RAPInitialViewControllerProvider>
{
    NSMutableArray *_lists;
    NSString *_lastQuery;
}

@property(copy, nonatomic) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(retain, nonatomic) NSMutableArray *lists; // @synthesize lists=_lists;
- (void).cxx_destruct;
- (id)rapViewControllerWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordValues:(id)arg1 forKey:(id)arg2 withTicket:(id)arg3;
- (id)init;

@end
