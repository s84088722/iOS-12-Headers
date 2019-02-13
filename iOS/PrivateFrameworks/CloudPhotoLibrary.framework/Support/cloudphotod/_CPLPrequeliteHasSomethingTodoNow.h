//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLInjecting-Protocol.h"

@class NSData, NSString;
@protocol PQLBindable;

@interface _CPLPrequeliteHasSomethingTodoNow : NSObject <PQLInjecting>
{
    id <PQLBindable> _now;
    NSData *_sql;
}

@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
- (void).cxx_destruct;
- (id)bindValuesToKeepAlive;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithSQL:(id)arg1 now:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

