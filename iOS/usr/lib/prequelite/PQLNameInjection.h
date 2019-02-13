//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <prequelite/PQLNameInjectionBase.h>

#import <prequelite/PQLInjecting-Protocol.h>

@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>
{
}

+ (id)nameWithPrefix:(id)arg1 suffix:(id)arg2;
+ (id)nameWithString:(id)arg1;
+ (id)_appendString:(id)arg1 toInjection:(id)arg2;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithString:(id)arg1;
- (id)nameByAddingSuffix:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *sql;
@property(readonly) Class superclass;

@end

