//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <prequelite/PQLNameInjectionBase.h>

#import <prequelite/PQLInjecting-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting>
{
    NSMutableArray *_binds;
}

+ (id)formatInjection:(id)arg1;
- (void).cxx_destruct;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
@property(readonly, copy) NSString *description;
- (id)bindValuesToKeepAlive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *sql;
@property(readonly) Class superclass;

@end

