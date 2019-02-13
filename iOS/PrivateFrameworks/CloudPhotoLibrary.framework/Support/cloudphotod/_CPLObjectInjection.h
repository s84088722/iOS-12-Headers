//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLInjecting-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface _CPLObjectInjection : NSObject <PQLInjecting>
{
    NSMutableArray *_bindValuesToKeepAlive;
    NSArray *_variables;
    id _object;
    NSData *_sql;
}

@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSArray *variables; // @synthesize variables=_variables;
- (void).cxx_destruct;
- (id)bindValuesToKeepAlive;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithVariables:(id)arg1 object:(id)arg2 sql:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

