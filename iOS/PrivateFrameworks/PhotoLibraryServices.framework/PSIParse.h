//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject
{
    NSArray *_tokens;
    NSString *_string;
    PSIDateFilter *_dateFilter;
}

@property(copy, nonatomic) PSIDateFilter *dateFilter; // @synthesize dateFilter=_dateFilter;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithToken:(id)arg1;
- (id)parseByReplacingTokensInRange:(struct _NSRange)arg1 withTokens:(id)arg2;
- (id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2;
- (id)tokenAtIndex:(unsigned long long)arg1;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTokens;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;
- (id)initWithToken:(id)arg1;

@end

