//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPQueryTask;

@interface SPQueryResponse : NSObject
{
    int _kind;
    int _state;
    SPQueryTask *_task;
    NSArray *_resultSections;
    NSString *_rankingDebugLog;
    NSString *_sessionEntityString;
}

@property(retain, nonatomic) NSString *sessionEntityString; // @synthesize sessionEntityString=_sessionEntityString;
@property(retain, nonatomic) NSString *rankingDebugLog; // @synthesize rankingDebugLog=_rankingDebugLog;
@property(retain, nonatomic) NSArray *resultSections; // @synthesize resultSections=_resultSections;
@property(retain, nonatomic) SPQueryTask *task; // @synthesize task=_task;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)initWithTask:(id)arg1;
- (id)copy;
- (id)description;
- (id)init;

@end

